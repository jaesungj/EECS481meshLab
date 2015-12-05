/****************************************************************************
** Meta object code from reading C++ file 'edit_arc3D.h'
**
** Created: Mon Nov 23 17:01:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_arc3D.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_arc3D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditArc3DPlugin[] = {

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
      17,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   16,   16,   16, 0x0a,
      66,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditArc3DPlugin[] = {
    "EditArc3DPlugin\0\0suspendEditToggle()\0"
    "resetTrackBall()\0ExportPly()\0"
    "exportShotsToRasters()\0"
};

void EditArc3DPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditArc3DPlugin *_t = static_cast<EditArc3DPlugin *>(_o);
        switch (_id) {
        case 0: _t->suspendEditToggle(); break;
        case 1: _t->resetTrackBall(); break;
        case 2: _t->ExportPly(); break;
        case 3: _t->exportShotsToRasters(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditArc3DPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditArc3DPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditArc3DPlugin,
      qt_meta_data_EditArc3DPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditArc3DPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditArc3DPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditArc3DPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditArc3DPlugin))
        return static_cast<void*>(const_cast< EditArc3DPlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditArc3DPlugin*>(this));
    if (!strcmp(_clname, MESH_EDIT_INTERFACE_IID))
        return static_cast< MeshEditInterface*>(const_cast< EditArc3DPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditArc3DPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void EditArc3DPlugin::suspendEditToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EditArc3DPlugin::resetTrackBall()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
