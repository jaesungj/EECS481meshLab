/****************************************************************************
** Meta object code from reading C++ file 'edit_referencing.h'
**
** Created: Mon Nov 23 17:01:41 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_referencing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_referencing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditReferencingPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   22,   22,   22, 0x0a,
      60,   22,   22,   22, 0x0a,
      81,   22,   22,   22, 0x0a,
     100,   22,   22,   22, 0x0a,
     134,  122,   22,   22, 0x0a,
     177,   22,   22,   22, 0x0a,
     192,   22,   22,   22, 0x0a,
     205,   22,   22,   22, 0x0a,
     223,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditReferencingPlugin[] = {
    "EditReferencingPlugin\0\0askSurfacePos(QString)\0"
    "addNewPoint()\0deleteCurrentPoint()\0"
    "pickCurrentPoint()\0pickCurrentRefPoint()\0"
    "name,pPoint\0receivedSurfacePoint(QString,vcg::Point3f)\0"
    "loadFromFile()\0saveToFile()\0"
    "calculateMatrix()\0applyMatrix()\0"
};

void EditReferencingPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditReferencingPlugin *_t = static_cast<EditReferencingPlugin *>(_o);
        switch (_id) {
        case 0: _t->askSurfacePos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->addNewPoint(); break;
        case 2: _t->deleteCurrentPoint(); break;
        case 3: _t->pickCurrentPoint(); break;
        case 4: _t->pickCurrentRefPoint(); break;
        case 5: _t->receivedSurfacePoint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Point3f(*)>(_a[2]))); break;
        case 6: _t->loadFromFile(); break;
        case 7: _t->saveToFile(); break;
        case 8: _t->calculateMatrix(); break;
        case 9: _t->applyMatrix(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditReferencingPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditReferencingPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditReferencingPlugin,
      qt_meta_data_EditReferencingPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditReferencingPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditReferencingPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditReferencingPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditReferencingPlugin))
        return static_cast<void*>(const_cast< EditReferencingPlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditReferencingPlugin*>(this));
    if (!strcmp(_clname, MESH_EDIT_INTERFACE_IID))
        return static_cast< MeshEditInterface*>(const_cast< EditReferencingPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditReferencingPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void EditReferencingPlugin::askSurfacePos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
