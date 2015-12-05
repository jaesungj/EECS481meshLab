/********************************************************************************
** Form generated from reading UI file 'edit_referencingDialog.ui'
**
** Created: Mon Nov 23 17:01:24 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_REFERENCINGDIALOG_H
#define UI_EDIT_REFERENCINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_referencingDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *absRef;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addLine;
    QPushButton *delLine;
    QGridLayout *gridLayout;
    QPushButton *loadFromFile;
    QPushButton *exportToFile;
    QPushButton *pickCurrent;
    QPushButton *buttonPickRef;
    QGridLayout *gridLayout_2;
    QCheckBox *cbAllowScaling;
    QCheckBox *cbApplyToAll;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonCalculate;
    QPushButton *buttonApply;
    QWidget *distRef;
    QLabel *label;

    void setupUi(QWidget *edit_referencingDialog)
    {
        if (edit_referencingDialog->objectName().isEmpty())
            edit_referencingDialog->setObjectName(QString::fromUtf8("edit_referencingDialog"));
        edit_referencingDialog->resize(643, 494);
        horizontalLayout_2 = new QHBoxLayout(edit_referencingDialog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(edit_referencingDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        absRef = new QWidget();
        absRef->setObjectName(QString::fromUtf8("absRef"));
        verticalLayout = new QVBoxLayout(absRef);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 5, 2, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 5, -1, 5);
        tableWidget = new QTableWidget(absRef);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setDefaultSectionSize(65);

        horizontalLayout_4->addWidget(tableWidget);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, 0, 5);
        addLine = new QPushButton(absRef);
        addLine->setObjectName(QString::fromUtf8("addLine"));
        addLine->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(addLine);

        delLine = new QPushButton(absRef);
        delLine->setObjectName(QString::fromUtf8("delLine"));
        delLine->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(delLine);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        loadFromFile = new QPushButton(absRef);
        loadFromFile->setObjectName(QString::fromUtf8("loadFromFile"));
        loadFromFile->setMinimumSize(QSize(100, 25));
        loadFromFile->setCheckable(false);
        loadFromFile->setFlat(false);

        gridLayout->addWidget(loadFromFile, 0, 0, 1, 1);

        exportToFile = new QPushButton(absRef);
        exportToFile->setObjectName(QString::fromUtf8("exportToFile"));
        exportToFile->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(exportToFile, 0, 1, 1, 1);

        pickCurrent = new QPushButton(absRef);
        pickCurrent->setObjectName(QString::fromUtf8("pickCurrent"));
        pickCurrent->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(pickCurrent, 1, 0, 1, 1);

        buttonPickRef = new QPushButton(absRef);
        buttonPickRef->setObjectName(QString::fromUtf8("buttonPickRef"));
        buttonPickRef->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(buttonPickRef, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 5, -1, 5);
        cbAllowScaling = new QCheckBox(absRef);
        cbAllowScaling->setObjectName(QString::fromUtf8("cbAllowScaling"));

        gridLayout_2->addWidget(cbAllowScaling, 0, 0, 1, 1);

        cbApplyToAll = new QCheckBox(absRef);
        cbApplyToAll->setObjectName(QString::fromUtf8("cbApplyToAll"));

        gridLayout_2->addWidget(cbApplyToAll, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 5, -1, 5);
        buttonCalculate = new QPushButton(absRef);
        buttonCalculate->setObjectName(QString::fromUtf8("buttonCalculate"));
        buttonCalculate->setMinimumSize(QSize(100, 25));

        verticalLayout_3->addWidget(buttonCalculate);

        buttonApply = new QPushButton(absRef);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        buttonApply->setEnabled(false);
        buttonApply->setMinimumSize(QSize(100, 25));

        verticalLayout_3->addWidget(buttonApply);


        verticalLayout->addLayout(verticalLayout_3);

        tabWidget->addTab(absRef, QString());
        distRef = new QWidget();
        distRef->setObjectName(QString::fromUtf8("distRef"));
        label = new QLabel(distRef);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 70, 201, 111));
        label->setWordWrap(true);
        tabWidget->addTab(distRef, QString());

        verticalLayout_2->addWidget(tabWidget);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(edit_referencingDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(edit_referencingDialog);
    } // setupUi

    void retranslateUi(QWidget *edit_referencingDialog)
    {
        edit_referencingDialog->setWindowTitle(QApplication::translate("edit_referencingDialog", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("edit_referencingDialog", "Active", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("edit_referencingDialog", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("edit_referencingDialog", "X (mov)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("edit_referencingDialog", "Y (mov)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("edit_referencingDialog", "Z (mov)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("edit_referencingDialog", "X (ref)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("edit_referencingDialog", "Y (ref)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("edit_referencingDialog", "Z (ref)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("edit_referencingDialog", "error", 0, QApplication::UnicodeUTF8));
        addLine->setText(QApplication::translate("edit_referencingDialog", "Add New Point", 0, QApplication::UnicodeUTF8));
        delLine->setText(QApplication::translate("edit_referencingDialog", "Delete Current Point", 0, QApplication::UnicodeUTF8));
        loadFromFile->setText(QApplication::translate("edit_referencingDialog", "Load Reference Points From File", 0, QApplication::UnicodeUTF8));
        exportToFile->setText(QApplication::translate("edit_referencingDialog", "Export all Referencing Data to file...", 0, QApplication::UnicodeUTF8));
        pickCurrent->setText(QApplication::translate("edit_referencingDialog", "Pick current point on MOVING", 0, QApplication::UnicodeUTF8));
        buttonPickRef->setText(QApplication::translate("edit_referencingDialog", "Pick current point on REFERENCE", 0, QApplication::UnicodeUTF8));
        cbAllowScaling->setText(QApplication::translate("edit_referencingDialog", "Allow UNIFORM Scaling", 0, QApplication::UnicodeUTF8));
        cbApplyToAll->setText(QApplication::translate("edit_referencingDialog", "Apply to all VISIBLE layers", 0, QApplication::UnicodeUTF8));
        buttonCalculate->setText(QApplication::translate("edit_referencingDialog", "Calculate Rototranslation", 0, QApplication::UnicodeUTF8));
        buttonApply->setText(QApplication::translate("edit_referencingDialog", "Apply", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(absRef), QApplication::translate("edit_referencingDialog", "Absolute Reference", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("edit_referencingDialog", "used to scale scene given distances between picked points: useful for scaling to correct size data coming from SFM, PHOTOGRAMMETRY and DENSE STEREO                    NOT YET IMPLEMENTED", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(distRef), QApplication::translate("edit_referencingDialog", "Distance Reference", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class edit_referencingDialog: public Ui_edit_referencingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_REFERENCINGDIALOG_H
