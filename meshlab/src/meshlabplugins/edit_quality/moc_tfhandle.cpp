/****************************************************************************
** Meta object code from reading C++ file 'tfhandle.h'
**
** Created: Mon Nov 23 17:00:12 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tfhandle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tfhandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TFHandle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      29,    9,    9,    9, 0x05,
      54,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TFHandle[] = {
    "TFHandle\0\0clicked(TFHandle*)\0"
    "doubleClicked(TFHandle*)\0"
    "positionChanged(TFHandle*)\0"
};

void TFHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TFHandle *_t = static_cast<TFHandle *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TFHandle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TFHandle::staticMetaObject = {
    { &Handle::staticMetaObject, qt_meta_stringdata_TFHandle,
      qt_meta_data_TFHandle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TFHandle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TFHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TFHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TFHandle))
        return static_cast<void*>(const_cast< TFHandle*>(this));
    return Handle::qt_metacast(_clname);
}

int TFHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Handle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TFHandle::clicked(TFHandle * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TFHandle::doubleClicked(TFHandle * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TFHandle::positionChanged(TFHandle * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
