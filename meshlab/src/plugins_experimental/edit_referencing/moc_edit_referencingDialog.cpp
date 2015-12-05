/****************************************************************************
** Meta object code from reading C++ file 'edit_referencingDialog.h'
**
** Created: Mon Nov 23 17:01:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_referencingDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_referencingDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_edit_referencingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   34,   23,   23, 0x08,
      96,   85,   23,   23, 0x08,
     190,  138,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_edit_referencingDialog[] = {
    "edit_referencingDialog\0\0closing()\0"
    "item\0on_tableWidget_itemChanged(QTableWidgetItem*)\0"
    "row,column\0on_tableWidget_cellDoubleClicked(int,int)\0"
    "currentRow,currentColumn,previousRow,previousColumn\0"
    "on_tableWidget_currentCellChanged(int,int,int,int)\0"
};

void edit_referencingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        edit_referencingDialog *_t = static_cast<edit_referencingDialog *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_tableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_tableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData edit_referencingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject edit_referencingDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_edit_referencingDialog,
      qt_meta_data_edit_referencingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &edit_referencingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *edit_referencingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *edit_referencingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_edit_referencingDialog))
        return static_cast<void*>(const_cast< edit_referencingDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int edit_referencingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void edit_referencingDialog::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
