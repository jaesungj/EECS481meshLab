/********************************************************************************
** Form generated from reading UI file 'paintbox.ui'
**
** Created: Mon Nov 23 16:59:05 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTBOX_H
#define UI_PAINTBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <cloneview.h>
#include <colorframe.h>

QT_BEGIN_NAMESPACE

class Ui_Paintbox
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QToolButton *undo_button;
    QToolButton *redo_button;
    QFrame *line_2;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout;
    QToolButton *pen_button;
    QToolButton *fill_button;
    QToolButton *gradient_button;
    QToolButton *smooth_button;
    QToolButton *clone_button;
    QToolButton *pick_button;
    QToolButton *perlin_button;
    QSpacerItem *spacerItem;
    QToolButton *mesh_pick_button;
    QToolButton *mesh_smooth_button;
    QToolButton *mesh_add_button;
    QSpacerItem *spacerItem1;
    QWidget *widget;
    QGridLayout *gridLayout1;
    QFrame *color_frame;
    QToolButton *default_colors;
    QToolButton *switch_colors;
    Colorframe *background_frame;
    Colorframe *foreground_frame;
    QFrame *clone_source_frame;
    QVBoxLayout *vboxLayout1;
    CloneView *clone_source_view;
    QPushButton *clone_source_load_button;
    QFrame *pen_frame;
    QGridLayout *gridLayout2;
    QSpinBox *deck_box;
    QLabel *label_deck;
    QLabel *label_penmodus;
    QComboBox *pen_modus;
    QSlider *opacity_slider;
    QFrame *smooth_frame;
    QGridLayout *gridLayout3;
    QSlider *percentual_slider;
    QLabel *label_percentual;
    QSpinBox *percentual_box;
    QFrame *mesh_displacement_frame;
    QGridLayout *gridLayout4;
    QLabel *label_6;
    QSlider *mesh_displacement_slider;
    QDoubleSpinBox *displacement_spin_box;
    QLabel *label_8;
    QComboBox *mesh_displacement_direction;
    QFrame *pen_extra_frame;
    QGridLayout *gridLayout5;
    QLabel *label_pen;
    QComboBox *brush_box;
    QLabel *label_percentual_3;
    QSlider *hardness_slider;
    QSpinBox *decrease_box;
    QLabel *label_percentual_4;
    QSlider *size_slider;
    QSpinBox *decrease_box_3;
    QLabel *label_percentual_5;
    QComboBox *pen_unit;
    QLabel *label;
    QCheckBox *backface_culling;
    QCheckBox *invisible_painting;
    QFrame *noise_frame;
    QHBoxLayout *hboxLayout1;
    QLabel *label_5;
    QSlider *noise_slider;
    QDoubleSpinBox *noise_box;
    QFrame *pick_frame;
    QGridLayout *gridLayout6;
    QComboBox *pick_mode;
    QLabel *label_pick;
    QFrame *gradient_frame;
    QGridLayout *gridLayout7;
    QLabel *label_4;
    QComboBox *gradient_type;
    QLabel *label_3;
    QComboBox *gradient_form;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout2;
    QLabel *label_2;
    QComboBox *search_mode;
    QFrame *pressure_frame;
    QGridLayout *gridLayout8;
    QLabel *label_7;
    QCheckBox *opacity_box;
    QCheckBox *size_box;
    QCheckBox *hardness_box;
    QCheckBox *displacement_box;
    QFrame *frame;
    QGraphicsView *brush_viewer;

    void setupUi(QWidget *Paintbox)
    {
        if (Paintbox->objectName().isEmpty())
            Paintbox->setObjectName(QString::fromUtf8("Paintbox"));
        Paintbox->resize(354, 1127);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Paintbox->sizePolicy().hasHeightForWidth());
        Paintbox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Paintbox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_2 = new QFrame(Paintbox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 3, 0, 3);
        undo_button = new QToolButton(frame_2);
        undo_button->setObjectName(QString::fromUtf8("undo_button"));
        undo_button->setEnabled(false);
        sizePolicy1.setHeightForWidth(undo_button->sizePolicy().hasHeightForWidth());
        undo_button->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/undo-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo_button->setIcon(icon);
        undo_button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(undo_button);

        redo_button = new QToolButton(frame_2);
        redo_button->setObjectName(QString::fromUtf8("redo_button"));
        redo_button->setEnabled(false);
        sizePolicy1.setHeightForWidth(redo_button->sizePolicy().hasHeightForWidth());
        redo_button->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/redo-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        redo_button->setIcon(icon1);
        redo_button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(redo_button);


        gridLayout->addWidget(frame_2, 0, 0, 1, 2);

        line_2 = new QFrame(Paintbox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 2);

        frame_3 = new QFrame(Paintbox);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame_3);
        vboxLayout->setSpacing(3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, -1);
        pen_button = new QToolButton(frame_3);
        pen_button->setObjectName(QString::fromUtf8("pen_button"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/paintbrush-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        pen_button->setIcon(icon2);
        pen_button->setIconSize(QSize(24, 24));
        pen_button->setCheckable(true);
        pen_button->setChecked(true);
        pen_button->setAutoExclusive(true);

        vboxLayout->addWidget(pen_button);

        fill_button = new QToolButton(frame_3);
        fill_button->setObjectName(QString::fromUtf8("fill_button"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/bucket-fill-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        fill_button->setIcon(icon3);
        fill_button->setIconSize(QSize(24, 24));
        fill_button->setCheckable(true);
        fill_button->setAutoExclusive(true);

        vboxLayout->addWidget(fill_button);

        gradient_button = new QToolButton(frame_3);
        gradient_button->setObjectName(QString::fromUtf8("gradient_button"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/blend-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        gradient_button->setIcon(icon4);
        gradient_button->setIconSize(QSize(24, 24));
        gradient_button->setCheckable(true);
        gradient_button->setAutoExclusive(true);

        vboxLayout->addWidget(gradient_button);

        smooth_button = new QToolButton(frame_3);
        smooth_button->setObjectName(QString::fromUtf8("smooth_button"));
        smooth_button->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/blur-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        smooth_button->setIcon(icon5);
        smooth_button->setIconSize(QSize(24, 24));
        smooth_button->setCheckable(true);
        smooth_button->setAutoExclusive(true);

        vboxLayout->addWidget(smooth_button);

        clone_button = new QToolButton(frame_3);
        clone_button->setObjectName(QString::fromUtf8("clone_button"));
        clone_button->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/clone-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        clone_button->setIcon(icon6);
        clone_button->setIconSize(QSize(24, 24));
        clone_button->setCheckable(true);
        clone_button->setAutoExclusive(true);

        vboxLayout->addWidget(clone_button);

        pick_button = new QToolButton(frame_3);
        pick_button->setObjectName(QString::fromUtf8("pick_button"));
        pick_button->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/color-picker-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        pick_button->setIcon(icon7);
        pick_button->setIconSize(QSize(24, 24));
        pick_button->setCheckable(true);
        pick_button->setAutoExclusive(true);

        vboxLayout->addWidget(pick_button);

        perlin_button = new QToolButton(frame_3);
        perlin_button->setObjectName(QString::fromUtf8("perlin_button"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/perlin.png"), QSize(), QIcon::Normal, QIcon::Off);
        perlin_button->setIcon(icon8);
        perlin_button->setIconSize(QSize(24, 24));
        perlin_button->setCheckable(true);
        perlin_button->setAutoExclusive(true);

        vboxLayout->addWidget(perlin_button);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        mesh_pick_button = new QToolButton(frame_3);
        mesh_pick_button->setObjectName(QString::fromUtf8("mesh_pick_button"));
        mesh_pick_button->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/pickbrush-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        mesh_pick_button->setIcon(icon9);
        mesh_pick_button->setIconSize(QSize(24, 24));
        mesh_pick_button->setCheckable(true);
        mesh_pick_button->setChecked(false);
        mesh_pick_button->setAutoExclusive(true);

        vboxLayout->addWidget(mesh_pick_button);

        mesh_smooth_button = new QToolButton(frame_3);
        mesh_smooth_button->setObjectName(QString::fromUtf8("mesh_smooth_button"));
        mesh_smooth_button->setEnabled(true);
        mesh_smooth_button->setIcon(icon5);
        mesh_smooth_button->setIconSize(QSize(24, 24));
        mesh_smooth_button->setCheckable(true);
        mesh_smooth_button->setAutoExclusive(true);

        vboxLayout->addWidget(mesh_smooth_button);

        mesh_add_button = new QToolButton(frame_3);
        mesh_add_button->setObjectName(QString::fromUtf8("mesh_add_button"));
        mesh_add_button->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/add-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        mesh_add_button->setIcon(icon10);
        mesh_add_button->setIconSize(QSize(24, 24));
        mesh_add_button->setCheckable(true);
        mesh_add_button->setAutoExclusive(true);

        vboxLayout->addWidget(mesh_add_button);

        spacerItem1 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        gridLayout->addWidget(frame_3, 2, 0, 1, 1);

        widget = new QWidget(Paintbox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(294, 0));
        gridLayout1 = new QGridLayout(widget);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        color_frame = new QFrame(widget);
        color_frame->setObjectName(QString::fromUtf8("color_frame"));
        color_frame->setMinimumSize(QSize(0, 90));
        color_frame->setFrameShape(QFrame::StyledPanel);
        color_frame->setFrameShadow(QFrame::Raised);
        default_colors = new QToolButton(color_frame);
        default_colors->setObjectName(QString::fromUtf8("default_colors"));
        default_colors->setGeometry(QRect(20, 60, 25, 24));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/bw.png"), QSize(), QIcon::Normal, QIcon::Off);
        default_colors->setIcon(icon11);
        default_colors->setIconSize(QSize(15, 15));
        default_colors->setAutoRaise(true);
        switch_colors = new QToolButton(color_frame);
        switch_colors->setObjectName(QString::fromUtf8("switch_colors"));
        switch_colors->setGeometry(QRect(110, 0, 25, 24));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/swap-colors-12.png"), QSize(), QIcon::Normal, QIcon::Off);
        switch_colors->setIcon(icon12);
        switch_colors->setIconSize(QSize(15, 15));
        switch_colors->setCheckable(false);
        switch_colors->setAutoRaise(true);
        switch_colors->setArrowType(Qt::NoArrow);
        background_frame = new Colorframe(color_frame);
        background_frame->setObjectName(QString::fromUtf8("background_frame"));
        background_frame->setGeometry(QRect(60, 30, 61, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        background_frame->setPalette(palette);
        background_frame->setAutoFillBackground(true);
        background_frame->setFrameShape(QFrame::StyledPanel);
        background_frame->setFrameShadow(QFrame::Plain);
        background_frame->setLineWidth(2);
        foreground_frame = new Colorframe(color_frame);
        foreground_frame->setObjectName(QString::fromUtf8("foreground_frame"));
        foreground_frame->setGeometry(QRect(40, 20, 61, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        foreground_frame->setPalette(palette1);
        foreground_frame->setAutoFillBackground(true);
        foreground_frame->setFrameShape(QFrame::StyledPanel);
        foreground_frame->setFrameShadow(QFrame::Plain);
        foreground_frame->setLineWidth(2);

        gridLayout1->addWidget(color_frame, 0, 0, 1, 1);

        clone_source_frame = new QFrame(widget);
        clone_source_frame->setObjectName(QString::fromUtf8("clone_source_frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(clone_source_frame->sizePolicy().hasHeightForWidth());
        clone_source_frame->setSizePolicy(sizePolicy3);
        clone_source_frame->setFrameShape(QFrame::StyledPanel);
        clone_source_frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(clone_source_frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        clone_source_view = new CloneView(clone_source_frame);
        clone_source_view->setObjectName(QString::fromUtf8("clone_source_view"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(clone_source_view->sizePolicy().hasHeightForWidth());
        clone_source_view->setSizePolicy(sizePolicy4);
        clone_source_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clone_source_view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clone_source_view->setInteractive(true);
        clone_source_view->setDragMode(QGraphicsView::ScrollHandDrag);
        clone_source_view->setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing);

        vboxLayout1->addWidget(clone_source_view);

        clone_source_load_button = new QPushButton(clone_source_frame);
        clone_source_load_button->setObjectName(QString::fromUtf8("clone_source_load_button"));

        vboxLayout1->addWidget(clone_source_load_button);


        gridLayout1->addWidget(clone_source_frame, 1, 0, 1, 2);

        pen_frame = new QFrame(widget);
        pen_frame->setObjectName(QString::fromUtf8("pen_frame"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pen_frame->sizePolicy().hasHeightForWidth());
        pen_frame->setSizePolicy(sizePolicy5);
        pen_frame->setFrameShape(QFrame::StyledPanel);
        pen_frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(pen_frame);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        deck_box = new QSpinBox(pen_frame);
        deck_box->setObjectName(QString::fromUtf8("deck_box"));
        deck_box->setMaximum(100);
        deck_box->setValue(100);

        gridLayout2->addWidget(deck_box, 0, 2, 1, 1);

        label_deck = new QLabel(pen_frame);
        label_deck->setObjectName(QString::fromUtf8("label_deck"));

        gridLayout2->addWidget(label_deck, 0, 0, 1, 1);

        label_penmodus = new QLabel(pen_frame);
        label_penmodus->setObjectName(QString::fromUtf8("label_penmodus"));
        label_penmodus->setEnabled(false);

        gridLayout2->addWidget(label_penmodus, 1, 0, 1, 1);

        pen_modus = new QComboBox(pen_frame);
        pen_modus->setObjectName(QString::fromUtf8("pen_modus"));
        pen_modus->setEnabled(false);
        sizePolicy5.setHeightForWidth(pen_modus->sizePolicy().hasHeightForWidth());
        pen_modus->setSizePolicy(sizePolicy5);

        gridLayout2->addWidget(pen_modus, 1, 1, 1, 2);

        opacity_slider = new QSlider(pen_frame);
        opacity_slider->setObjectName(QString::fromUtf8("opacity_slider"));
        opacity_slider->setMaximum(100);
        opacity_slider->setValue(100);
        opacity_slider->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(opacity_slider, 0, 1, 1, 1);


        gridLayout1->addWidget(pen_frame, 2, 0, 1, 2);

        smooth_frame = new QFrame(widget);
        smooth_frame->setObjectName(QString::fromUtf8("smooth_frame"));
        sizePolicy5.setHeightForWidth(smooth_frame->sizePolicy().hasHeightForWidth());
        smooth_frame->setSizePolicy(sizePolicy5);
        smooth_frame->setFrameShape(QFrame::StyledPanel);
        smooth_frame->setFrameShadow(QFrame::Raised);
        gridLayout3 = new QGridLayout(smooth_frame);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        percentual_slider = new QSlider(smooth_frame);
        percentual_slider->setObjectName(QString::fromUtf8("percentual_slider"));
        percentual_slider->setMaximum(100);
        percentual_slider->setValue(25);
        percentual_slider->setSliderPosition(25);
        percentual_slider->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(percentual_slider, 0, 1, 1, 1);

        label_percentual = new QLabel(smooth_frame);
        label_percentual->setObjectName(QString::fromUtf8("label_percentual"));

        gridLayout3->addWidget(label_percentual, 0, 0, 1, 1);

        percentual_box = new QSpinBox(smooth_frame);
        percentual_box->setObjectName(QString::fromUtf8("percentual_box"));
        percentual_box->setMaximum(100);
        percentual_box->setValue(24);

        gridLayout3->addWidget(percentual_box, 0, 2, 1, 1);


        gridLayout1->addWidget(smooth_frame, 3, 0, 1, 2);

        mesh_displacement_frame = new QFrame(widget);
        mesh_displacement_frame->setObjectName(QString::fromUtf8("mesh_displacement_frame"));
        mesh_displacement_frame->setEnabled(true);
        mesh_displacement_frame->setFrameShape(QFrame::StyledPanel);
        mesh_displacement_frame->setFrameShadow(QFrame::Raised);
        gridLayout4 = new QGridLayout(mesh_displacement_frame);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        label_6 = new QLabel(mesh_displacement_frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout4->addWidget(label_6, 0, 0, 1, 1);

        mesh_displacement_slider = new QSlider(mesh_displacement_frame);
        mesh_displacement_slider->setObjectName(QString::fromUtf8("mesh_displacement_slider"));
        mesh_displacement_slider->setSliderPosition(4);
        mesh_displacement_slider->setOrientation(Qt::Horizontal);

        gridLayout4->addWidget(mesh_displacement_slider, 0, 1, 1, 1);

        displacement_spin_box = new QDoubleSpinBox(mesh_displacement_frame);
        displacement_spin_box->setObjectName(QString::fromUtf8("displacement_spin_box"));
        displacement_spin_box->setDecimals(3);
        displacement_spin_box->setValue(4);

        gridLayout4->addWidget(displacement_spin_box, 0, 2, 1, 1);

        label_8 = new QLabel(mesh_displacement_frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout4->addWidget(label_8, 1, 0, 1, 1);

        mesh_displacement_direction = new QComboBox(mesh_displacement_frame);
        mesh_displacement_direction->setObjectName(QString::fromUtf8("mesh_displacement_direction"));

        gridLayout4->addWidget(mesh_displacement_direction, 1, 1, 1, 2);


        gridLayout1->addWidget(mesh_displacement_frame, 4, 0, 1, 2);

        pen_extra_frame = new QFrame(widget);
        pen_extra_frame->setObjectName(QString::fromUtf8("pen_extra_frame"));
        pen_extra_frame->setEnabled(true);
        sizePolicy5.setHeightForWidth(pen_extra_frame->sizePolicy().hasHeightForWidth());
        pen_extra_frame->setSizePolicy(sizePolicy5);
        pen_extra_frame->setFrameShape(QFrame::StyledPanel);
        pen_extra_frame->setFrameShadow(QFrame::Raised);
        gridLayout5 = new QGridLayout(pen_extra_frame);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        label_pen = new QLabel(pen_extra_frame);
        label_pen->setObjectName(QString::fromUtf8("label_pen"));

        gridLayout5->addWidget(label_pen, 0, 0, 1, 1);

        brush_box = new QComboBox(pen_extra_frame);
        brush_box->setObjectName(QString::fromUtf8("brush_box"));
        brush_box->setEnabled(true);
        sizePolicy5.setHeightForWidth(brush_box->sizePolicy().hasHeightForWidth());
        brush_box->setSizePolicy(sizePolicy5);
        brush_box->setEditable(false);

        gridLayout5->addWidget(brush_box, 0, 2, 1, 3);

        label_percentual_3 = new QLabel(pen_extra_frame);
        label_percentual_3->setObjectName(QString::fromUtf8("label_percentual_3"));

        gridLayout5->addWidget(label_percentual_3, 1, 0, 1, 2);

        hardness_slider = new QSlider(pen_extra_frame);
        hardness_slider->setObjectName(QString::fromUtf8("hardness_slider"));
        hardness_slider->setMaximum(100);
        hardness_slider->setValue(50);
        hardness_slider->setSliderPosition(50);
        hardness_slider->setOrientation(Qt::Horizontal);

        gridLayout5->addWidget(hardness_slider, 1, 2, 1, 2);

        decrease_box = new QSpinBox(pen_extra_frame);
        decrease_box->setObjectName(QString::fromUtf8("decrease_box"));
        decrease_box->setMaximum(100);
        decrease_box->setValue(50);

        gridLayout5->addWidget(decrease_box, 1, 4, 1, 1);

        label_percentual_4 = new QLabel(pen_extra_frame);
        label_percentual_4->setObjectName(QString::fromUtf8("label_percentual_4"));

        gridLayout5->addWidget(label_percentual_4, 2, 0, 1, 2);

        size_slider = new QSlider(pen_extra_frame);
        size_slider->setObjectName(QString::fromUtf8("size_slider"));
        size_slider->setMaximum(100);
        size_slider->setValue(20);
        size_slider->setSliderPosition(20);
        size_slider->setOrientation(Qt::Horizontal);

        gridLayout5->addWidget(size_slider, 2, 2, 1, 2);

        decrease_box_3 = new QSpinBox(pen_extra_frame);
        decrease_box_3->setObjectName(QString::fromUtf8("decrease_box_3"));
        decrease_box_3->setMaximum(100);
        decrease_box_3->setValue(20);

        gridLayout5->addWidget(decrease_box_3, 2, 4, 1, 1);

        label_percentual_5 = new QLabel(pen_extra_frame);
        label_percentual_5->setObjectName(QString::fromUtf8("label_percentual_5"));

        gridLayout5->addWidget(label_percentual_5, 3, 0, 1, 2);

        pen_unit = new QComboBox(pen_extra_frame);
        pen_unit->setObjectName(QString::fromUtf8("pen_unit"));
        sizePolicy5.setHeightForWidth(pen_unit->sizePolicy().hasHeightForWidth());
        pen_unit->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(pen_unit, 3, 2, 1, 3);

        label = new QLabel(pen_extra_frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout5->addWidget(label, 4, 0, 1, 1);

        backface_culling = new QCheckBox(pen_extra_frame);
        backface_culling->setObjectName(QString::fromUtf8("backface_culling"));

        gridLayout5->addWidget(backface_culling, 4, 1, 1, 2);

        invisible_painting = new QCheckBox(pen_extra_frame);
        invisible_painting->setObjectName(QString::fromUtf8("invisible_painting"));

        gridLayout5->addWidget(invisible_painting, 4, 3, 1, 2);


        gridLayout1->addWidget(pen_extra_frame, 5, 0, 1, 2);

        noise_frame = new QFrame(widget);
        noise_frame->setObjectName(QString::fromUtf8("noise_frame"));
        noise_frame->setFrameShape(QFrame::StyledPanel);
        noise_frame->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(noise_frame);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_5 = new QLabel(noise_frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout1->addWidget(label_5);

        noise_slider = new QSlider(noise_frame);
        noise_slider->setObjectName(QString::fromUtf8("noise_slider"));
        noise_slider->setSliderPosition(2);
        noise_slider->setOrientation(Qt::Horizontal);

        hboxLayout1->addWidget(noise_slider);

        noise_box = new QDoubleSpinBox(noise_frame);
        noise_box->setObjectName(QString::fromUtf8("noise_box"));
        noise_box->setDecimals(3);
        noise_box->setValue(2);

        hboxLayout1->addWidget(noise_box);


        gridLayout1->addWidget(noise_frame, 6, 0, 1, 2);

        pick_frame = new QFrame(widget);
        pick_frame->setObjectName(QString::fromUtf8("pick_frame"));
        pick_frame->setFrameShape(QFrame::StyledPanel);
        pick_frame->setFrameShadow(QFrame::Raised);
        gridLayout6 = new QGridLayout(pick_frame);
#ifndef Q_OS_MAC
        gridLayout6->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout6->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        pick_mode = new QComboBox(pick_frame);
        pick_mode->setObjectName(QString::fromUtf8("pick_mode"));
        sizePolicy5.setHeightForWidth(pick_mode->sizePolicy().hasHeightForWidth());
        pick_mode->setSizePolicy(sizePolicy5);

        gridLayout6->addWidget(pick_mode, 0, 1, 1, 1);

        label_pick = new QLabel(pick_frame);
        label_pick->setObjectName(QString::fromUtf8("label_pick"));

        gridLayout6->addWidget(label_pick, 0, 0, 1, 1);


        gridLayout1->addWidget(pick_frame, 7, 0, 1, 2);

        gradient_frame = new QFrame(widget);
        gradient_frame->setObjectName(QString::fromUtf8("gradient_frame"));
        sizePolicy5.setHeightForWidth(gradient_frame->sizePolicy().hasHeightForWidth());
        gradient_frame->setSizePolicy(sizePolicy5);
        gradient_frame->setFrameShape(QFrame::StyledPanel);
        gradient_frame->setFrameShadow(QFrame::Raised);
        gridLayout7 = new QGridLayout(gradient_frame);
#ifndef Q_OS_MAC
        gridLayout7->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout7->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        label_4 = new QLabel(gradient_frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout7->addWidget(label_4, 0, 0, 1, 1);

        gradient_type = new QComboBox(gradient_frame);
        gradient_type->setObjectName(QString::fromUtf8("gradient_type"));
        sizePolicy5.setHeightForWidth(gradient_type->sizePolicy().hasHeightForWidth());
        gradient_type->setSizePolicy(sizePolicy5);

        gridLayout7->addWidget(gradient_type, 0, 1, 1, 2);

        label_3 = new QLabel(gradient_frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout7->addWidget(label_3, 1, 0, 1, 2);

        gradient_form = new QComboBox(gradient_frame);
        gradient_form->setObjectName(QString::fromUtf8("gradient_form"));

        gridLayout7->addWidget(gradient_form, 1, 2, 1, 1);


        gridLayout1->addWidget(gradient_frame, 8, 0, 1, 2);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_4);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout2->addWidget(label_2);

        search_mode = new QComboBox(frame_4);
        search_mode->setObjectName(QString::fromUtf8("search_mode"));

        hboxLayout2->addWidget(search_mode);


        gridLayout1->addWidget(frame_4, 9, 0, 1, 2);

        pressure_frame = new QFrame(widget);
        pressure_frame->setObjectName(QString::fromUtf8("pressure_frame"));
        pressure_frame->setEnabled(true);
        pressure_frame->setFrameShape(QFrame::StyledPanel);
        pressure_frame->setFrameShadow(QFrame::Raised);
        gridLayout8 = new QGridLayout(pressure_frame);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        label_7 = new QLabel(pressure_frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout8->addWidget(label_7, 0, 0, 1, 3);

        opacity_box = new QCheckBox(pressure_frame);
        opacity_box->setObjectName(QString::fromUtf8("opacity_box"));

        gridLayout8->addWidget(opacity_box, 2, 0, 1, 1);

        size_box = new QCheckBox(pressure_frame);
        size_box->setObjectName(QString::fromUtf8("size_box"));

        gridLayout8->addWidget(size_box, 2, 2, 1, 1);

        hardness_box = new QCheckBox(pressure_frame);
        hardness_box->setObjectName(QString::fromUtf8("hardness_box"));

        gridLayout8->addWidget(hardness_box, 1, 0, 1, 1);

        displacement_box = new QCheckBox(pressure_frame);
        displacement_box->setObjectName(QString::fromUtf8("displacement_box"));

        gridLayout8->addWidget(displacement_box, 1, 2, 1, 1);


        gridLayout1->addWidget(pressure_frame, 10, 0, 1, 2);

        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        brush_viewer = new QGraphicsView(frame);
        brush_viewer->setObjectName(QString::fromUtf8("brush_viewer"));
        brush_viewer->setGeometry(QRect(34, 4, 81, 81));
        brush_viewer->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        brush_viewer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout1->addWidget(frame, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 2, 1, 1, 1);


        retranslateUi(Paintbox);
        QObject::connect(opacity_slider, SIGNAL(valueChanged(int)), deck_box, SLOT(setValue(int)));
        QObject::connect(deck_box, SIGNAL(valueChanged(int)), opacity_slider, SLOT(setValue(int)));
        QObject::connect(percentual_slider, SIGNAL(valueChanged(int)), percentual_box, SLOT(setValue(int)));
        QObject::connect(percentual_box, SIGNAL(valueChanged(int)), percentual_slider, SLOT(setValue(int)));
        QObject::connect(hardness_slider, SIGNAL(valueChanged(int)), decrease_box, SLOT(setValue(int)));
        QObject::connect(decrease_box, SIGNAL(valueChanged(int)), hardness_slider, SLOT(setValue(int)));
        QObject::connect(size_slider, SIGNAL(valueChanged(int)), decrease_box_3, SLOT(setValue(int)));
        QObject::connect(pen_button, SIGNAL(toggled(bool)), pen_frame, SLOT(setVisible(bool)));
        QObject::connect(pen_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(pen_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(decrease_box_3, SIGNAL(valueChanged(int)), size_slider, SLOT(setValue(int)));
        QObject::connect(gradient_button, SIGNAL(toggled(bool)), gradient_frame, SLOT(setVisible(bool)));
        QObject::connect(fill_button, SIGNAL(toggled(bool)), pen_frame, SLOT(setVisible(bool)));
        QObject::connect(gradient_button, SIGNAL(toggled(bool)), pen_frame, SLOT(setVisible(bool)));
        QObject::connect(smooth_button, SIGNAL(toggled(bool)), smooth_frame, SLOT(setVisible(bool)));
        QObject::connect(smooth_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(smooth_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(pick_button, SIGNAL(toggled(bool)), pick_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_add_button, SIGNAL(toggled(bool)), mesh_displacement_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_pick_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_smooth_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_smooth_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_add_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_add_button, SIGNAL(toggled(bool)), mesh_displacement_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_smooth_button, SIGNAL(toggled(bool)), smooth_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_pick_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(mesh_add_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(clone_button, SIGNAL(toggled(bool)), clone_source_frame, SLOT(setVisible(bool)));
        QObject::connect(clone_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(clone_button, SIGNAL(toggled(bool)), pen_frame, SLOT(setVisible(bool)));
        QObject::connect(clone_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(perlin_button, SIGNAL(toggled(bool)), pen_frame, SLOT(setVisible(bool)));
        QObject::connect(perlin_button, SIGNAL(toggled(bool)), pen_extra_frame, SLOT(setVisible(bool)));
        QObject::connect(perlin_button, SIGNAL(toggled(bool)), gradient_frame, SLOT(setVisible(bool)));
        QObject::connect(perlin_button, SIGNAL(toggled(bool)), pressure_frame, SLOT(setVisible(bool)));
        QObject::connect(perlin_button, SIGNAL(toggled(bool)), gradient_form, SLOT(setDisabled(bool)));
        QObject::connect(gradient_button, SIGNAL(toggled(bool)), gradient_form, SLOT(setEnabled(bool)));
        QObject::connect(perlin_button, SIGNAL(toggled(bool)), noise_frame, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Paintbox);
    } // setupUi

    void retranslateUi(QWidget *Paintbox)
    {
        Paintbox->setWindowTitle(QApplication::translate("Paintbox", "Vertex Painting", 0, QApplication::UnicodeUTF8));
        undo_button->setText(QApplication::translate("Paintbox", "Undo", 0, QApplication::UnicodeUTF8));
        redo_button->setText(QApplication::translate("Paintbox", "Redo", 0, QApplication::UnicodeUTF8));
        pen_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        fill_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        gradient_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        smooth_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        clone_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        pick_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        perlin_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        mesh_pick_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        mesh_smooth_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        mesh_add_button->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        default_colors->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        switch_colors->setText(QApplication::translate("Paintbox", "...", 0, QApplication::UnicodeUTF8));
        clone_source_load_button->setText(QApplication::translate("Paintbox", "Load From File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deck_box->setToolTip(QApplication::translate("Paintbox", "Change the opacity of the color (this is not the opengl alpha value)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_deck->setText(QApplication::translate("Paintbox", "Opacity", 0, QApplication::UnicodeUTF8));
        label_penmodus->setText(QApplication::translate("Paintbox", "Modus", 0, QApplication::UnicodeUTF8));
        pen_modus->clear();
        pen_modus->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "Normal", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        opacity_slider->setToolTip(QApplication::translate("Paintbox", "Change the opacity of the color (this is not the opengl alpha value)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        percentual_slider->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_percentual->setText(QApplication::translate("Paintbox", "Percentual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        percentual_box->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("Paintbox", "Displacement", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Paintbox", "Direction", 0, QApplication::UnicodeUTF8));
        mesh_displacement_direction->clear();
        mesh_displacement_direction->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "Averaged Normals", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "Per Vertex Normals", 0, QApplication::UnicodeUTF8)
        );
        label_pen->setText(QApplication::translate("Paintbox", "Brush", 0, QApplication::UnicodeUTF8));
        brush_box->clear();
        brush_box->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "Pixmap", 0, QApplication::UnicodeUTF8)
        );
        label_percentual_3->setText(QApplication::translate("Paintbox", "Hardness", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        hardness_slider->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        decrease_box->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_percentual_4->setText(QApplication::translate("Paintbox", "Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        size_slider->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        decrease_box_3->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_percentual_5->setText(QApplication::translate("Paintbox", "Units", 0, QApplication::UnicodeUTF8));
        pen_unit->clear();
        pen_unit->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "pixel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "percentual of bounding box", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Paintbox", "Paint on:", 0, QApplication::UnicodeUTF8));
        backface_culling->setText(QApplication::translate("Paintbox", "backfaces", 0, QApplication::UnicodeUTF8));
        invisible_painting->setText(QApplication::translate("Paintbox", "hidden polygons", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Paintbox", "Noise Scale", 0, QApplication::UnicodeUTF8));
        pick_mode->clear();
        pick_mode->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "Nearest vertex color", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "Pixel color", 0, QApplication::UnicodeUTF8)
        );
        label_pick->setText(QApplication::translate("Paintbox", "Picking mode", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Paintbox", "Type", 0, QApplication::UnicodeUTF8));
        gradient_type->clear();
        gradient_type->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "Foreground to background (RGB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "Foreground to transparency", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("Paintbox", "Form", 0, QApplication::UnicodeUTF8));
        gradient_form->clear();
        gradient_form->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "Linear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "Circular", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Paintbox", "Vertex search:", 0, QApplication::UnicodeUTF8));
        search_mode->clear();
        search_mode->insertItems(0, QStringList()
         << QApplication::translate("Paintbox", "fast", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Paintbox", "slow but accurate", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        search_mode->setToolTip(QApplication::translate("Paintbox", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">fast:</span> works better with big meshes, but can loose some vertexes when faces are not direct connected<br /><span style=\" font-weight:600;\">slow but accurate: </span>sholud be used with small meshes, because it finds every vertex during painting</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("Paintbox", "Pen pressure maps to:", 0, QApplication::UnicodeUTF8));
        opacity_box->setText(QApplication::translate("Paintbox", "Opacity", 0, QApplication::UnicodeUTF8));
        size_box->setText(QApplication::translate("Paintbox", "Size", 0, QApplication::UnicodeUTF8));
        hardness_box->setText(QApplication::translate("Paintbox", "Hardness", 0, QApplication::UnicodeUTF8));
        displacement_box->setText(QApplication::translate("Paintbox", "Displacement / Smooth %", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Paintbox: public Ui_Paintbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTBOX_H
