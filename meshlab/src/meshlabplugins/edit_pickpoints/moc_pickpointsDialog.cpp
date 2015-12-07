/****************************************************************************
** Meta object code from reading C++ file 'pickpointsDialog.h'
**
** Created: Mon Dec 7 12:30:54 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pickpointsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pickpointsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PickPointsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      33,   17,   17,   17, 0x08,
      58,   17,   17,   17, 0x08,
      83,   17,   17,   17, 0x08,
     115,  107,   17,   17, 0x08,
     136,  107,   17,   17, 0x08,
     157,  107,   17,   17, 0x08,
     180,   17,   17,   17, 0x08,
     199,   17,   17,   17, 0x08,
     229,   17,   17,   17, 0x08,
     256,   17,   17,   17, 0x08,
     276,   17,   17,   17, 0x08,
     308,   17,   17,   17, 0x08,
     337,   17,   17,   17, 0x08,
     358,   17,   17,   17, 0x08,
     365,   17,   17,   17, 0x08,
     396,   17,   17,   17, 0x08,
     434,   17,   17,   17, 0x08,
     468,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PickPointsDialog[] = {
    "PickPointsDialog\0\0redrawPoints()\0"
    "removeHighlightedPoint()\0"
    "renameHighlightedPoint()\0"
    "clearHighlightedPoint()\0checked\0"
    "togglePickMode(bool)\0toggleMoveMode(bool)\0"
    "toggleSelectMode(bool)\0savePointsToFile()\0"
    "askUserForFileAndLoadPoints()\0"
    "clearPointsButtonClicked()\0"
    "savePointTemplate()\0askUserForFileAndloadTemplate()\0"
    "clearTemplateButtonClicked()\0"
    "addPointToTemplate()\0undo()\0"
    "on_calculateDistance_clicked()\0"
    "on_pickPointModeRadioButton_clicked()\0"
    "on_movePointRadioButton_clicked()\0"
    "on_selectPointRadioButton_clicked()\0"
};

void PickPointsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PickPointsDialog *_t = static_cast<PickPointsDialog *>(_o);
        switch (_id) {
        case 0: _t->redrawPoints(); break;
        case 1: _t->removeHighlightedPoint(); break;
        case 2: _t->renameHighlightedPoint(); break;
        case 3: _t->clearHighlightedPoint(); break;
        case 4: _t->togglePickMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleMoveMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleSelectMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->savePointsToFile(); break;
        case 8: _t->askUserForFileAndLoadPoints(); break;
        case 9: _t->clearPointsButtonClicked(); break;
        case 10: _t->savePointTemplate(); break;
        case 11: _t->askUserForFileAndloadTemplate(); break;
        case 12: _t->clearTemplateButtonClicked(); break;
        case 13: _t->addPointToTemplate(); break;
        case 14: _t->undo(); break;
        case 15: _t->on_calculateDistance_clicked(); break;
        case 16: _t->on_pickPointModeRadioButton_clicked(); break;
        case 17: _t->on_movePointRadioButton_clicked(); break;
        case 18: _t->on_selectPointRadioButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PickPointsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PickPointsDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_PickPointsDialog,
      qt_meta_data_PickPointsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PickPointsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PickPointsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PickPointsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PickPointsDialog))
        return static_cast<void*>(const_cast< PickPointsDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int PickPointsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_TreeCheckBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TreeCheckBox[] = {
    "TreeCheckBox\0\0checked\0toggleAndDraw(bool)\0"
};

void TreeCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeCheckBox *_t = static_cast<TreeCheckBox *>(_o);
        switch (_id) {
        case 0: _t->toggleAndDraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TreeCheckBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TreeCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_TreeCheckBox,
      qt_meta_data_TreeCheckBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TreeCheckBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TreeCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TreeCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TreeCheckBox))
        return static_cast<void*>(const_cast< TreeCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int TreeCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
