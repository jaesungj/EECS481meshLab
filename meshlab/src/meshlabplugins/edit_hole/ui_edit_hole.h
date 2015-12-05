/********************************************************************************
** Form generated from reading UI file 'edit_hole.ui'
**
** Created: Mon Nov 23 16:58:43 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_HOLE_H
#define UI_EDIT_HOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FillerWidget
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_main;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_list;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QTreeView *holeTree;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *infoLbl;
    QFrame *frame_option;
    QHBoxLayout *hboxLayout;
    QTabWidget *operationTab;
    QWidget *fillTab;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QRadioButton *trivialRBtn;
    QSpacerItem *spacerItem;
    QRadioButton *minWRBtn;
    QSpacerItem *spacerItem1;
    QRadioButton *selfIntersRBtn;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QSlider *diedralWeightSld;
    QLabel *label_2;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QPushButton *fillButton;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem6;
    QPushButton *acceptFillBtn;
    QSpacerItem *spacerItem7;
    QPushButton *cancelFillBtn;
    QSpacerItem *spacerItem8;
    QWidget *bridgeTab;
    QGridLayout *gridLayout3;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout4;
    QHBoxLayout *hboxLayout4;
    QCheckBox *selfHoleChkB;
    QSpacerItem *spacerItem10;
    QPushButton *autoBridgeBtn;
    QHBoxLayout *hboxLayout5;
    QLabel *label_sld_sx;
    QSlider *bridgeParamSld;
    QLabel *label_sld_dx;
    QSpacerItem *spacerItem11;
    QSpacerItem *spacerItem12;
    QSpacerItem *spacerItem13;
    QPushButton *manualBridgeBtn;
    QSpacerItem *spacerItem14;
    QSpacerItem *spacerItem15;
    QPushButton *nmHoleClosureBtn;
    QSpacerItem *spacerItem16;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem17;
    QPushButton *acceptBridgeBtn;
    QSpacerItem *spacerItem18;
    QPushButton *clearBridgeBtn;
    QSpacerItem *spacerItem19;

    void setupUi(QWidget *FillerWidget)
    {
        if (FillerWidget->objectName().isEmpty())
            FillerWidget->setObjectName(QString::fromUtf8("FillerWidget"));
        FillerWidget->setWindowModality(Qt::NonModal);
        FillerWidget->resize(490, 578);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FillerWidget->sizePolicy().hasHeightForWidth());
        FillerWidget->setSizePolicy(sizePolicy);
        FillerWidget->setMinimumSize(QSize(0, 0));
        FillerWidget->setSizeIncrement(QSize(0, 0));
        FillerWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        vboxLayout = new QVBoxLayout(FillerWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, -1, -1);
        frame_main = new QFrame(FillerWidget);
        frame_main->setObjectName(QString::fromUtf8("frame_main"));
        sizePolicy.setHeightForWidth(frame_main->sizePolicy().hasHeightForWidth());
        frame_main->setSizePolicy(sizePolicy);
        frame_main->setMinimumSize(QSize(198, 410));
        frame_main->setFrameShape(QFrame::StyledPanel);
        frame_main->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_main);
        vboxLayout1->setSpacing(2);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        frame_list = new QFrame(frame_main);
        frame_list->setObjectName(QString::fromUtf8("frame_list"));
        frame_list->setMinimumSize(QSize(200, 150));
        frame_list->setSizeIncrement(QSize(5, 5));
        frame_list->setBaseSize(QSize(5, 5));
        verticalLayout = new QVBoxLayout(frame_list);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        label_1 = new QLabel(frame_list);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy1);
        label_1->setMinimumSize(QSize(80, 15));
        label_1->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(label_1);

        holeTree = new QTreeView(frame_list);
        holeTree->setObjectName(QString::fromUtf8("holeTree"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(holeTree->sizePolicy().hasHeightForWidth());
        holeTree->setSizePolicy(sizePolicy2);
        holeTree->setMinimumSize(QSize(180, 130));
        holeTree->setSizeIncrement(QSize(5, 4));
        holeTree->setBaseSize(QSize(5, 5));
        holeTree->setAlternatingRowColors(true);
        holeTree->setSelectionMode(QAbstractItemView::NoSelection);
        holeTree->setTextElideMode(Qt::ElideNone);
        holeTree->setRootIsDecorated(false);
        holeTree->setItemsExpandable(false);
        holeTree->setSortingEnabled(true);

        verticalLayout->addWidget(holeTree);

        frame = new QFrame(frame_list);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 20));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        infoLbl = new QLabel(frame);
        infoLbl->setObjectName(QString::fromUtf8("infoLbl"));
        infoLbl->setMinimumSize(QSize(200, 0));
        infoLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(infoLbl);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);


        vboxLayout1->addWidget(frame_list);

        frame_option = new QFrame(frame_main);
        frame_option->setObjectName(QString::fromUtf8("frame_option"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_option->sizePolicy().hasHeightForWidth());
        frame_option->setSizePolicy(sizePolicy3);
        frame_option->setMinimumSize(QSize(200, 216));
        frame_option->setFrameShape(QFrame::StyledPanel);
        frame_option->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_option);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(-1, 0, -1, 0);
        operationTab = new QTabWidget(frame_option);
        operationTab->setObjectName(QString::fromUtf8("operationTab"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(operationTab->sizePolicy().hasHeightForWidth());
        operationTab->setSizePolicy(sizePolicy4);
        operationTab->setMinimumSize(QSize(180, 205));
        operationTab->setElideMode(Qt::ElideNone);
        fillTab = new QWidget();
        fillTab->setObjectName(QString::fromUtf8("fillTab"));
        gridLayout1 = new QGridLayout(fillTab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        trivialRBtn = new QRadioButton(fillTab);
        trivialRBtn->setObjectName(QString::fromUtf8("trivialRBtn"));
        trivialRBtn->setLayoutDirection(Qt::LeftToRight);
        trivialRBtn->setChecked(false);

        gridLayout2->addWidget(trivialRBtn, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 1, 0, 1, 1);

        minWRBtn = new QRadioButton(fillTab);
        minWRBtn->setObjectName(QString::fromUtf8("minWRBtn"));

        gridLayout2->addWidget(minWRBtn, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 2, 1, 1);

        selfIntersRBtn = new QRadioButton(fillTab);
        selfIntersRBtn->setObjectName(QString::fromUtf8("selfIntersRBtn"));
        selfIntersRBtn->setChecked(true);

        gridLayout2->addWidget(selfIntersRBtn, 2, 1, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        label = new QLabel(fillTab);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(7);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(label);

        diedralWeightSld = new QSlider(fillTab);
        diedralWeightSld->setObjectName(QString::fromUtf8("diedralWeightSld"));
        diedralWeightSld->setMinimumSize(QSize(85, 26));
        diedralWeightSld->setMaximumSize(QSize(170, 16777215));
        diedralWeightSld->setMaximum(100);
        diedralWeightSld->setSliderPosition(50);
        diedralWeightSld->setTracking(true);
        diedralWeightSld->setOrientation(Qt::Horizontal);
        diedralWeightSld->setInvertedAppearance(true);
        diedralWeightSld->setTickPosition(QSlider::TicksBelow);
        diedralWeightSld->setTickInterval(0);

        hboxLayout1->addWidget(diedralWeightSld);

        label_2 = new QLabel(fillTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);

        hboxLayout1->addWidget(label_2);

        spacerItem3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 3);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem4, 2, 0, 1, 1);

        fillButton = new QPushButton(fillTab);
        fillButton->setObjectName(QString::fromUtf8("fillButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fillButton->sizePolicy().hasHeightForWidth());
        fillButton->setSizePolicy(sizePolicy5);
        fillButton->setMinimumSize(QSize(70, 23));
        fillButton->setMaximumSize(QSize(200, 23));

        gridLayout1->addWidget(fillButton, 2, 1, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem5, 2, 2, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);

        acceptFillBtn = new QPushButton(fillTab);
        acceptFillBtn->setObjectName(QString::fromUtf8("acceptFillBtn"));
        acceptFillBtn->setEnabled(true);
        sizePolicy5.setHeightForWidth(acceptFillBtn->sizePolicy().hasHeightForWidth());
        acceptFillBtn->setSizePolicy(sizePolicy5);
        acceptFillBtn->setMinimumSize(QSize(70, 23));
        acceptFillBtn->setMaximumSize(QSize(140, 23));

        hboxLayout2->addWidget(acceptFillBtn);

        spacerItem7 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem7);

        cancelFillBtn = new QPushButton(fillTab);
        cancelFillBtn->setObjectName(QString::fromUtf8("cancelFillBtn"));
        cancelFillBtn->setEnabled(true);
        sizePolicy5.setHeightForWidth(cancelFillBtn->sizePolicy().hasHeightForWidth());
        cancelFillBtn->setSizePolicy(sizePolicy5);
        cancelFillBtn->setMinimumSize(QSize(70, 23));
        cancelFillBtn->setMaximumSize(QSize(140, 23));

        hboxLayout2->addWidget(cancelFillBtn);

        spacerItem8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem8);


        gridLayout1->addLayout(hboxLayout2, 3, 0, 1, 3);

        operationTab->addTab(fillTab, QString());
        bridgeTab = new QWidget();
        bridgeTab->setObjectName(QString::fromUtf8("bridgeTab"));
        gridLayout3 = new QGridLayout(bridgeTab);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem9 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem9);

        groupBox = new QGroupBox(bridgeTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        groupBox->setMinimumSize(QSize(160, 73));
        groupBox->setMaximumSize(QSize(250, 73));
        groupBox->setAlignment(Qt::AlignLeading);
        gridLayout4 = new QGridLayout(groupBox);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setVerticalSpacing(2);
        gridLayout4->setContentsMargins(-1, 3, -1, 3);
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(5);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        selfHoleChkB = new QCheckBox(groupBox);
        selfHoleChkB->setObjectName(QString::fromUtf8("selfHoleChkB"));
        sizePolicy4.setHeightForWidth(selfHoleChkB->sizePolicy().hasHeightForWidth());
        selfHoleChkB->setSizePolicy(sizePolicy4);
        selfHoleChkB->setChecked(false);

        hboxLayout4->addWidget(selfHoleChkB);

        spacerItem10 = new QSpacerItem(0, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem10);

        autoBridgeBtn = new QPushButton(groupBox);
        autoBridgeBtn->setObjectName(QString::fromUtf8("autoBridgeBtn"));
        autoBridgeBtn->setMinimumSize(QSize(40, 23));
        autoBridgeBtn->setMaximumSize(QSize(70, 23));
        autoBridgeBtn->setLayoutDirection(Qt::LeftToRight);

        hboxLayout4->addWidget(autoBridgeBtn);


        gridLayout4->addLayout(hboxLayout4, 0, 0, 1, 2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_sld_sx = new QLabel(groupBox);
        label_sld_sx->setObjectName(QString::fromUtf8("label_sld_sx"));
        label_sld_sx->setEnabled(false);
        sizePolicy1.setHeightForWidth(label_sld_sx->sizePolicy().hasHeightForWidth());
        label_sld_sx->setSizePolicy(sizePolicy1);
        label_sld_sx->setFont(font);
        label_sld_sx->setTextFormat(Qt::AutoText);

        hboxLayout5->addWidget(label_sld_sx);

        bridgeParamSld = new QSlider(groupBox);
        bridgeParamSld->setObjectName(QString::fromUtf8("bridgeParamSld"));
        bridgeParamSld->setEnabled(false);
        bridgeParamSld->setMinimumSize(QSize(80, 0));
        bridgeParamSld->setSizeIncrement(QSize(2, 0));
        bridgeParamSld->setLayoutDirection(Qt::RightToLeft);
        bridgeParamSld->setMaximum(100);
        bridgeParamSld->setSliderPosition(50);
        bridgeParamSld->setTracking(true);
        bridgeParamSld->setOrientation(Qt::Horizontal);
        bridgeParamSld->setInvertedAppearance(true);
        bridgeParamSld->setTickPosition(QSlider::TicksBelow);
        bridgeParamSld->setTickInterval(0);

        hboxLayout5->addWidget(bridgeParamSld);

        label_sld_dx = new QLabel(groupBox);
        label_sld_dx->setObjectName(QString::fromUtf8("label_sld_dx"));
        label_sld_dx->setEnabled(false);
        sizePolicy1.setHeightForWidth(label_sld_dx->sizePolicy().hasHeightForWidth());
        label_sld_dx->setSizePolicy(sizePolicy1);
        label_sld_dx->setFont(font);
        label_sld_dx->setTextFormat(Qt::AutoText);

        hboxLayout5->addWidget(label_sld_dx);


        gridLayout4->addLayout(hboxLayout5, 1, 0, 1, 1);

        spacerItem11 = new QSpacerItem(0, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem11, 1, 1, 1, 1);


        hboxLayout3->addWidget(groupBox);

        spacerItem12 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem12);


        gridLayout3->addLayout(hboxLayout3, 0, 0, 1, 3);

        spacerItem13 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem13, 1, 0, 1, 1);

        manualBridgeBtn = new QPushButton(bridgeTab);
        manualBridgeBtn->setObjectName(QString::fromUtf8("manualBridgeBtn"));
        sizePolicy6.setHeightForWidth(manualBridgeBtn->sizePolicy().hasHeightForWidth());
        manualBridgeBtn->setSizePolicy(sizePolicy6);
        manualBridgeBtn->setMinimumSize(QSize(140, 23));
        manualBridgeBtn->setMaximumSize(QSize(170, 23));
        manualBridgeBtn->setSizeIncrement(QSize(0, 0));

        gridLayout3->addWidget(manualBridgeBtn, 1, 1, 1, 1);

        spacerItem14 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem14, 1, 2, 1, 1);

        spacerItem15 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem15, 2, 0, 1, 1);

        nmHoleClosureBtn = new QPushButton(bridgeTab);
        nmHoleClosureBtn->setObjectName(QString::fromUtf8("nmHoleClosureBtn"));
        sizePolicy3.setHeightForWidth(nmHoleClosureBtn->sizePolicy().hasHeightForWidth());
        nmHoleClosureBtn->setSizePolicy(sizePolicy3);
        nmHoleClosureBtn->setMinimumSize(QSize(140, 23));
        nmHoleClosureBtn->setMaximumSize(QSize(170, 23));

        gridLayout3->addWidget(nmHoleClosureBtn, 2, 1, 1, 1);

        spacerItem16 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem16, 2, 2, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacerItem17 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem17);

        acceptBridgeBtn = new QPushButton(bridgeTab);
        acceptBridgeBtn->setObjectName(QString::fromUtf8("acceptBridgeBtn"));
        acceptBridgeBtn->setEnabled(false);
        sizePolicy5.setHeightForWidth(acceptBridgeBtn->sizePolicy().hasHeightForWidth());
        acceptBridgeBtn->setSizePolicy(sizePolicy5);
        acceptBridgeBtn->setMinimumSize(QSize(70, 23));
        acceptBridgeBtn->setMaximumSize(QSize(90, 23));

        hboxLayout6->addWidget(acceptBridgeBtn);

        spacerItem18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem18);

        clearBridgeBtn = new QPushButton(bridgeTab);
        clearBridgeBtn->setObjectName(QString::fromUtf8("clearBridgeBtn"));
        clearBridgeBtn->setEnabled(false);
        sizePolicy5.setHeightForWidth(clearBridgeBtn->sizePolicy().hasHeightForWidth());
        clearBridgeBtn->setSizePolicy(sizePolicy5);
        clearBridgeBtn->setMinimumSize(QSize(70, 23));
        clearBridgeBtn->setMaximumSize(QSize(90, 23));

        hboxLayout6->addWidget(clearBridgeBtn);

        spacerItem19 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem19);


        gridLayout3->addLayout(hboxLayout6, 3, 0, 1, 3);

        operationTab->addTab(bridgeTab, QString());

        hboxLayout->addWidget(operationTab);


        vboxLayout1->addWidget(frame_option);


        vboxLayout->addWidget(frame_main);


        retranslateUi(FillerWidget);
        QObject::connect(trivialRBtn, SIGNAL(toggled(bool)), diedralWeightSld, SLOT(setDisabled(bool)));
        QObject::connect(trivialRBtn, SIGNAL(toggled(bool)), label, SLOT(setDisabled(bool)));
        QObject::connect(trivialRBtn, SIGNAL(toggled(bool)), label_2, SLOT(setDisabled(bool)));

        operationTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FillerWidget);
    } // setupUi

    void retranslateUi(QWidget *FillerWidget)
    {
        FillerWidget->setWindowTitle(QApplication::translate("FillerWidget", "Edit Hole", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("FillerWidget", "Hole List", 0, QApplication::UnicodeUTF8));
        infoLbl->setText(QApplication::translate("FillerWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        trivialRBtn->setText(QApplication::translate("FillerWidget", "Trivial", 0, QApplication::UnicodeUTF8));
        minWRBtn->setText(QApplication::translate("FillerWidget", "Minimum Weigth", 0, QApplication::UnicodeUTF8));
        selfIntersRBtn->setText(QApplication::translate("FillerWidget", "Self Intersection", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FillerWidget", "Angle", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FillerWidget", "Shape", 0, QApplication::UnicodeUTF8));
        fillButton->setText(QApplication::translate("FillerWidget", "Fill", 0, QApplication::UnicodeUTF8));
        acceptFillBtn->setText(QApplication::translate("FillerWidget", "Accept", 0, QApplication::UnicodeUTF8));
        cancelFillBtn->setText(QApplication::translate("FillerWidget", "Cancel", 0, QApplication::UnicodeUTF8));
        operationTab->setTabText(operationTab->indexOf(fillTab), QApplication::translate("FillerWidget", "Fill", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FillerWidget", "Automatic bridging", 0, QApplication::UnicodeUTF8));
        selfHoleChkB->setText(QApplication::translate("FillerWidget", "Self hole Bridge", 0, QApplication::UnicodeUTF8));
        autoBridgeBtn->setText(QApplication::translate("FillerWidget", "Build", 0, QApplication::UnicodeUTF8));
        label_sld_sx->setText(QApplication::translate("FillerWidget", "Shape", 0, QApplication::UnicodeUTF8));
        label_sld_dx->setText(QApplication::translate("FillerWidget", "1/2 hole", 0, QApplication::UnicodeUTF8));
        manualBridgeBtn->setText(QApplication::translate("FillerWidget", "Start manual bridging", 0, QApplication::UnicodeUTF8));
        nmHoleClosureBtn->setText(QApplication::translate("FillerWidget", "Close NonManifold Hole", 0, QApplication::UnicodeUTF8));
        acceptBridgeBtn->setText(QApplication::translate("FillerWidget", "Accept", 0, QApplication::UnicodeUTF8));
        clearBridgeBtn->setText(QApplication::translate("FillerWidget", "Clear", 0, QApplication::UnicodeUTF8));
        operationTab->setTabText(operationTab->indexOf(bridgeTab), QApplication::translate("FillerWidget", "Bridge", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FillerWidget: public Ui_FillerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_HOLE_H
