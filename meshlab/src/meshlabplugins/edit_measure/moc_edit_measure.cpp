/****************************************************************************
** Meta object code from reading C++ file 'edit_measure.h'
**
** Created: Mon Nov 23 16:58:40 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_measure.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_measure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditMeasurePlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_EditMeasurePlugin[] = {
    "EditMeasurePlugin\0\0suspendEditToggle()\0"
};

void EditMeasurePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditMeasurePlugin *_t = static_cast<EditMeasurePlugin *>(_o);
        switch (_id) {
        case 0: _t->suspendEditToggle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditMeasurePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditMeasurePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditMeasurePlugin,
      qt_meta_data_EditMeasurePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditMeasurePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditMeasurePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditMeasurePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditMeasurePlugin))
        return static_cast<void*>(const_cast< EditMeasurePlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditMeasurePlugin*>(this));
    if (!strcmp(_clname, MESH_EDIT_INTERFACE_IID))
        return static_cast< MeshEditInterface*>(const_cast< EditMeasurePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditMeasurePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void EditMeasurePlugin::suspendEditToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
