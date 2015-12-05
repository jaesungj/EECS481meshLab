/****************************************************************************
** Meta object code from reading C++ file 'edit_hole.h'
**
** Created: Mon Nov 23 16:58:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_hole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_hole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditHolePlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      24,   15,   15,   15, 0x08,
      43,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,
      65,   15,   15,   15, 0x08,
      78,   15,   15,   15, 0x08,
      93,   15,   15,   15, 0x08,
     106,   15,   15,   15, 0x08,
     119,   15,   15,   15, 0x08,
     135,   15,   15,   15, 0x08,
     155,  149,   15,   15, 0x08,
     172,  168,   15,   15, 0x08,
     191,  168,   15,   15, 0x08,
     217,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditHolePlugin[] = {
    "EditHolePlugin\0\0upGlA()\0resizeViewColumn()\0"
    "fill()\0manualBridge()\0autoBridge()\0"
    "closeNMHoles()\0cancelFill()\0acceptFill()\0"
    "acceptBridges()\0clearBridge()\0index\0"
    "skipTab(int)\0val\0updateDWeight(int)\0"
    "updateBridgeSldValue(int)\0"
    "chekSingleBridgeOpt()\0"
};

void EditHolePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditHolePlugin *_t = static_cast<EditHolePlugin *>(_o);
        switch (_id) {
        case 0: _t->upGlA(); break;
        case 1: _t->resizeViewColumn(); break;
        case 2: _t->fill(); break;
        case 3: _t->manualBridge(); break;
        case 4: _t->autoBridge(); break;
        case 5: _t->closeNMHoles(); break;
        case 6: _t->cancelFill(); break;
        case 7: _t->acceptFill(); break;
        case 8: _t->acceptBridges(); break;
        case 9: _t->clearBridge(); break;
        case 10: _t->skipTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateDWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateBridgeSldValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->chekSingleBridgeOpt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditHolePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditHolePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditHolePlugin,
      qt_meta_data_EditHolePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditHolePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditHolePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditHolePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditHolePlugin))
        return static_cast<void*>(const_cast< EditHolePlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditHolePlugin*>(this));
    if (!strcmp(_clname, MESH_EDIT_INTERFACE_IID))
        return static_cast< MeshEditInterface*>(const_cast< EditHolePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditHolePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
