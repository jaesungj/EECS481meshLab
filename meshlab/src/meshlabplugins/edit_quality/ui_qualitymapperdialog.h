/********************************************************************************
** Form generated from reading UI file 'qualitymapperdialog.ui'
**
** Created: Mon Nov 23 16:59:36 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUALITYMAPPERDIALOG_H
#define UI_QUALITYMAPPERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QualityMapperDialogClass
{
public:
    QWidget *widget;
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QGroupBox *transferFunctionGroupBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QGraphicsView *transferFunctionView;
    QLabel *colorbandLabel;
    QVBoxLayout *vboxLayout3;
    QGroupBox *channelBox;
    QHBoxLayout *hboxLayout1;
    QRadioButton *redButton;
    QRadioButton *greenButton;
    QRadioButton *blueButton;
    QGroupBox *selectedPointBox;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QLabel *xLabel;
    QDoubleSpinBox *xSpinBox;
    QLabel *yLabel;
    QDoubleSpinBox *ySpinBox;
    QHBoxLayout *hboxLayout3;
    QLabel *xQualityLabel;
    QLabel *invisibleQualityLabel;
    QGroupBox *presetGroupBox;
    QHBoxLayout *hboxLayout4;
    QComboBox *presetComboBox;
    QPushButton *loadPresetButton;
    QPushButton *savePresetButton;
    QGroupBox *equalizerGroupBox;
    QHBoxLayout *hboxLayout5;
    QVBoxLayout *vboxLayout5;
    QGraphicsView *equalizerGraphicsView;
    QHBoxLayout *hboxLayout6;
    QDoubleSpinBox *minSpinBox;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout6;
    QDoubleSpinBox *midSpinBox;
    QHBoxLayout *hboxLayout7;
    QLineEdit *midPercentageLine;
    QLabel *midPercentageLabel;
    QSpacerItem *spacerItem1;
    QDoubleSpinBox *maxSpinBox;
    QVBoxLayout *vboxLayout7;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout8;
    QLabel *gammaCorrectionLabel;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout9;
    QPushButton *clampButton;
    QSpinBox *clampHistogramSpinBox;
    QLabel *percentileLabel;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout8;
    QHBoxLayout *hboxLayout10;
    QLabel *label_2;
    QSlider *brightnessSlider;
    QLabel *label_3;
    QDoubleSpinBox *brightessSpinBox;
    QHBoxLayout *hboxLayout11;
    QPushButton *previewButton;
    QPushButton *resetButton;
    QSpacerItem *spacerItem3;

    void setupUi(QDockWidget *QualityMapperDialogClass)
    {
        if (QualityMapperDialogClass->objectName().isEmpty())
            QualityMapperDialogClass->setObjectName(QString::fromUtf8("QualityMapperDialogClass"));
        QualityMapperDialogClass->resize(644, 711);
        QFont font;
        font.setPointSize(10);
        QualityMapperDialogClass->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/qualitymapper.png"), QSize(), QIcon::Normal, QIcon::Off);
        QualityMapperDialogClass->setWindowIcon(icon);
        QualityMapperDialogClass->setAllowedAreas(Qt::NoDockWidgetArea);
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        vboxLayout = new QVBoxLayout(widget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        transferFunctionGroupBox = new QGroupBox(frame);
        transferFunctionGroupBox->setObjectName(QString::fromUtf8("transferFunctionGroupBox"));
        hboxLayout = new QHBoxLayout(transferFunctionGroupBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        transferFunctionView = new QGraphicsView(transferFunctionGroupBox);
        transferFunctionView->setObjectName(QString::fromUtf8("transferFunctionView"));
        transferFunctionView->setMinimumSize(QSize(350, 200));
        transferFunctionView->setMaximumSize(QSize(350, 200));
        transferFunctionView->setAutoFillBackground(true);
        transferFunctionView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        transferFunctionView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        transferFunctionView->setRenderHints(QPainter::Antialiasing);
        transferFunctionView->setCacheMode(QGraphicsView::CacheBackground);

        vboxLayout2->addWidget(transferFunctionView);

        colorbandLabel = new QLabel(transferFunctionGroupBox);
        colorbandLabel->setObjectName(QString::fromUtf8("colorbandLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorbandLabel->sizePolicy().hasHeightForWidth());
        colorbandLabel->setSizePolicy(sizePolicy);
        colorbandLabel->setMinimumSize(QSize(0, 20));
        colorbandLabel->setFrameShape(QFrame::Box);
        colorbandLabel->setFrameShadow(QFrame::Plain);
        colorbandLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/colorband.png")));
        colorbandLabel->setScaledContents(true);
        colorbandLabel->setAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout2->addWidget(colorbandLabel);


        hboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        channelBox = new QGroupBox(transferFunctionGroupBox);
        channelBox->setObjectName(QString::fromUtf8("channelBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(channelBox->sizePolicy().hasHeightForWidth());
        channelBox->setSizePolicy(sizePolicy1);
        hboxLayout1 = new QHBoxLayout(channelBox);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        redButton = new QRadioButton(channelBox);
        redButton->setObjectName(QString::fromUtf8("redButton"));
        redButton->setChecked(true);

        hboxLayout1->addWidget(redButton);

        greenButton = new QRadioButton(channelBox);
        greenButton->setObjectName(QString::fromUtf8("greenButton"));

        hboxLayout1->addWidget(greenButton);

        blueButton = new QRadioButton(channelBox);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));

        hboxLayout1->addWidget(blueButton);


        vboxLayout3->addWidget(channelBox);

        selectedPointBox = new QGroupBox(transferFunctionGroupBox);
        selectedPointBox->setObjectName(QString::fromUtf8("selectedPointBox"));
        sizePolicy1.setHeightForWidth(selectedPointBox->sizePolicy().hasHeightForWidth());
        selectedPointBox->setSizePolicy(sizePolicy1);
        vboxLayout4 = new QVBoxLayout(selectedPointBox);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(11, 11, 11, 11);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        xLabel = new QLabel(selectedPointBox);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setFont(font);

        hboxLayout2->addWidget(xLabel);

        xSpinBox = new QDoubleSpinBox(selectedPointBox);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setFont(font);
        xSpinBox->setAccelerated(true);
        xSpinBox->setMaximum(1);
        xSpinBox->setSingleStep(0.01);

        hboxLayout2->addWidget(xSpinBox);

        yLabel = new QLabel(selectedPointBox);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setFont(font);

        hboxLayout2->addWidget(yLabel);

        ySpinBox = new QDoubleSpinBox(selectedPointBox);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setFont(font);
        ySpinBox->setAccelerated(true);
        ySpinBox->setMaximum(1);
        ySpinBox->setSingleStep(0.01);

        hboxLayout2->addWidget(ySpinBox);


        vboxLayout4->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        xQualityLabel = new QLabel(selectedPointBox);
        xQualityLabel->setObjectName(QString::fromUtf8("xQualityLabel"));
        xQualityLabel->setFont(font);

        hboxLayout3->addWidget(xQualityLabel);

        invisibleQualityLabel = new QLabel(selectedPointBox);
        invisibleQualityLabel->setObjectName(QString::fromUtf8("invisibleQualityLabel"));
        invisibleQualityLabel->setFont(font);

        hboxLayout3->addWidget(invisibleQualityLabel);


        vboxLayout4->addLayout(hboxLayout3);


        vboxLayout3->addWidget(selectedPointBox);

        presetGroupBox = new QGroupBox(transferFunctionGroupBox);
        presetGroupBox->setObjectName(QString::fromUtf8("presetGroupBox"));
        sizePolicy1.setHeightForWidth(presetGroupBox->sizePolicy().hasHeightForWidth());
        presetGroupBox->setSizePolicy(sizePolicy1);
        hboxLayout4 = new QHBoxLayout(presetGroupBox);
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(11, 11, 11, 11);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        presetComboBox = new QComboBox(presetGroupBox);
        presetComboBox->setObjectName(QString::fromUtf8("presetComboBox"));
        presetComboBox->setEditable(true);

        hboxLayout4->addWidget(presetComboBox);

        loadPresetButton = new QPushButton(presetGroupBox);
        loadPresetButton->setObjectName(QString::fromUtf8("loadPresetButton"));
        loadPresetButton->setMaximumSize(QSize(30, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/opentf.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadPresetButton->setIcon(icon1);

        hboxLayout4->addWidget(loadPresetButton);

        savePresetButton = new QPushButton(presetGroupBox);
        savePresetButton->setObjectName(QString::fromUtf8("savePresetButton"));
        savePresetButton->setMaximumSize(QSize(30, 16777215));

        hboxLayout4->addWidget(savePresetButton);


        vboxLayout3->addWidget(presetGroupBox);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout1->addWidget(transferFunctionGroupBox);

        equalizerGroupBox = new QGroupBox(frame);
        equalizerGroupBox->setObjectName(QString::fromUtf8("equalizerGroupBox"));
        hboxLayout5 = new QHBoxLayout(equalizerGroupBox);
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(11, 11, 11, 11);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        equalizerGraphicsView = new QGraphicsView(equalizerGroupBox);
        equalizerGraphicsView->setObjectName(QString::fromUtf8("equalizerGraphicsView"));
        equalizerGraphicsView->setMinimumSize(QSize(350, 200));
        equalizerGraphicsView->setMaximumSize(QSize(350, 200));
        equalizerGraphicsView->setAutoFillBackground(true);
        equalizerGraphicsView->setFrameShape(QFrame::StyledPanel);
        equalizerGraphicsView->setFrameShadow(QFrame::Sunken);
        equalizerGraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        equalizerGraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        equalizerGraphicsView->setRenderHints(QPainter::Antialiasing);
        equalizerGraphicsView->setDragMode(QGraphicsView::NoDrag);
        equalizerGraphicsView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);

        vboxLayout5->addWidget(equalizerGraphicsView);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        minSpinBox = new QDoubleSpinBox(equalizerGroupBox);
        minSpinBox->setObjectName(QString::fromUtf8("minSpinBox"));
        minSpinBox->setFont(font);
        minSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        minSpinBox->setAccelerated(true);
        minSpinBox->setMinimum(-65536);
        minSpinBox->setMaximum(65535);

        hboxLayout6->addWidget(minSpinBox);

        spacerItem = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        midSpinBox = new QDoubleSpinBox(equalizerGroupBox);
        midSpinBox->setObjectName(QString::fromUtf8("midSpinBox"));
        midSpinBox->setFont(font);
        midSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        midSpinBox->setAccelerated(true);
        midSpinBox->setMinimum(-65536);
        midSpinBox->setMaximum(65535);

        vboxLayout6->addWidget(midSpinBox);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        midPercentageLine = new QLineEdit(equalizerGroupBox);
        midPercentageLine->setObjectName(QString::fromUtf8("midPercentageLine"));
        midPercentageLine->setMaximumSize(QSize(50, 16777215));
        midPercentageLine->setFont(font);

        hboxLayout7->addWidget(midPercentageLine);

        midPercentageLabel = new QLabel(equalizerGroupBox);
        midPercentageLabel->setObjectName(QString::fromUtf8("midPercentageLabel"));

        hboxLayout7->addWidget(midPercentageLabel);


        vboxLayout6->addLayout(hboxLayout7);


        hboxLayout6->addLayout(vboxLayout6);

        spacerItem1 = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem1);

        maxSpinBox = new QDoubleSpinBox(equalizerGroupBox);
        maxSpinBox->setObjectName(QString::fromUtf8("maxSpinBox"));
        maxSpinBox->setFont(font);
        maxSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        maxSpinBox->setAccelerated(true);
        maxSpinBox->setMinimum(-65536);
        maxSpinBox->setMaximum(65535);

        hboxLayout6->addWidget(maxSpinBox);


        vboxLayout5->addLayout(hboxLayout6);


        hboxLayout5->addLayout(vboxLayout5);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(6);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        groupBox_2 = new QGroupBox(equalizerGroupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout8 = new QHBoxLayout(groupBox_2);
        hboxLayout8->setSpacing(6);
        hboxLayout8->setContentsMargins(11, 11, 11, 11);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        gammaCorrectionLabel = new QLabel(groupBox_2);
        gammaCorrectionLabel->setObjectName(QString::fromUtf8("gammaCorrectionLabel"));
        gammaCorrectionLabel->setMinimumSize(QSize(100, 100));
        gammaCorrectionLabel->setMaximumSize(QSize(100, 100));

        hboxLayout8->addWidget(gammaCorrectionLabel);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem2);


        vboxLayout7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(equalizerGroupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout9 = new QHBoxLayout(groupBox_3);
        hboxLayout9->setSpacing(6);
        hboxLayout9->setContentsMargins(11, 11, 11, 11);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        clampButton = new QPushButton(groupBox_3);
        clampButton->setObjectName(QString::fromUtf8("clampButton"));

        hboxLayout9->addWidget(clampButton);

        clampHistogramSpinBox = new QSpinBox(groupBox_3);
        clampHistogramSpinBox->setObjectName(QString::fromUtf8("clampHistogramSpinBox"));
        clampHistogramSpinBox->setMaximum(49);

        hboxLayout9->addWidget(clampHistogramSpinBox);

        percentileLabel = new QLabel(groupBox_3);
        percentileLabel->setObjectName(QString::fromUtf8("percentileLabel"));

        hboxLayout9->addWidget(percentileLabel);


        vboxLayout7->addWidget(groupBox_3);

        groupBox = new QGroupBox(equalizerGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout8 = new QVBoxLayout(groupBox);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(10, 16777215));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout10->addWidget(label_2);

        brightnessSlider = new QSlider(groupBox);
        brightnessSlider->setObjectName(QString::fromUtf8("brightnessSlider"));
        brightnessSlider->setMaximum(100);
        brightnessSlider->setSliderPosition(50);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksAbove);
        brightnessSlider->setTickInterval(50);

        hboxLayout10->addWidget(brightnessSlider);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(10, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout10->addWidget(label_3);


        vboxLayout8->addLayout(hboxLayout10);

        brightessSpinBox = new QDoubleSpinBox(groupBox);
        brightessSpinBox->setObjectName(QString::fromUtf8("brightessSpinBox"));
        brightessSpinBox->setFont(font);
        brightessSpinBox->setAccelerated(true);
        brightessSpinBox->setMaximum(2);
        brightessSpinBox->setSingleStep(0.01);
        brightessSpinBox->setValue(1);

        vboxLayout8->addWidget(brightessSpinBox);


        vboxLayout7->addWidget(groupBox);


        hboxLayout5->addLayout(vboxLayout7);


        vboxLayout1->addWidget(equalizerGroupBox);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        previewButton = new QPushButton(frame);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));
        previewButton->setCheckable(true);

        hboxLayout11->addWidget(previewButton);

        resetButton = new QPushButton(frame);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        hboxLayout11->addWidget(resetButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout11);


        vboxLayout->addWidget(frame);

        QualityMapperDialogClass->setWidget(widget);

        retranslateUi(QualityMapperDialogClass);

        QMetaObject::connectSlotsByName(QualityMapperDialogClass);
    } // setupUi

    void retranslateUi(QDockWidget *QualityMapperDialogClass)
    {
        QualityMapperDialogClass->setWindowTitle(QApplication::translate("QualityMapperDialogClass", "QualityMapperDialog", 0, QApplication::UnicodeUTF8));
        transferFunctionGroupBox->setTitle(QApplication::translate("QualityMapperDialogClass", "Transfer Function", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorbandLabel->setToolTip(QApplication::translate("QualityMapperDialogClass", "Color band", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        colorbandLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelBox->setToolTip(QApplication::translate("QualityMapperDialogClass", "Choose the foreground channel in the Transfer Function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        channelBox->setTitle(QApplication::translate("QualityMapperDialogClass", "Edit Channel", 0, QApplication::UnicodeUTF8));
        redButton->setText(QApplication::translate("QualityMapperDialogClass", "R", 0, QApplication::UnicodeUTF8));
        greenButton->setText(QApplication::translate("QualityMapperDialogClass", "G", 0, QApplication::UnicodeUTF8));
        blueButton->setText(QApplication::translate("QualityMapperDialogClass", "B", 0, QApplication::UnicodeUTF8));
        selectedPointBox->setTitle(QApplication::translate("QualityMapperDialogClass", "Selected Point", 0, QApplication::UnicodeUTF8));
        xLabel->setText(QApplication::translate("QualityMapperDialogClass", "x", 0, QApplication::UnicodeUTF8));
        yLabel->setText(QApplication::translate("QualityMapperDialogClass", "y", 0, QApplication::UnicodeUTF8));
        xQualityLabel->setText(QApplication::translate("QualityMapperDialogClass", "x-quality", 0, QApplication::UnicodeUTF8));
        invisibleQualityLabel->setText(QApplication::translate("QualityMapperDialogClass", "quality", 0, QApplication::UnicodeUTF8));
        presetGroupBox->setTitle(QApplication::translate("QualityMapperDialogClass", "Load Preset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        presetComboBox->setToolTip(QApplication::translate("QualityMapperDialogClass", "Transfer Functions list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        loadPresetButton->setToolTip(QApplication::translate("QualityMapperDialogClass", "click to load a Transfer Function file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        savePresetButton->setToolTip(QApplication::translate("QualityMapperDialogClass", "Add/Save preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        savePresetButton->setText(QApplication::translate("QualityMapperDialogClass", "+", 0, QApplication::UnicodeUTF8));
        equalizerGroupBox->setTitle(QApplication::translate("QualityMapperDialogClass", "Equalizer", 0, QApplication::UnicodeUTF8));
        midPercentageLabel->setText(QApplication::translate("QualityMapperDialogClass", "%", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QualityMapperDialogClass", "Gamma Correction", 0, QApplication::UnicodeUTF8));
        gammaCorrectionLabel->setText(QApplication::translate("QualityMapperDialogClass", "gama correction view", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QualityMapperDialogClass", "Clamp Histogram", 0, QApplication::UnicodeUTF8));
        clampButton->setText(QApplication::translate("QualityMapperDialogClass", "Clamp", 0, QApplication::UnicodeUTF8));
        percentileLabel->setText(QApplication::translate("QualityMapperDialogClass", "%", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QualityMapperDialogClass", "Brightness", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QualityMapperDialogClass", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QualityMapperDialogClass", "2", 0, QApplication::UnicodeUTF8));
        previewButton->setText(QApplication::translate("QualityMapperDialogClass", "Apply", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("QualityMapperDialogClass", "Reset Histogram", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QualityMapperDialogClass: public Ui_QualityMapperDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUALITYMAPPERDIALOG_H
