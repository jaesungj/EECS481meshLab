/****************************************************************************
* MeshLab                                                           o o     *
* An extendible mesh processor                                    o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005, 2009                                          \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/

/* A class to represent the ui for the pickpoints plugin
 *  
 * @author Oscar Barney
 */

#include <QFileDialog>
#include <math.h>
#include <common/meshmodel.h>
#include <meshlab/stdpardialog.h>
#include <meshlab/glarea.h>
#include <string>
#include "editpickpoints.h"
#include "pickpointsDialog.h"
#include <wrap/gl/picking.h>
#include <wrap/gl/pick.h>

#include <vcg/space/index/grid_static_ptr.h>
#include <vcg/complex/algorithms/closest.h>

#include <fstream>
#include <iostream>
#include <string>

using namespace vcg;
int pointCount = 0;
class GetClosestFace
{

typedef GridStaticPtr<CMeshO::FaceType, CMeshO::ScalarType > MetroMeshGrid;
typedef tri::FaceTmark<CMeshO> MarkerFace;

public:
	
	GetClosestFace(){}
	
	void init(CMeshO *_m)
	{
		m=_m;
		if(m) 
		{
			unifGrid.Set(m->face.begin(),m->face.end());
			markerFunctor.SetMesh(m);
			
			dist_upper_bound = m->bbox.Diag()/10.0f;
		}
	}
	
	CMeshO *m;
	
	MetroMeshGrid unifGrid;
	
	MarkerFace markerFunctor;
	
	float dist_upper_bound;
	
	CMeshO::FaceType * getFace(vcg::Point3f &p) 
	{
		assert(m);
		// the results
		vcg::Point3f closestPt;
		float dist = dist_upper_bound;
		const CMeshO::CoordType &startPt = p;

		// compute distance between startPt and the mesh S2
		CMeshO::FaceType   *nearestF=0;
		vcg::face::PointDistanceBaseFunctor<CMeshO::ScalarType> PDistFunct;
		dist=dist_upper_bound;
		
		nearestF =  unifGrid.GetClosest(PDistFunct,markerFunctor,startPt,dist_upper_bound,dist,closestPt);
		
		if(dist == dist_upper_bound) qDebug() << "Dist is = upper bound";
		
		return nearestF;
	}
};

PickedPointTreeWidgetItem::PickedPointTreeWidgetItem(
		vcg::Point3f &intputPoint, CMeshO::FaceType::NormalType &faceNormal,
		QString name, bool _active) : QTreeWidgetItem(1001)
{
	//name
    name.setNum(pointCount);
	setName(name);
    pointCount++;
	active = _active;
	//would set the checkbox but qt doesnt allow a way to do this in the constructor
	
	//set point and normal
	setPointAndNormal(intputPoint, faceNormal);
}
		
void PickedPointTreeWidgetItem::setName(QString name){
	setText(0, name);
}

QString PickedPointTreeWidgetItem::getName(){
	return text(0);
}

void PickedPointTreeWidgetItem::setPointAndNormal(vcg::Point3f &intputPoint, CMeshO::FaceType::NormalType &faceNormal)
{
	point[0] = intputPoint[0];
	point[1] = intputPoint[1];
	point[2] = intputPoint[2];

	normal[0] = faceNormal[0];
	normal[1] = faceNormal[1];
	normal[2] = faceNormal[2];
	
	QString tempString;
	//x
	tempString.setNum(point[0]);
	setText(1, tempString);
	//y
	tempString.setNum(point[1]);
	setText(2, tempString);
	//z
	tempString.setNum(point[2]);
	setText(3, tempString);
}

vcg::Point3f PickedPointTreeWidgetItem::getPoint(){
	return point;
}

vcg::Point3f PickedPointTreeWidgetItem::getNormal(){
	return normal;
}

void PickedPointTreeWidgetItem::clearPoint(){
	point.SetZero();

	//x
	setText(1, "");
	//y
	setText(2, "");
	//z
	setText(3, "");	
	
	setActive(false);
}

bool PickedPointTreeWidgetItem::isActive()
{
	return active;
}

void PickedPointTreeWidgetItem::setActive(bool value)
{
	active = value;
	
	//stupid way QT makes you get a widget associated with this item
	QTreeWidget * treeWidget = this->treeWidget();
	assert(treeWidget);
	QWidget *widget = treeWidget->itemWidget(this, 4);
	assert(widget);
	QCheckBox *checkBox = qobject_cast<QCheckBox *>(widget);
	assert(checkBox);
	checkBox->setChecked(value);
}

void PickedPointTreeWidgetItem::toggleActive(bool value)
{
	active = value;
}

PickPointsDialog::PickPointsDialog(EditPickPointsPlugin *plugin,
		QWidget *parent) : QDockWidget(parent)    
{ 
	parentPlugin = plugin;
	
	//qt standard setup step
	PickPointsDialog::ui.setupUi(this);

	//setup borrowed from alighnDialog.cpp
	this->setWidget(ui.frame);
	this->setFeatures(QDockWidget::AllDockWidgetFeatures);
	this->setAllowedAreas(Qt::LeftDockWidgetArea);
	QPoint p=parent->mapToGlobal(QPoint(0,0));
	this->setFloating(true);
	this->setGeometry(p.x()+(parent->width()-width()),p.y()+40,width(),height() );

	//now stuff specific to pick points
	QStringList headerNames;
	headerNames << "Point Name" << "X" << "Y" << "Z" << "active";
	
	ui.pickedPointsTreeWidget->setHeaderLabels(headerNames);
	
	//init some variables
	
	//set to nothing for now
	lastPointToMove = 0;
	itemToMove = 0;
	meshModel = 0;
	_glArea = 0;
	
	//start at 0
    //pointCounter = 0;
	
	//start with no template
	setTemplateName("");
	
	currentMode = ADD_POINT;
	
	recordPointForUndo = false;
	
	getClosestFace = new GetClosestFace();
	
	//signals and slots
	connect(ui.removePointButton, SIGNAL(clicked()), this, SLOT(removeHighlightedPoint()));

	//rename when rename button clicked
	connect(ui.renamePointButton, SIGNAL(clicked()), this, SLOT(renameHighlightedPoint()));
	
	//rename on double click of point
	connect(ui.pickedPointsTreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem *, int)),
			this, SLOT(renameHighlightedPoint() ) );
	
    //connect(ui.clearPointButton, SIGNAL(clicked()), this, SLOT(clearHighlightedPoint()));
	connect(ui.pickPointModeRadioButton, SIGNAL(toggled(bool)), this, SLOT(togglePickMode(bool)) );
    //connect(ui.movePointRadioButton, SIGNAL(toggled(bool)), this, SLOT(toggleMoveMode(bool)) );
    //connect(ui.selectPointRadioButton, SIGNAL(toggled(bool)), this, SLOT(toggleSelectMode(bool)) );
    connect(ui.saveButton, SIGNAL(clicked()), this, SLOT(savePointsToFile()));
    connect(ui.loadPointsButton, SIGNAL(clicked()), this, SLOT(askUserForFileAndLoadPoints()));
	connect(ui.removeAllPointsButton, SIGNAL(clicked()), this, SLOT(clearPointsButtonClicked()));
    //connect(ui.saveTemplateButton, SIGNAL(clicked()), this, SLOT(savePointTemplate()));
    //connect(ui.loadTemplateButton, SIGNAL(clicked()), this, SLOT(askUserForFileAndloadTemplate()));
    //connect(ui.clearTemplateButton, SIGNAL(clicked()), this, SLOT(clearTemplateButtonClicked()) );
    //connect(ui.addPointToTemplateButton, SIGNAL(clicked()), this, SLOT(addPointToTemplate()) );
	connect(ui.undoButton, SIGNAL(clicked()), this, SLOT(undo()));
	connect(ui.pickedPointsTreeWidget, SIGNAL(itemClicked(QTreeWidgetItem *, int)), this, 
			SLOT(redrawPoints()) );
	
	connect(ui.showNormalCheckBox, SIGNAL(clicked()), this, SLOT(redrawPoints()));
	connect(ui.pinRadioButton, SIGNAL(clicked()), this, SLOT(redrawPoints()));
	connect(ui.lineRadioButton, SIGNAL(clicked()), this, SLOT(redrawPoints()));

}

PickPointsDialog::~PickPointsDialog()
{
	delete getClosestFace;
}

void PickPointsDialog::addMoveSelectPoint(Point3f point, CMeshO::FaceType::NormalType faceNormal)
{
	if(currentMode == ADD_POINT)
	{
		QTreeWidgetItem *item = 0;
		item = ui.pickedPointsTreeWidget->currentItem();
		
		PickedPointTreeWidgetItem *treeItem = 0;
		if(NULL != item)
		{
			treeItem = dynamic_cast<PickedPointTreeWidgetItem *>(item);
		}
				
		//if we are in template mode or if the highlighted point is not set
		if( (templateLoaded && NULL != treeItem ) || (NULL != treeItem && !treeItem->isActive()) )
		{
			treeItem->setPointAndNormal(point, faceNormal);
			treeItem->setActive(true);
			
			item = ui.pickedPointsTreeWidget->itemBelow(treeItem);
			if(NULL != item){
				//set the next item to be selected
				ui.pickedPointsTreeWidget->setCurrentItem(item);
			} else
			{
				//if we just picked the last point go into move mode
				toggleMoveMode(true);
			}
		} else {
			//use a number as the default name
            QString name;
            name.setNum(pointCount);

			addTreeWidgetItemForPoint(point, name, faceNormal, true);
		}
	} else if(currentMode == MOVE_POINT)
	{
		//test to see if there is actually a highlighted item
		if(NULL != itemToMove){
			//for undo
			if(recordPointForUndo)
			{
				lastPointToMove = itemToMove;
				lastPointPosition = lastPointToMove->getPoint();
				lastPointNormal = lastPointToMove->getNormal();
				recordPointForUndo = false;
			}
			
			//now change the point
			itemToMove->setPointAndNormal(point, faceNormal);
			itemToMove->setActive(true);
			ui.pickedPointsTreeWidget->setCurrentItem(itemToMove);
		}
	} else if(currentMode == SELECT_POINT)
	{
		ui.pickedPointsTreeWidget->setCurrentItem(itemToMove);
	}
}

void PickPointsDialog::recordNextPointForUndo()
{
	recordPointForUndo = true;
}

void PickPointsDialog::selectOrMoveThisPoint(Point3f point){
	qDebug() << "point is: " << point[0] << " " << point[1] << " " << point[2];
	
	//the item closest to the given point
	PickedPointTreeWidgetItem *closestItem = 0;
	
	//the smallest distance from the given point to one in the list
	//so far....
	float minDistanceSoFar = -1.0;
	
	for(int i = 0; i < pickedPointTreeWidgetItemVector.size(); i++){
		PickedPointTreeWidgetItem *item =
			pickedPointTreeWidgetItemVector.at(i);
		
		Point3f tempPoint = item->getPoint();
		
		//qDebug() << "tempPoint is: " << tempPoint[0] << " " << tempPoint[1] << " " << tempPoint[2];
		
		float temp = sqrt(pow(point[0]-tempPoint[0],2) +
						pow(point[1]-tempPoint[1],2) + 
						pow(point[2]-tempPoint[2],2));
		//qDebug() << "distance is: " << temp;
		
		if(minDistanceSoFar < 0 || minDistanceSoFar > temp){
			minDistanceSoFar = temp;
			closestItem = item;
		}
	}
	
	//if we found an itme
	if(NULL != closestItem){
		itemToMove = closestItem;
		//qDebug() << "Try to move: " << closestItem->getName();
	}
	
}	

void PickPointsDialog::redrawPoints()
{
	//parentPlugin->drawPickedPoints(pickedPointTreeWidgetItemVector, meshModel->cm.bbox);
	assert(_glArea);
	_glArea->update();
}

bool PickPointsDialog::showNormal()
{
	return ui.showNormalCheckBox->isChecked();
}
	
bool PickPointsDialog::drawNormalAsPin()
{
	return ui.pinRadioButton->isChecked();
}

void PickPointsDialog::addPoint(vcg::Point3f &point, QString &name, bool present)
{
	//bool result = GLPickTri<CMeshO>::PickNearestFace(currentMousePosition.x(),gla->height()-currentMousePosition.y(),
	//	mm.cm, face);
	CMeshO::FaceType *face = 0;
	
	//qDebug() << "present: " << present;
	
	//now look for the  normal
	if(NULL != meshModel && present)
	{	
		//need to update the mask
		meshModel->updateDataMask(MeshModel::MM_FACEMARK);
		
		face = getClosestFace->getFace(point);
		if(NULL == face)
			qDebug() << "no face found for point: " << name;	
	}
	
	//if we find a face add its normal. else add a default one
	if(NULL != face)
		addTreeWidgetItemForPoint(point, name, face->N(), present);
	else
	{
		vcg::Point3f faceNormal;
		addTreeWidgetItemForPoint(point, name, faceNormal, present);
	}
}

PickedPointTreeWidgetItem * PickPointsDialog::addTreeWidgetItemForPoint(vcg::Point3f &point, QString &name, CMeshO::FaceType::NormalType &faceNormal, bool present)
{
	PickedPointTreeWidgetItem *widgetItem =
			new PickedPointTreeWidgetItem(point, faceNormal, name, present);
	
	pickedPointTreeWidgetItemVector.push_back(widgetItem);
	
	ui.pickedPointsTreeWidget->addTopLevelItem(widgetItem);
	//select the newest item
	ui.pickedPointsTreeWidget->setCurrentItem(widgetItem);
	
	//add a checkbox to the widget item's 5th column (QT makes us add it in this strange way)
	TreeCheckBox *checkBox = new TreeCheckBox(ui.pickedPointsTreeWidget, widgetItem, this);
	ui.pickedPointsTreeWidget->setItemWidget(widgetItem, 4, checkBox);
	
	//set the box to show the proper check
	checkBox->setChecked(present);
	
	//now connect the box to its slot that chanches the checked value of the 
	//PickedPointTreeWidgetItem and draws all the points.  dont do this before
	//set checked or you will have all points that should be drawn, not drawn
	connect(checkBox, SIGNAL(toggled(bool)), checkBox, SLOT(toggleAndDraw(bool)) );
	
	return widgetItem;
}

void PickPointsDialog::clearPoints(bool clearOnlyXYZ){
	if(clearOnlyXYZ){
		//when using templates just clear the points that were picked but not the names
		for(int i = 0; i < pickedPointTreeWidgetItemVector.size(); i++){
			pickedPointTreeWidgetItemVector.at(i)->clearPoint();
		}
		//if the size is greater than 0 set the first point to be selected
		if(pickedPointTreeWidgetItemVector.size() > 0){
			ui.pickedPointsTreeWidget->setCurrentItem(
					pickedPointTreeWidgetItemVector.at(0));
		}
	} else {
		pickedPointTreeWidgetItemVector.clear();
		ui.pickedPointsTreeWidget->clear();
        pointCount = 0;
	}
	
	//draw without any points that may have been cleared
  //parentPlugin->drawPickedPoints(pickedPointTreeWidgetItemVector, meshModel->cm.bbox,painter);
	assert(_glArea);
	_glArea->update();
	
	//set to pick mode
	togglePickMode(true);
}

void PickPointsDialog::clearTemplate()
{
	//always clear the points
	clearPoints(false);

	setTemplateName("");
}

void PickPointsDialog::setTemplateName(QString name)
{
	templateName = name;
	if("" == templateName)
	{
		ui.templateNameLabel->setText("No Template Loaded");
		templateLoaded = false;
	} else 
	{
		ui.templateNameLabel->setText(templateName);
		templateLoaded = true;
	}
}

void PickPointsDialog::loadPickPointsTemplate(QString filename)
{
	//clear the points tree
	clearPoints(false);
	
	std::vector<QString> pointNameVector;
	
	PickPointsTemplate::load(filename, &pointNameVector);
	
	for(int i = 0; i < pointNameVector.size(); i++){
		vcg::Point3f point;
		vcg::Point3f faceNormal;
		PickedPointTreeWidgetItem *widgetItem = 
			addTreeWidgetItemForPoint(point, pointNameVector.at(i), faceNormal, false);
		widgetItem->clearPoint();
		
	}
	
	//select the first item in the list if it exists
	if(pickedPointTreeWidgetItemVector.size() > 0){
		ui.pickedPointsTreeWidget->setCurrentItem(pickedPointTreeWidgetItemVector.at(0));
	}
	
	setTemplateName(QFileInfo(filename).fileName());
	templateWorkingDirectory = filename;
}

std::vector<PickedPointTreeWidgetItem*>& PickPointsDialog::getPickedPointTreeWidgetItemVector(){
	return pickedPointTreeWidgetItemVector;
}

PickPointsDialog::Mode PickPointsDialog::getMode(){
	return currentMode;
}

void PickPointsDialog::setCurrentMeshModel(MeshModel *newMeshModel, GLArea *gla){
	meshModel = newMeshModel;
	assert(meshModel);
	_glArea = gla;
	assert(_glArea);
	
	//make sure undo is cleared
	lastPointToMove = 0;
	
	//clear any points that are still here
	clearPoints(false);
	
	//also clear the template
	clearTemplate();
	
	//make sure we start in pick mode
	togglePickMode(true);
	
	//set up the 
	getClosestFace->init(&(meshModel->cm));
	
	//Load the points from meta data if they are there
	if(vcg::tri::HasPerMeshAttribute(newMeshModel->cm, PickedPoints::Key))
	{		
		CMeshO::PerMeshAttributeHandle<PickedPoints*> ppHandle = 
                vcg::tri::Allocator<CMeshO>::GetPerMeshAttribute<PickedPoints*>(newMeshModel->cm, PickedPoints::Key);
			
		PickedPoints *pickedPoints = ppHandle();
		
		if(NULL != pickedPoints){
			
			const QString &name = pickedPoints->getTemplateName();
			setTemplateName(name);
			
			std::vector<PickedPoint*> * pickedPointVector = pickedPoints->getPickedPointVector();
			
			PickedPoint *point;
			for(int i = 0; i < pickedPointVector->size(); i++){
				point = pickedPointVector->at(i);
				
				addPoint(point->point, point->name, point->present);
			}
			
			redrawPoints();
		} else {
			qDebug() << "problem with cast!!";
		}
		
	} else {
	
		QString filename = PickedPoints::getSuggestedPickedPointsFileName(*meshModel);
		
		qDebug() << "suggested filename: " << filename;
		
		QFile file(filename);
		
		if(file.exists()){
			loadPoints(filename);
			
		} else 
		{
	
	//try loading the default template if there are not saved points already
	tryLoadingDefaultTemplate();
		
		}
	}
}

//loads the default template if there is one
void PickPointsDialog::tryLoadingDefaultTemplate()
{
	QString filename = PickPointsTemplate::getDefaultTemplateFileName();
	QFile file(filename);
	
	if(file.exists()){
		loadPickPointsTemplate(filename);
	}
	
	//clear all the garbage out of the names
	clearPoints(true);
}

void PickPointsDialog::removeHighlightedPoint(){
	//get highlighted point
	QTreeWidgetItem *item = ui.pickedPointsTreeWidget->currentItem();
	
	//test to see if there is actually a highlighted item
	if(NULL != item){
		PickedPointTreeWidgetItem* pickedItem =
			dynamic_cast<PickedPointTreeWidgetItem *>(item);
		
		
		//remove the point completely
		std::vector<PickedPointTreeWidgetItem*>::iterator iterator;
		iterator = std::find(pickedPointTreeWidgetItemVector.begin(),
				pickedPointTreeWidgetItemVector.end(),
				pickedItem);
		//remove item from vector
		pickedPointTreeWidgetItemVector.erase(iterator);
			
		//free memory used by widget
		delete pickedItem;
		
		//redraw without deleted point
		redrawPoints();
	} else
	{
		qDebug("no item picked");
	}
}

void PickPointsDialog::renameHighlightedPoint(){
	//get highlighted point
	QTreeWidgetItem *item = ui.pickedPointsTreeWidget->currentItem();
		
	//test to see if there is actually a highlighted item
	if(NULL != item){
			PickedPointTreeWidgetItem* pickedItem =
				dynamic_cast<PickedPointTreeWidgetItem *>(item);
			
		QString name = pickedItem->getName();
		//qDebug("Rename \n");
		//qDebug() << name;

		const QString newName = "newName";
		
		RichParameterSet parameterSet;
		parameterSet.addParam(new RichString(newName, name, "New Name", "Enter the new name"));
	
		GenericParamDialog getNameDialog(this,&parameterSet);
		getNameDialog.setWindowModality(Qt::WindowModal);
		getNameDialog.hide();
		
		//display dialog
		int result = getNameDialog.exec();
		if(result == QDialog::Accepted){
			name = parameterSet.getString(newName);
			//qDebug("New name os \n");
			//qDebug() << name;
			
			pickedItem->setName(name);
		
			//redraw with new point name
			redrawPoints();
		}
	}
}

void PickPointsDialog::clearHighlightedPoint()
{
	//get highlighted point
	QTreeWidgetItem *item = ui.pickedPointsTreeWidget->currentItem();
	
	//test to see if there is actually a highlighted item
	if(NULL != item){
		PickedPointTreeWidgetItem* pickedItem =
			dynamic_cast<PickedPointTreeWidgetItem *>(item);
		
		pickedItem->clearPoint();
		
		//redraw without deleted point
		redrawPoints();
	} else
	{
		qDebug("no item picked");
	}
}
	
void PickPointsDialog::togglePickMode(bool checked){
	if(checked){
		QApplication::setOverrideCursor( QCursor(Qt::ArrowCursor) );
		
		//qDebug() << "pick mode";
		currentMode = ADD_POINT;
		//make sure radio button reflects this change
		ui.pickPointModeRadioButton->setChecked(true);
	}
}

/*void PickPointsDialog::toggleMoveMode(bool checked)
{
	if(checked)
	{
		QApplication::setOverrideCursor( QCursor(Qt::ClosedHandCursor) );
		
		//qDebug() << "move mode";
		currentMode = MOVE_POINT;
		//make sure the radio button reflects this change
		ui.movePointRadioButton->setChecked(true);
	}
}*/

/*void PickPointsDialog::toggleSelectMode(bool checked)
{
	if(checked)
	{
		QApplication::setOverrideCursor( QCursor(Qt::PointingHandCursor) );
		
		//qDebug() << "select mode";
		currentMode = SELECT_POINT;
        //make radio button reflect the change
        ui.selectPointRadioButton->setChecked(true);
	}	
}*/

PickedPoints * PickPointsDialog::getPickedPoints()
{
	PickedPoints *pickedPoints = new PickedPoints();
	//add all the points
	for(int i = 0; i < pickedPointTreeWidgetItemVector.size(); i++){
		PickedPointTreeWidgetItem *item =
                pickedPointTreeWidgetItemVector.at(i);
		pickedPoints->addPoint(item->getName(), item->getPoint(), item->isActive());
	}
	
	pickedPoints->setTemplateName(templateName);
	
	return pickedPoints;
}

void PickPointsDialog::loadPoints(QString filename){
	//clear the points tree and template in case it was loaded
	clearTemplate();
		
	//get the points from file
	PickedPoints pickedPoints;
	pickedPoints.open(filename);
	
	const QString &name = pickedPoints.getTemplateName();
	setTemplateName(name);
	
	std::vector<PickedPoint*> *points = pickedPoints.getPickedPointVector();
	
	for(int i = 0; i < points->size(); i++){
		PickedPoint *pickedPoint = points->at(i);
		
		addPoint(pickedPoint->point, pickedPoint->name, pickedPoint->present);		
	}
	
	//redraw with new point name
	redrawPoints();
}

void PickPointsDialog::savePointsToFile()
{
	
	PickedPoints *pickedPoints = getPickedPoints();
	
	//save to a file if so desired and there are some points to save
	if(pickedPointTreeWidgetItemVector.size() > 0){

		QString suggestion(".");
		if(NULL != meshModel){
			suggestion = PickedPoints::getSuggestedPickedPointsFileName(*meshModel); 
		}
		QString filename = QFileDialog::getSaveFileName(this,tr("Save File"),suggestion, "*"+PickedPoints::fileExtension);
	
		if("" != filename)
		{
            pickedPoints->save(filename, QString(meshModel->shortName()));
			savePointsToMetaData();
		}
	}	
}

void PickPointsDialog::savePointsToMetaData()
{
	//save the points to the metadata
	if(NULL != meshModel){
        CMeshO::PerMeshAttributeHandle<PickedPoints*> ppHandle =vcg::tri::Allocator<CMeshO>::GetPerMeshAttribute<PickedPoints*> (meshModel->cm, PickedPoints::Key);
		ppHandle() = getPickedPoints();
		
		//qDebug() << "saved points";
	}	
}

void PickPointsDialog::askUserForFileAndLoadPoints()
{
	QString suggestion(".");
	if(NULL != meshModel)
		suggestion = PickedPoints::getSuggestedPickedPointsFileName(*meshModel);
	
	QString filename = QFileDialog::getOpenFileName(this, tr("Load File"),suggestion, "*"+PickedPoints::fileExtension);
	
	if("" != filename)	loadPoints(filename);
}

void PickPointsDialog::savePointTemplate(){
	std::vector<QString> pointNameVector;

	//add all the points
	for(int i = 0; i < pickedPointTreeWidgetItemVector.size(); i++){
		PickedPointTreeWidgetItem *item =
			pickedPointTreeWidgetItemVector.at(i);
			
		pointNameVector.push_back(item->getName());
	}
	
	//default if for the filename to be that of the default template
	QString filename = PickPointsTemplate::getDefaultTemplateFileName();

    if(!ui.defaultTemplateCheckBox->isChecked())
	{
		filename = QFileDialog::getSaveFileName(this, tr("Save File"), templateWorkingDirectory, "*"+PickPointsTemplate::fileExtension);
		
		//if the user pushes cancel dont do anything
		if("" == filename) return;
		else templateWorkingDirectory = filename;
    }
	
	
	//add the extension if the user forgot it
	if(!filename.endsWith(PickPointsTemplate::fileExtension))
		filename = filename + PickPointsTemplate::fileExtension;
	
	PickPointsTemplate::save(filename, &pointNameVector);
	setTemplateName(QFileInfo(filename).fileName());
		
    if(ui.defaultTemplateCheckBox->isChecked())
	{
		QMessageBox::information(this,  "MeshLab", "Default Template Saved!",
		               		QMessageBox::Ok);
    }
}

void PickPointsDialog::askUserForFileAndloadTemplate()
{
	QString filename = QFileDialog::getOpenFileName(this,tr("Load File"),templateWorkingDirectory, "*"+PickPointsTemplate::fileExtension);
	if("" != filename) loadPickPointsTemplate(filename);
}

void PickPointsDialog::clearPointsButtonClicked()
{
	
	QMessageBox messageBox(QMessageBox::Question, "Pick Points", "Are you sure you want to clear all points?",
	       		QMessageBox::Yes|QMessageBox::No, this);
	int returnValue = messageBox.exec();

	if(returnValue == QMessageBox::Yes)
	{
		//if the template is loaded clear only xyz values
		clearPoints(templateLoaded);
	}
}

void PickPointsDialog::clearTemplateButtonClicked(){
	
	QMessageBox messageBox(QMessageBox::Question, "Pick Points", "Are you sure you want to clear the template and any picked points?",
		   		QMessageBox::Yes|QMessageBox::No, this);
	int returnValue = messageBox.exec();

	if(returnValue == QMessageBox::Yes)
	{
		clearTemplate();
	}
}

void PickPointsDialog::addPointToTemplate()
{
	//
	if(!templateLoaded)
		setTemplateName("new Template");
	
	vcg::Point3f point;
	vcg::Point3f faceNormal;
	QString name("new point");
	PickedPointTreeWidgetItem *widgetItem =
		addTreeWidgetItemForPoint(point, name, faceNormal, false);
	widgetItem->clearPoint();

}

void PickPointsDialog::undo()
{
	if(NULL != lastPointToMove)
	{		
		vcg::Point3f tempPoint = lastPointToMove->getPoint();
        std::cout << tempPoint.X() <<endl;
        std::cout << tempPoint.Y() << endl;
        std::cout << tempPoint.Z() << endl;
		vcg::Point3f tempNormal = lastPointToMove->getNormal();

		lastPointToMove->setPointAndNormal(lastPointPosition, lastPointNormal);
		
		//set things so you can undo back if need be
		lastPointPosition = tempPoint;
		lastPointNormal = tempNormal;
		
		redrawPoints();
	}
}

//eecs481

void PickPointsDialog::on_calculateDistance_clicked()
{
    PickedPoints* pickedPoints = getPickedPoints();
    std::vector<vcg::Point3f>* getActivatedPoints = pickedPoints->getPoint3fVector();
    double distance = 0;
    int counter = 0;

    
    if (getActivatedPoints->size() == 2)
    {
        distance = Distance(getActivatedPoints->at(0),getActivatedPoints->at(1));
        std::ofstream outfile("metrics.txt", std::ios::app);

        std::vector<PickedPoint*>* pointSet = pickedPoints->getPickedPointVector();
        std::vector<PickedPoint*> activatedPointSet;
        for (int i = 0; i < pointSet->size(); i++)
        {
            if(pointSet->at(i)->present)
                activatedPointSet.push_back(pointSet->at(i));
        }
        std::string name1 = activatedPointSet.at(0)->name.toStdString();
        std::string name2 = activatedPointSet.at(1)->name.toStdString();
        outfile<<"Distance from point "<<name1<<" to "<<name2<<": "<<distance<<std::endl;
        outfile.close();
    }else
    {
        QMessageBox::information(this,  "MeshLab", "Please pick up exactly two points!",QMessageBox::Ok);
    }
    ui.showDistance->setText(QString::number(distance));
}

void PickPointsDialog::on_pickPointModeRadioButton_clicked()
{
    ui.Direction->setText("Right click on model to pick two points and press calcualte distance to measure distance bewteen the two points");
}

void PickPointsDialog::on_movePointRadioButton_clicked()
{
    ui.Direction->setText("Right click on model to move one point to anohter");
}

void PickPointsDialog::on_selectPointRadioButton_clicked()
{
    ui.Direction->setText("Right click on model to select point");
}


void PickPointsDialog::on_CalculateCirumference_clicked()
{
    PickedPoints* pickedPoints = getPickedPoints();
    std::vector<vcg::Point3f>* getActivatedPoints = pickedPoints->getPoint3fVector();
    std::vector<PickedPoint> circumPoints;
    int pointCount = 0;
    double circumference = 0;
    if(getActivatedPoints->size() >= 1){
        for(CMeshO::VertexIterator vi = meshModel->cm.vert.begin(); vi != meshModel->cm.vert.end(); vi += 3) {
            Point3f pickedPoint = getActivatedPoints->back();

            Point3f normal = Point3f(0, 0, 1);
            Point3f random = Point3f(0, 0, pickedPoint.Z());
            Point3f failure = Point3f(-10000000000, -10000000000, -10000000000);
            Point3f I1 = failure;
            Point3f I2 = failure;

            //            std::cout << (*vi).P().X() <<" " << (*vi).P().Y()<< " " <<  (*vi).P().Z()<< std::endl;
            for(int i = 0; i < 3; i++) {
                Point3f p0 = (*(vi + (i%3))).P();
//                 std::cout << p0.X() <<" " << p0.Y()<< " " <<  p0.Z()<< std::endl;
                Point3f p1 = (*(vi + (i+1%3))).P();
                Point3f diffVec = p1 - p0;
                double denominator = normal.dot(diffVec);
                if (denominator != 0) {
                    Point3f randVec = random - p0;
                    double numerator = normal.dot(randVec);
                    if (abs(numerator / denominator) <= 1) {
                        if (I1 == failure) {
                            I1 = p0 + (diffVec * (numerator / denominator));
                        } else if (I2 == failure) {

                            I2 = p0 + (diffVec * (numerator / denominator));
                        }
                    }
                }
            }
            if (I1 != failure and I2 != failure) {
                Point3f diffIntVec = I2 - I1;
//                                 std::cout << "I1 " << I1.X() <<" " << I1.Y()<< " " <<  I1.Z()<< std::endl;
//                                 std::cout << "I2 " << I2.X() <<" " << I2.Y()<< " " <<  I2.Z()<< std::endl;
                circumference += sqrt(pow(diffIntVec.X(),2) + pow(diffIntVec.Y(),2) + pow(diffIntVec.Z(),2));
//                std::cout << diffIntVec.X() << " " << diffIntVec.Y() << " " << diffIntVec.Z() << std::endl;

                PickedPoint I1Point = PickedPoint(QString::fromStdString("newPoint"), I1, true);
                PickedPoint I2Point = PickedPoint(QString::fromStdString("newPoint"), I2, true);
                circumPoints.push_back(I1Point);
                circumPoints.push_back(I2Point);
                //addPoint(selectedPoints->at(0)->point,selectedPoints->at(0)->name, true);
                //addPoint( selectedPoints->at(1)->point,selectedPoints->at(1)->name, true);
          }

        }

    }
    for(int i=0; i<circumPoints.size();i++){
         addPoint(circumPoints[i].point,circumPoints[i].name,  true);
    }
    redrawPoints();
   // drawPickedPoints(getPickedPointTreeWidgetItemVector(), meshModel->cm.bbox, painter);

   // ui.showCirumference->setText(QString::number(circumference));


}


