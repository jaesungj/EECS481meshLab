/****************************************************************************
** Meta object code from reading C++ file 'alignDialog.h'
**
** Created: Mon Nov 23 16:58:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "alignDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alignDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlignDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      23,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   51,   12,   12, 0x0a,
      97,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AlignDialog[] = {
    "AlignDialog\0\0closing()\0"
    "updateMeshSetVisibilities()\0item,column\0"
    "onClickItem(QTreeWidgetItem*,int)\0"
    "currentMeshChanged(int)\0"
};

void AlignDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlignDialog *_t = static_cast<AlignDialog *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->updateMeshSetVisibilities(); break;
        case 2: _t->onClickItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->currentMeshChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AlignDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlignDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_AlignDialog,
      qt_meta_data_AlignDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlignDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlignDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlignDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlignDialog))
        return static_cast<void*>(const_cast< AlignDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int AlignDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AlignDialog::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AlignDialog::updateMeshSetVisibilities()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
