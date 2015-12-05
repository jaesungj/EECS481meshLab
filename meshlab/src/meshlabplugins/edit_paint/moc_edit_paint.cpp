/****************************************************************************
** Meta object code from reading C++ file 'edit_paint.h'
**
** Created: Mon Nov 23 16:59:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_paint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_paint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditPaintPlugin[] = {

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
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   16,   16,   16, 0x0a,
      56,   54,   16,   16, 0x0a,
     100,   78,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditPaintPlugin[] = {
    "EditPaintPlugin\0\0setSelectionRendering(bool)\0"
    "update()\0t\0setToolType(ToolType)\0"
    "size,opacity,hardness\0"
    "setBrushSettings(int,int,int)\0"
};

void EditPaintPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditPaintPlugin *_t = static_cast<EditPaintPlugin *>(_o);
        switch (_id) {
        case 0: _t->setSelectionRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setToolType((*reinterpret_cast< ToolType(*)>(_a[1]))); break;
        case 3: _t->setBrushSettings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditPaintPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditPaintPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditPaintPlugin,
      qt_meta_data_EditPaintPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditPaintPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditPaintPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditPaintPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditPaintPlugin))
        return static_cast<void*>(const_cast< EditPaintPlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditPaintPlugin*>(this));
    if (!strcmp(_clname, MESH_EDIT_INTERFACE_IID))
        return static_cast< MeshEditInterface*>(const_cast< EditPaintPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditPaintPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EditPaintPlugin::setSelectionRendering(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
