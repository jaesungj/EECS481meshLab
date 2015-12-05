/********************************************************************************
** Form generated from reading UI file 'textureeditor.ui'
**
** Created: Mon Nov 23 17:00:14 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTUREEDITOR_H
#define UI_TEXTUREEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextureEditorClass
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBoxAction;
    QGridLayout *gridLayout;
    QPushButton *moveButton;
    QSpacerItem *spacerItem;
    QPushButton *selectButton;
    QSpacerItem *spacerItem1;
    QPushButton *connectedButton;
    QSpacerItem *spacerItem2;
    QPushButton *vertexButton;
    QSpacerItem *spacerItem3;
    QPushButton *unify2Button;
    QPushButton *unifySetButton;
    QPushButton *flipHButton;
    QPushButton *flipVButton;
    QPushButton *invertButton;
    QPushButton *cancelButton;
    QGroupBox *groupBoxOptimize;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout;
    QPushButton *clampButton;
    QPushButton *modulusButton;
    QGroupBox *groupBox_5;
    QHBoxLayout *hboxLayout1;
    QLabel *labelName;
    QPushButton *browseButton;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout2;
    QRadioButton *radioButtonWhole;
    QRadioButton *radioButtonSelected;
    QSpacerItem *spacerItem4;
    QLabel *label;
    QSpinBox *spinBoxIteration;
    QPushButton *smoothButton;

    void setupUi(QWidget *TextureEditorClass)
    {
        if (TextureEditorClass->objectName().isEmpty())
            TextureEditorClass->setObjectName(QString::fromUtf8("TextureEditorClass"));
        TextureEditorClass->resize(429, 736);
        vboxLayout = new QVBoxLayout(TextureEditorClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(TextureEditorClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(0, 0, 405, 405));
        tabWidget->addTab(tab, QString());

        vboxLayout->addWidget(tabWidget);

        groupBoxAction = new QGroupBox(TextureEditorClass);
        groupBoxAction->setObjectName(QString::fromUtf8("groupBoxAction"));
        gridLayout = new QGridLayout(groupBoxAction);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        moveButton = new QPushButton(groupBoxAction);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(moveButton->sizePolicy().hasHeightForWidth());
        moveButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/selpan.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveButton->setIcon(icon);
        moveButton->setIconSize(QSize(32, 32));
        moveButton->setCheckable(true);
        moveButton->setChecked(true);

        gridLayout->addWidget(moveButton, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        selectButton = new QPushButton(groupBoxAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        sizePolicy.setHeightForWidth(selectButton->sizePolicy().hasHeightForWidth());
        selectButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/selarea.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectButton->setIcon(icon1);
        selectButton->setIconSize(QSize(32, 32));
        selectButton->setCheckable(true);

        gridLayout->addWidget(selectButton, 0, 2, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        connectedButton = new QPushButton(groupBoxAction);
        connectedButton->setObjectName(QString::fromUtf8("connectedButton"));
        sizePolicy.setHeightForWidth(connectedButton->sizePolicy().hasHeightForWidth());
        connectedButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/selcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectedButton->setIcon(icon2);
        connectedButton->setIconSize(QSize(32, 32));
        connectedButton->setCheckable(true);

        gridLayout->addWidget(connectedButton, 0, 4, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 5, 1, 1);

        vertexButton = new QPushButton(groupBoxAction);
        vertexButton->setObjectName(QString::fromUtf8("vertexButton"));
        sizePolicy.setHeightForWidth(vertexButton->sizePolicy().hasHeightForWidth());
        vertexButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/selver.png"), QSize(), QIcon::Normal, QIcon::Off);
        vertexButton->setIcon(icon3);
        vertexButton->setIconSize(QSize(32, 32));
        vertexButton->setCheckable(true);

        gridLayout->addWidget(vertexButton, 0, 6, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 0, 7, 1, 1);

        unify2Button = new QPushButton(groupBoxAction);
        unify2Button->setObjectName(QString::fromUtf8("unify2Button"));
        sizePolicy.setHeightForWidth(unify2Button->sizePolicy().hasHeightForWidth());
        unify2Button->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/collapse.png"), QSize(), QIcon::Normal, QIcon::Off);
        unify2Button->setIcon(icon4);
        unify2Button->setIconSize(QSize(32, 32));
        unify2Button->setCheckable(false);
        unify2Button->setChecked(false);

        gridLayout->addWidget(unify2Button, 0, 8, 1, 1);

        unifySetButton = new QPushButton(groupBoxAction);
        unifySetButton->setObjectName(QString::fromUtf8("unifySetButton"));
        sizePolicy.setHeightForWidth(unifySetButton->sizePolicy().hasHeightForWidth());
        unifySetButton->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/unify.png"), QSize(), QIcon::Normal, QIcon::Off);
        unifySetButton->setIcon(icon5);
        unifySetButton->setIconSize(QSize(32, 32));
        unifySetButton->setCheckable(true);
        unifySetButton->setChecked(false);

        gridLayout->addWidget(unifySetButton, 1, 0, 1, 2);

        flipHButton = new QPushButton(groupBoxAction);
        flipHButton->setObjectName(QString::fromUtf8("flipHButton"));
        sizePolicy.setHeightForWidth(flipHButton->sizePolicy().hasHeightForWidth());
        flipHButton->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/flipH.png"), QSize(), QIcon::Normal, QIcon::Off);
        flipHButton->setIcon(icon6);
        flipHButton->setIconSize(QSize(32, 32));
        flipHButton->setCheckable(false);

        gridLayout->addWidget(flipHButton, 1, 2, 1, 2);

        flipVButton = new QPushButton(groupBoxAction);
        flipVButton->setObjectName(QString::fromUtf8("flipVButton"));
        sizePolicy.setHeightForWidth(flipVButton->sizePolicy().hasHeightForWidth());
        flipVButton->setSizePolicy(sizePolicy);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/flipV.png"), QSize(), QIcon::Normal, QIcon::Off);
        flipVButton->setIcon(icon7);
        flipVButton->setIconSize(QSize(32, 32));
        flipVButton->setCheckable(false);

        gridLayout->addWidget(flipVButton, 1, 4, 1, 1);

        invertButton = new QPushButton(groupBoxAction);
        invertButton->setObjectName(QString::fromUtf8("invertButton"));
        sizePolicy.setHeightForWidth(invertButton->sizePolicy().hasHeightForWidth());
        invertButton->setSizePolicy(sizePolicy);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/invertsel.png"), QSize(), QIcon::Normal, QIcon::Off);
        invertButton->setIcon(icon8);
        invertButton->setIconSize(QSize(32, 32));
        invertButton->setCheckable(false);

        gridLayout->addWidget(invertButton, 1, 6, 1, 1);

        cancelButton = new QPushButton(groupBoxAction);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/selcanc.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon9);
        cancelButton->setIconSize(QSize(32, 32));
        cancelButton->setCheckable(true);

        gridLayout->addWidget(cancelButton, 1, 8, 1, 1);


        vboxLayout->addWidget(groupBoxAction);

        groupBoxOptimize = new QGroupBox(TextureEditorClass);
        groupBoxOptimize->setObjectName(QString::fromUtf8("groupBoxOptimize"));
        gridLayout1 = new QGridLayout(groupBoxOptimize);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox_4 = new QGroupBox(groupBoxOptimize);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(182, 16777215));
        hboxLayout = new QHBoxLayout(groupBox_4);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        clampButton = new QPushButton(groupBox_4);
        clampButton->setObjectName(QString::fromUtf8("clampButton"));
        clampButton->setMaximumSize(QSize(70, 23));

        hboxLayout->addWidget(clampButton);

        modulusButton = new QPushButton(groupBox_4);
        modulusButton->setObjectName(QString::fromUtf8("modulusButton"));
        modulusButton->setMaximumSize(QSize(70, 23));

        hboxLayout->addWidget(modulusButton);


        gridLayout1->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBoxOptimize);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        hboxLayout1 = new QHBoxLayout(groupBox_5);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        labelName = new QLabel(groupBox_5);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        hboxLayout1->addWidget(labelName);

        browseButton = new QPushButton(groupBox_5);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        browseButton->setMaximumSize(QSize(90, 16777215));

        hboxLayout1->addWidget(browseButton);


        gridLayout1->addWidget(groupBox_5, 0, 1, 1, 1);

        groupBox = new QGroupBox(groupBoxOptimize);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout2 = new QHBoxLayout(groupBox);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        radioButtonWhole = new QRadioButton(groupBox);
        radioButtonWhole->setObjectName(QString::fromUtf8("radioButtonWhole"));
        radioButtonWhole->setChecked(true);

        hboxLayout2->addWidget(radioButtonWhole);

        radioButtonSelected = new QRadioButton(groupBox);
        radioButtonSelected->setObjectName(QString::fromUtf8("radioButtonSelected"));

        hboxLayout2->addWidget(radioButtonSelected);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout2->addWidget(label);

        spinBoxIteration = new QSpinBox(groupBox);
        spinBoxIteration->setObjectName(QString::fromUtf8("spinBoxIteration"));
        spinBoxIteration->setMinimum(1);
        spinBoxIteration->setMaximum(10);
        spinBoxIteration->setValue(1);

        hboxLayout2->addWidget(spinBoxIteration);

        smoothButton = new QPushButton(groupBox);
        smoothButton->setObjectName(QString::fromUtf8("smoothButton"));

        hboxLayout2->addWidget(smoothButton);


        gridLayout1->addWidget(groupBox, 1, 0, 1, 2);


        vboxLayout->addWidget(groupBoxOptimize);

        QWidget::setTabOrder(moveButton, selectButton);
        QWidget::setTabOrder(selectButton, connectedButton);
        QWidget::setTabOrder(connectedButton, vertexButton);
        QWidget::setTabOrder(vertexButton, invertButton);
        QWidget::setTabOrder(invertButton, cancelButton);
        QWidget::setTabOrder(cancelButton, clampButton);
        QWidget::setTabOrder(clampButton, modulusButton);
        QWidget::setTabOrder(modulusButton, spinBoxIteration);
        QWidget::setTabOrder(spinBoxIteration, smoothButton);
        QWidget::setTabOrder(smoothButton, tabWidget);

        retranslateUi(TextureEditorClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TextureEditorClass);
    } // setupUi

    void retranslateUi(QWidget *TextureEditorClass)
    {
        TextureEditorClass->setWindowTitle(QApplication::translate("TextureEditorClass", "TextureEditor", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TextureEditorClass", "Texture", 0, QApplication::UnicodeUTF8));
        groupBoxAction->setTitle(QApplication::translate("TextureEditorClass", " Action selection ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveButton->setToolTip(QApplication::translate("TextureEditorClass", "Allow pan and zoom on the UV Space", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        selectButton->setToolTip(QApplication::translate("TextureEditorClass", "Allow the selection of faces inside a dragged area", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        connectedButton->setToolTip(QApplication::translate("TextureEditorClass", "Allow the selection of connected component", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        connectedButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        vertexButton->setToolTip(QApplication::translate("TextureEditorClass", "Allow the selection of vertexes inside a dragged area", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        vertexButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        unify2Button->setToolTip(QApplication::translate("TextureEditorClass", "Collapse a couple of vertexes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        unify2Button->setText(QString());
#ifndef QT_NO_TOOLTIP
        unifySetButton->setToolTip(QApplication::translate("TextureEditorClass", "Choose and unify a set of disconnected edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        unifySetButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        flipHButton->setToolTip(QApplication::translate("TextureEditorClass", "Flip selected faces horizzontally", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        flipHButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        flipVButton->setToolTip(QApplication::translate("TextureEditorClass", "Flip selected faces vertically", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        flipVButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        invertButton->setToolTip(QApplication::translate("TextureEditorClass", "Invert selected faces/vertexes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        invertButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("TextureEditorClass", "Clear selected faces/vertexes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cancelButton->setText(QString());
        groupBoxOptimize->setTitle(QApplication::translate("TextureEditorClass", " Optimization ", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("TextureEditorClass", " Remap ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clampButton->setToolTip(QApplication::translate("TextureEditorClass", "Clamp texture coordinates of of border", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clampButton->setText(QApplication::translate("TextureEditorClass", "Clamp", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        modulusButton->setToolTip(QApplication::translate("TextureEditorClass", "Apply moudlus operator to texture coordinates out of border", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        modulusButton->setText(QApplication::translate("TextureEditorClass", "Modulus", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("TextureEditorClass", " Change Texture ", 0, QApplication::UnicodeUTF8));
        labelName->setText(QApplication::translate("TextureEditorClass", "---", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("TextureEditorClass", "Browse", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TextureEditorClass", " Smooth texture coordinates ", 0, QApplication::UnicodeUTF8));
        radioButtonWhole->setText(QApplication::translate("TextureEditorClass", "Whole model", 0, QApplication::UnicodeUTF8));
        radioButtonSelected->setText(QApplication::translate("TextureEditorClass", "Selected faces", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TextureEditorClass", "Iteration", 0, QApplication::UnicodeUTF8));
        smoothButton->setText(QApplication::translate("TextureEditorClass", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TextureEditorClass: public Ui_TextureEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTUREEDITOR_H
