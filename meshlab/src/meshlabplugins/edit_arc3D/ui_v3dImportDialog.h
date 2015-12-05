/********************************************************************************
** Form generated from reading UI file 'v3dImportDialog.ui'
**
** Created: Mon Nov 23 17:00:56 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V3DIMPORTDIALOG_H
#define UI_V3DIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vboxLayout;
    QLabel *infoLabel;
    QLabel *previewLabel;
    QHBoxLayout *_2;
    QLabel *label;
    QSpacerItem *spacerItem;
    QLabel *imgSizeLabel;
    QSpinBox *subsampleSpinBox;
    QHBoxLayout *_3;
    QLabel *label_2;
    QSpacerItem *spacerItem1;
    QSpinBox *minCountSpinBox;
    QVBoxLayout *_4;
    QSlider *minCountSlider;
    QLabel *rangeLabel;
    QHBoxLayout *_5;
    QLabel *label_3;
    QSpacerItem *spacerItem2;
    QDoubleSpinBox *qualitySpinBox;
    QHBoxLayout *_6;
    QLabel *label_5;
    QSpacerItem *spacerItem3;
    QDoubleSpinBox *smoothSpinBox;
    QHBoxLayout *_7;
    QCheckBox *removeSmallCCCheckBox;
    QDoubleSpinBox *maxCCDiagSpinBox;
    QCheckBox *holeCheckBox;
    QSpinBox *holeSpinBox;
    QGridLayout *_8;
    QSlider *dilationSizeSlider;
    QSpinBox *erosionNumPassSpinBox;
    QLabel *lblDilationSize;
    QLabel *lblErosionSizeValue;
    QSpinBox *dilationNumPassSpinBox;
    QLabel *lblDilationSteps;
    QSlider *erosionSizeSlider;
    QLabel *lblDilationSizeValue;
    QLabel *lblErosionSteps;
    QLabel *label_8;
    QLabel *lblErosionSize;
    QCheckBox *dilationCheckBox;
    QCheckBox *erosionCheckBox;
    QHBoxLayout *_10;
    QPushButton *selectButton;
    QSpacerItem *spacerItem4;
    QSpinBox *subsampleSequenceSpinBox;
    QHBoxLayout *_11;
    QLabel *label_10;
    QSpacerItem *spacerItem5;
    QLineEdit *scaleLineEdit;
    QHBoxLayout *_13;
    QComboBox *saveShotCombo;
    QPushButton *exportbut;
    QCheckBox *shotDistortion;
    QHBoxLayout *_12;
    QSpacerItem *spacer_2;
    QPushButton *plyButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem6;
    QTableWidget *imageTableWidget;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(1065, 625);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockWidget->sizePolicy().hasHeightForWidth());
        DockWidget->setSizePolicy(sizePolicy);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        infoLabel = new QLabel(dockWidgetContents);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        vboxLayout->addWidget(infoLabel);

        previewLabel = new QLabel(dockWidgetContents);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        sizePolicy.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(previewLabel);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        _2->addWidget(label);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        imgSizeLabel = new QLabel(dockWidgetContents);
        imgSizeLabel->setObjectName(QString::fromUtf8("imgSizeLabel"));

        _2->addWidget(imgSizeLabel);

        subsampleSpinBox = new QSpinBox(dockWidgetContents);
        subsampleSpinBox->setObjectName(QString::fromUtf8("subsampleSpinBox"));

        _2->addWidget(subsampleSpinBox);


        vboxLayout->addLayout(_2);

        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _3->addWidget(label_2);

        spacerItem1 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1);

        minCountSpinBox = new QSpinBox(dockWidgetContents);
        minCountSpinBox->setObjectName(QString::fromUtf8("minCountSpinBox"));

        _3->addWidget(minCountSpinBox);

        _4 = new QVBoxLayout();
        _4->setSpacing(0);
        _4->setObjectName(QString::fromUtf8("_4"));
        minCountSlider = new QSlider(dockWidgetContents);
        minCountSlider->setObjectName(QString::fromUtf8("minCountSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(minCountSlider->sizePolicy().hasHeightForWidth());
        minCountSlider->setSizePolicy(sizePolicy2);
        minCountSlider->setMaximum(10);
        minCountSlider->setOrientation(Qt::Horizontal);

        _4->addWidget(minCountSlider);

        rangeLabel = new QLabel(dockWidgetContents);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));

        _4->addWidget(rangeLabel);


        _3->addLayout(_4);


        vboxLayout->addLayout(_3);

        _5 = new QHBoxLayout();
        _5->setObjectName(QString::fromUtf8("_5"));
        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        _5->addWidget(label_3);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _5->addItem(spacerItem2);

        qualitySpinBox = new QDoubleSpinBox(dockWidgetContents);
        qualitySpinBox->setObjectName(QString::fromUtf8("qualitySpinBox"));
        qualitySpinBox->setDecimals(1);
        qualitySpinBox->setMaximum(90);
        qualitySpinBox->setSingleStep(5);
        qualitySpinBox->setValue(75);

        _5->addWidget(qualitySpinBox);


        vboxLayout->addLayout(_5);

        _6 = new QHBoxLayout();
        _6->setObjectName(QString::fromUtf8("_6"));
        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        _6->addWidget(label_5);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem3);

        smoothSpinBox = new QDoubleSpinBox(dockWidgetContents);
        smoothSpinBox->setObjectName(QString::fromUtf8("smoothSpinBox"));
        smoothSpinBox->setDecimals(0);
        smoothSpinBox->setMaximum(20);
        smoothSpinBox->setValue(3);

        _6->addWidget(smoothSpinBox);


        vboxLayout->addLayout(_6);

        _7 = new QHBoxLayout();
        _7->setObjectName(QString::fromUtf8("_7"));
        removeSmallCCCheckBox = new QCheckBox(dockWidgetContents);
        removeSmallCCCheckBox->setObjectName(QString::fromUtf8("removeSmallCCCheckBox"));
        removeSmallCCCheckBox->setLayoutDirection(Qt::RightToLeft);
        removeSmallCCCheckBox->setChecked(true);

        _7->addWidget(removeSmallCCCheckBox);

        maxCCDiagSpinBox = new QDoubleSpinBox(dockWidgetContents);
        maxCCDiagSpinBox->setObjectName(QString::fromUtf8("maxCCDiagSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(maxCCDiagSpinBox->sizePolicy().hasHeightForWidth());
        maxCCDiagSpinBox->setSizePolicy(sizePolicy3);
        maxCCDiagSpinBox->setDecimals(0);
        maxCCDiagSpinBox->setMaximum(25);
        maxCCDiagSpinBox->setSingleStep(5);
        maxCCDiagSpinBox->setValue(5);

        _7->addWidget(maxCCDiagSpinBox);

        holeCheckBox = new QCheckBox(dockWidgetContents);
        holeCheckBox->setObjectName(QString::fromUtf8("holeCheckBox"));
        holeCheckBox->setEnabled(true);
        holeCheckBox->setLayoutDirection(Qt::RightToLeft);

        _7->addWidget(holeCheckBox);

        holeSpinBox = new QSpinBox(dockWidgetContents);
        holeSpinBox->setObjectName(QString::fromUtf8("holeSpinBox"));
        holeSpinBox->setSingleStep(5);
        holeSpinBox->setValue(10);

        _7->addWidget(holeSpinBox);


        vboxLayout->addLayout(_7);

        _8 = new QGridLayout();
        _8->setObjectName(QString::fromUtf8("_8"));
        dilationSizeSlider = new QSlider(dockWidgetContents);
        dilationSizeSlider->setObjectName(QString::fromUtf8("dilationSizeSlider"));
        dilationSizeSlider->setMinimum(1);
        dilationSizeSlider->setMaximum(6);
        dilationSizeSlider->setSingleStep(1);
        dilationSizeSlider->setPageStep(5);
        dilationSizeSlider->setValue(2);
        dilationSizeSlider->setOrientation(Qt::Horizontal);

        _8->addWidget(dilationSizeSlider, 0, 5, 1, 1);

        erosionNumPassSpinBox = new QSpinBox(dockWidgetContents);
        erosionNumPassSpinBox->setObjectName(QString::fromUtf8("erosionNumPassSpinBox"));
        erosionNumPassSpinBox->setMinimum(1);
        erosionNumPassSpinBox->setMaximum(10);
        erosionNumPassSpinBox->setValue(3);

        _8->addWidget(erosionNumPassSpinBox, 1, 3, 1, 1);

        lblDilationSize = new QLabel(dockWidgetContents);
        lblDilationSize->setObjectName(QString::fromUtf8("lblDilationSize"));

        _8->addWidget(lblDilationSize, 0, 4, 1, 1);

        lblErosionSizeValue = new QLabel(dockWidgetContents);
        lblErosionSizeValue->setObjectName(QString::fromUtf8("lblErosionSizeValue"));

        _8->addWidget(lblErosionSizeValue, 1, 6, 1, 1);

        dilationNumPassSpinBox = new QSpinBox(dockWidgetContents);
        dilationNumPassSpinBox->setObjectName(QString::fromUtf8("dilationNumPassSpinBox"));
        dilationNumPassSpinBox->setMinimum(1);
        dilationNumPassSpinBox->setMaximum(5);

        _8->addWidget(dilationNumPassSpinBox, 0, 3, 1, 1);

        lblDilationSteps = new QLabel(dockWidgetContents);
        lblDilationSteps->setObjectName(QString::fromUtf8("lblDilationSteps"));

        _8->addWidget(lblDilationSteps, 0, 2, 1, 1);

        erosionSizeSlider = new QSlider(dockWidgetContents);
        erosionSizeSlider->setObjectName(QString::fromUtf8("erosionSizeSlider"));
        erosionSizeSlider->setMinimum(1);
        erosionSizeSlider->setMaximum(6);
        erosionSizeSlider->setSingleStep(1);
        erosionSizeSlider->setPageStep(5);
        erosionSizeSlider->setValue(2);
        erosionSizeSlider->setOrientation(Qt::Horizontal);

        _8->addWidget(erosionSizeSlider, 1, 5, 1, 1);

        lblDilationSizeValue = new QLabel(dockWidgetContents);
        lblDilationSizeValue->setObjectName(QString::fromUtf8("lblDilationSizeValue"));

        _8->addWidget(lblDilationSizeValue, 0, 6, 1, 1);

        lblErosionSteps = new QLabel(dockWidgetContents);
        lblErosionSteps->setObjectName(QString::fromUtf8("lblErosionSteps"));

        _8->addWidget(lblErosionSteps, 1, 2, 1, 1);

        label_8 = new QLabel(dockWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        _8->addWidget(label_8, 0, 0, 1, 1);

        lblErosionSize = new QLabel(dockWidgetContents);
        lblErosionSize->setObjectName(QString::fromUtf8("lblErosionSize"));

        _8->addWidget(lblErosionSize, 1, 4, 1, 1);

        dilationCheckBox = new QCheckBox(dockWidgetContents);
        dilationCheckBox->setObjectName(QString::fromUtf8("dilationCheckBox"));
        dilationCheckBox->setChecked(true);

        _8->addWidget(dilationCheckBox, 0, 1, 1, 1);

        erosionCheckBox = new QCheckBox(dockWidgetContents);
        erosionCheckBox->setObjectName(QString::fromUtf8("erosionCheckBox"));
        erosionCheckBox->setChecked(true);

        _8->addWidget(erosionCheckBox, 1, 1, 1, 1);


        vboxLayout->addLayout(_8);

        _10 = new QHBoxLayout();
        _10->setObjectName(QString::fromUtf8("_10"));
        selectButton = new QPushButton(dockWidgetContents);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setMinimumSize(QSize(100, 25));

        _10->addWidget(selectButton);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _10->addItem(spacerItem4);

        subsampleSequenceSpinBox = new QSpinBox(dockWidgetContents);
        subsampleSequenceSpinBox->setObjectName(QString::fromUtf8("subsampleSequenceSpinBox"));
        subsampleSequenceSpinBox->setValue(3);

        _10->addWidget(subsampleSequenceSpinBox);


        vboxLayout->addLayout(_10);

        _11 = new QHBoxLayout();
        _11->setObjectName(QString::fromUtf8("_11"));
        label_10 = new QLabel(dockWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        _11->addWidget(label_10);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem5);

        scaleLineEdit = new QLineEdit(dockWidgetContents);
        scaleLineEdit->setObjectName(QString::fromUtf8("scaleLineEdit"));
        scaleLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _11->addWidget(scaleLineEdit);


        vboxLayout->addLayout(_11);

        _13 = new QHBoxLayout();
        _13->setObjectName(QString::fromUtf8("_13"));
        saveShotCombo = new QComboBox(dockWidgetContents);
        saveShotCombo->setObjectName(QString::fromUtf8("saveShotCombo"));
        saveShotCombo->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(4);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(saveShotCombo->sizePolicy().hasHeightForWidth());
        saveShotCombo->setSizePolicy(sizePolicy4);
        saveShotCombo->setMaxVisibleItems(11);
        saveShotCombo->setModelColumn(0);

        _13->addWidget(saveShotCombo);

        exportbut = new QPushButton(dockWidgetContents);
        exportbut->setObjectName(QString::fromUtf8("exportbut"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(exportbut->sizePolicy().hasHeightForWidth());
        exportbut->setSizePolicy(sizePolicy5);
        exportbut->setMinimumSize(QSize(100, 25));

        _13->addWidget(exportbut);

        shotDistortion = new QCheckBox(dockWidgetContents);
        shotDistortion->setObjectName(QString::fromUtf8("shotDistortion"));
        shotDistortion->setLayoutDirection(Qt::RightToLeft);
        shotDistortion->setChecked(true);
        shotDistortion->setTristate(false);

        _13->addWidget(shotDistortion);


        vboxLayout->addLayout(_13);

        _12 = new QHBoxLayout();
        _12->setObjectName(QString::fromUtf8("_12"));
        spacer_2 = new QSpacerItem(131, 31, QSizePolicy::Minimum, QSizePolicy::Minimum);

        _12->addItem(spacer_2);

        plyButton = new QPushButton(dockWidgetContents);
        plyButton->setObjectName(QString::fromUtf8("plyButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(plyButton->sizePolicy().hasHeightForWidth());
        plyButton->setSizePolicy(sizePolicy6);
        plyButton->setMinimumSize(QSize(150, 25));
        plyButton->setAutoFillBackground(false);
        plyButton->setIconSize(QSize(18, 18));

        _12->addWidget(plyButton);

        cancelButton = new QPushButton(dockWidgetContents);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy5.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy5);
        cancelButton->setMinimumSize(QSize(100, 25));

        _12->addWidget(cancelButton);

        spacerItem6 = new QSpacerItem(131, 31, QSizePolicy::Minimum, QSizePolicy::Minimum);

        _12->addItem(spacerItem6);

        _12->setStretch(1, 50);

        vboxLayout->addLayout(_12);


        horizontalLayout->addLayout(vboxLayout);

        imageTableWidget = new QTableWidget(dockWidgetContents);
        if (imageTableWidget->columnCount() < 3)
            imageTableWidget->setColumnCount(3);
        imageTableWidget->setObjectName(QString::fromUtf8("imageTableWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(imageTableWidget->sizePolicy().hasHeightForWidth());
        imageTableWidget->setSizePolicy(sizePolicy7);
        imageTableWidget->setColumnCount(3);

        horizontalLayout->addWidget(imageTableWidget);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        saveShotCombo->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Arc3D Importer", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("DockWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        previewLabel->setText(QApplication::translate("DockWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DockWidget", "SubSample", 0, QApplication::UnicodeUTF8));
        imgSizeLabel->setText(QApplication::translate("DockWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        subsampleSpinBox->setToolTip(QApplication::translate("DockWidget", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set the subsample factor:</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  1 the image is not resized</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  2 image is halved <span style=\" font-style:italic;\">(one point every 4)</span></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  3 image is reduced to one third <span style=\" font-style:italic;\">(one point every 9)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("DockWidget", "Minimum Count", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minCountSpinBox->setToolTip(QApplication::translate("DockWidget", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set the minimum number of match for a sample to be accepted</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3 means that only samples that had been found a correspondence with other 2 images or more are considered</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rangeLabel->setText(QApplication::translate("DockWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DockWidget", "Minimum Angle", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DockWidget", "Feature Aware Smoothing", 0, QApplication::UnicodeUTF8));
        removeSmallCCCheckBox->setText(QApplication::translate("DockWidget", "Remove pieces less than", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxCCDiagSpinBox->setToolTip(QApplication::translate("DockWidget", "When enabled, all the floating pieces smaller than the indicated percentage are deleted. Unit is the diagonal of the bounding box of the object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        holeCheckBox->setText(QApplication::translate("DockWidget", "Close Holes less than", 0, QApplication::UnicodeUTF8));
        lblDilationSize->setText(QApplication::translate("DockWidget", "Size:", 0, QApplication::UnicodeUTF8));
        lblErosionSizeValue->setText(QApplication::translate("DockWidget", "5 x 5", 0, QApplication::UnicodeUTF8));
        lblDilationSteps->setText(QApplication::translate("DockWidget", "Num. passes:", 0, QApplication::UnicodeUTF8));
        lblDilationSizeValue->setText(QApplication::translate("DockWidget", "5 x 5", 0, QApplication::UnicodeUTF8));
        lblErosionSteps->setText(QApplication::translate("DockWidget", "Num. passes:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DockWidget", "Depth Filter", 0, QApplication::UnicodeUTF8));
        lblErosionSize->setText(QApplication::translate("DockWidget", "Size:", 0, QApplication::UnicodeUTF8));
        dilationCheckBox->setText(QApplication::translate("DockWidget", "Dilation", 0, QApplication::UnicodeUTF8));
        erosionCheckBox->setText(QApplication::translate("DockWidget", "Erosion", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("DockWidget", "Select", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DockWidget", "Scaling Factor", 0, QApplication::UnicodeUTF8));
        scaleLineEdit->setInputMask(QString());
        scaleLineEdit->setText(QApplication::translate("DockWidget", "1.0", 0, QApplication::UnicodeUTF8));
        exportbut->setText(QApplication::translate("DockWidget", "Export Shots to Raster", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        shotDistortion->setToolTip(QApplication::translate("DockWidget", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Perform a fast, fixed resolution merging of all the range maps. If unchecked all the rangemaps are simply put in the same space without merging them.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        shotDistortion->setText(QApplication::translate("DockWidget", "Correct distortion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        plyButton->setToolTip(QApplication::translate("DockWidget", "Process all selected range maps and save them as separated ply", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        plyButton->setText(QApplication::translate("DockWidget", "Generate Model", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("DockWidget", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V3DIMPORTDIALOG_H
