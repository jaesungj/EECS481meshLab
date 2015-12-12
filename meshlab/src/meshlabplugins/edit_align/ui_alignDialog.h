/********************************************************************************
** Form generated from reading UI file 'alignDialog.ui'
**
** Created: Sat Dec 12 18:10:10 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNDIALOG_H
#define UI_ALIGNDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alignDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QTreeWidget *alignTreeWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *glueHereButton;
    QPushButton *glueHereAllButton;
    QPushButton *manualAlignButton;
    QPushButton *pointBasedAlignButton;
    QPushButton *baseMeshButton;
    QPushButton *recalcButton;
    QPushButton *icpButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *icpParamButton;
    QPushButton *icpParamCurrentButton;
    QPushButton *meshTreeParamButton;
    QPushButton *badArcButton;
    QPushButton *hideRevealButton;
    QCheckBox *falseColorCB;
    QCheckBox *pointRenderingCB;
    QTextEdit *logTextEdit;

    void setupUi(QWidget *alignDialog)
    {
        if (alignDialog->objectName().isEmpty())
            alignDialog->setObjectName(QString::fromUtf8("alignDialog"));
        alignDialog->resize(461, 713);
        verticalLayout_3 = new QVBoxLayout(alignDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(alignDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(0, 0));

        verticalLayout_4->addWidget(pushButton);

        alignTreeWidget = new QTreeWidget(frame);
        alignTreeWidget->setObjectName(QString::fromUtf8("alignTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(alignTreeWidget->sizePolicy().hasHeightForWidth());
        alignTreeWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        alignTreeWidget->setFont(font);
        alignTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        alignTreeWidget->setColumnCount(4);

        verticalLayout_4->addWidget(alignTreeWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        glueHereButton = new QPushButton(frame);
        glueHereButton->setObjectName(QString::fromUtf8("glueHereButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(glueHereButton->sizePolicy().hasHeightForWidth());
        glueHereButton->setSizePolicy(sizePolicy1);
        glueHereButton->setMinimumSize(QSize(100, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        glueHereButton->setFont(font1);

        verticalLayout_2->addWidget(glueHereButton);

        glueHereAllButton = new QPushButton(frame);
        glueHereAllButton->setObjectName(QString::fromUtf8("glueHereAllButton"));
        sizePolicy1.setHeightForWidth(glueHereAllButton->sizePolicy().hasHeightForWidth());
        glueHereAllButton->setSizePolicy(sizePolicy1);
        glueHereAllButton->setMinimumSize(QSize(0, 0));
        glueHereAllButton->setMaximumSize(QSize(0, 0));
        glueHereAllButton->setFont(font1);

        verticalLayout_2->addWidget(glueHereAllButton);

        manualAlignButton = new QPushButton(frame);
        manualAlignButton->setObjectName(QString::fromUtf8("manualAlignButton"));
        sizePolicy1.setHeightForWidth(manualAlignButton->sizePolicy().hasHeightForWidth());
        manualAlignButton->setSizePolicy(sizePolicy1);
        manualAlignButton->setMinimumSize(QSize(0, 0));
        manualAlignButton->setMaximumSize(QSize(0, 0));
        manualAlignButton->setFont(font1);

        verticalLayout_2->addWidget(manualAlignButton);

        pointBasedAlignButton = new QPushButton(frame);
        pointBasedAlignButton->setObjectName(QString::fromUtf8("pointBasedAlignButton"));
        sizePolicy1.setHeightForWidth(pointBasedAlignButton->sizePolicy().hasHeightForWidth());
        pointBasedAlignButton->setSizePolicy(sizePolicy1);
        pointBasedAlignButton->setMinimumSize(QSize(100, 25));
        pointBasedAlignButton->setFont(font1);

        verticalLayout_2->addWidget(pointBasedAlignButton);

        baseMeshButton = new QPushButton(frame);
        baseMeshButton->setObjectName(QString::fromUtf8("baseMeshButton"));
        sizePolicy1.setHeightForWidth(baseMeshButton->sizePolicy().hasHeightForWidth());
        baseMeshButton->setSizePolicy(sizePolicy1);
        baseMeshButton->setMinimumSize(QSize(0, 0));
        baseMeshButton->setMaximumSize(QSize(0, 0));
        baseMeshButton->setFont(font1);

        verticalLayout_2->addWidget(baseMeshButton);

        recalcButton = new QPushButton(frame);
        recalcButton->setObjectName(QString::fromUtf8("recalcButton"));
        sizePolicy1.setHeightForWidth(recalcButton->sizePolicy().hasHeightForWidth());
        recalcButton->setSizePolicy(sizePolicy1);
        recalcButton->setMinimumSize(QSize(0, 0));
        recalcButton->setMaximumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(13);
        recalcButton->setFont(font2);

        verticalLayout_2->addWidget(recalcButton);

        icpButton = new QPushButton(frame);
        icpButton->setObjectName(QString::fromUtf8("icpButton"));
        icpButton->setMinimumSize(QSize(0, 0));
        icpButton->setMaximumSize(QSize(0, 0));
        icpButton->setFont(font1);

        verticalLayout_2->addWidget(icpButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        icpParamButton = new QPushButton(frame);
        icpParamButton->setObjectName(QString::fromUtf8("icpParamButton"));
        sizePolicy1.setHeightForWidth(icpParamButton->sizePolicy().hasHeightForWidth());
        icpParamButton->setSizePolicy(sizePolicy1);
        icpParamButton->setMinimumSize(QSize(0, 0));
        icpParamButton->setMaximumSize(QSize(0, 0));
        icpParamButton->setFont(font1);

        verticalLayout->addWidget(icpParamButton);

        icpParamCurrentButton = new QPushButton(frame);
        icpParamCurrentButton->setObjectName(QString::fromUtf8("icpParamCurrentButton"));
        sizePolicy1.setHeightForWidth(icpParamCurrentButton->sizePolicy().hasHeightForWidth());
        icpParamCurrentButton->setSizePolicy(sizePolicy1);
        icpParamCurrentButton->setMinimumSize(QSize(0, 0));
        icpParamCurrentButton->setMaximumSize(QSize(0, 0));
        icpParamCurrentButton->setFont(font2);

        verticalLayout->addWidget(icpParamCurrentButton);

        meshTreeParamButton = new QPushButton(frame);
        meshTreeParamButton->setObjectName(QString::fromUtf8("meshTreeParamButton"));
        sizePolicy1.setHeightForWidth(meshTreeParamButton->sizePolicy().hasHeightForWidth());
        meshTreeParamButton->setSizePolicy(sizePolicy1);
        meshTreeParamButton->setMinimumSize(QSize(0, 0));
        meshTreeParamButton->setMaximumSize(QSize(0, 0));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setWeight(50);
        meshTreeParamButton->setFont(font3);

        verticalLayout->addWidget(meshTreeParamButton);

        badArcButton = new QPushButton(frame);
        badArcButton->setObjectName(QString::fromUtf8("badArcButton"));
        sizePolicy1.setHeightForWidth(badArcButton->sizePolicy().hasHeightForWidth());
        badArcButton->setSizePolicy(sizePolicy1);
        badArcButton->setMinimumSize(QSize(0, 0));
        badArcButton->setMaximumSize(QSize(0, 0));
        badArcButton->setFont(font1);

        verticalLayout->addWidget(badArcButton);

        hideRevealButton = new QPushButton(frame);
        hideRevealButton->setObjectName(QString::fromUtf8("hideRevealButton"));
        sizePolicy1.setHeightForWidth(hideRevealButton->sizePolicy().hasHeightForWidth());
        hideRevealButton->setSizePolicy(sizePolicy1);
        hideRevealButton->setMinimumSize(QSize(0, 0));
        hideRevealButton->setMaximumSize(QSize(0, 0));
        hideRevealButton->setFont(font1);

        verticalLayout->addWidget(hideRevealButton);

        falseColorCB = new QCheckBox(frame);
        falseColorCB->setObjectName(QString::fromUtf8("falseColorCB"));
        falseColorCB->setMaximumSize(QSize(0, 0));
        falseColorCB->setChecked(true);

        verticalLayout->addWidget(falseColorCB);

        pointRenderingCB = new QCheckBox(frame);
        pointRenderingCB->setObjectName(QString::fromUtf8("pointRenderingCB"));
        pointRenderingCB->setMaximumSize(QSize(0, 0));

        verticalLayout->addWidget(pointRenderingCB);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        logTextEdit = new QTextEdit(frame);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(logTextEdit->sizePolicy().hasHeightForWidth());
        logTextEdit->setSizePolicy(sizePolicy2);
        logTextEdit->setMaximumSize(QSize(0, 0));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier"));
        font4.setPointSize(9);
        logTextEdit->setFont(font4);
        logTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(logTextEdit);


        verticalLayout_3->addWidget(frame);


        retranslateUi(alignDialog);

        QMetaObject::connectSlotsByName(alignDialog);
    } // setupUi

    void retranslateUi(QWidget *alignDialog)
    {
        alignDialog->setWindowTitle(QApplication::translate("alignDialog", "Align Tool", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("alignDialog", "PushButton", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = alignTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("alignDialog", "4", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("alignDialog", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("alignDialog", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("alignDialog", "1", 0, QApplication::UnicodeUTF8));
        glueHereButton->setText(QApplication::translate("alignDialog", "Glue Here Mesh", 0, QApplication::UnicodeUTF8));
        glueHereAllButton->setText(QString());
        manualAlignButton->setText(QApplication::translate("alignDialog", "Manual Rough Glueing", 0, QApplication::UnicodeUTF8));
        pointBasedAlignButton->setText(QApplication::translate("alignDialog", "Point Based Glueing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        baseMeshButton->setToolTip(QApplication::translate("alignDialog", "When pressed it make the current mesh as base mesh, e.g. the one with a Identity as transformation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        baseMeshButton->setText(QApplication::translate("alignDialog", "Set as Base Mesh", 0, QApplication::UnicodeUTF8));
        recalcButton->setText(QApplication::translate("alignDialog", "Recalc Current Arc", 0, QApplication::UnicodeUTF8));
        icpButton->setText(QApplication::translate("alignDialog", "Process", 0, QApplication::UnicodeUTF8));
        icpParamButton->setText(QApplication::translate("alignDialog", " Param ICP Default ", 0, QApplication::UnicodeUTF8));
        icpParamCurrentButton->setText(QApplication::translate("alignDialog", "Param ICP Current Arc ", 0, QApplication::UnicodeUTF8));
        meshTreeParamButton->setText(QApplication::translate("alignDialog", "Param Arc Creation", 0, QApplication::UnicodeUTF8));
        badArcButton->setText(QApplication::translate("alignDialog", "Show Bad Arc", 0, QApplication::UnicodeUTF8));
        hideRevealButton->setText(QApplication::translate("alignDialog", "Hide/Reveal Unglued Mesh", 0, QApplication::UnicodeUTF8));
        falseColorCB->setText(QApplication::translate("alignDialog", "use False Colors", 0, QApplication::UnicodeUTF8));
        pointRenderingCB->setText(QApplication::translate("alignDialog", "use Point Rendering", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class alignDialog: public Ui_alignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNDIALOG_H
