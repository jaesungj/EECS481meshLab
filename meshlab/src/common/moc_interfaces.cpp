/****************************************************************************
** Meta object code from reading C++ file 'interfaces.h'
**
** Created: Mon Nov 23 16:53:12 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interfaces.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfaces.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshLabFilterInterface[] = {

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
      30,   24,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeshLabFilterInterface[] = {
    "MeshLabFilterInterface\0\0inter\0"
    "setInterrupt(bool)\0"
};

void MeshLabFilterInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshLabFilterInterface *_t = static_cast<MeshLabFilterInterface *>(_o);
        switch (_id) {
        case 0: _t->setInterrupt((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshLabFilterInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshLabFilterInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeshLabFilterInterface,
      qt_meta_data_MeshLabFilterInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshLabFilterInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshLabFilterInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshLabFilterInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshLabFilterInterface))
        return static_cast<void*>(const_cast< MeshLabFilterInterface*>(this));
    if (!strcmp(_clname, "MeshLabInterface"))
        return static_cast< MeshLabInterface*>(const_cast< MeshLabFilterInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int MeshLabFilterInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
