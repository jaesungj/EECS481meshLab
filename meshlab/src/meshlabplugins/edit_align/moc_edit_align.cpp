/****************************************************************************
** Meta object code from reading C++ file 'edit_align.h'
**
** Created: Mon Nov 23 16:58:21 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_align.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_align.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditAlignPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   16,   16,   16, 0x0a,
      47,   16,   16,   16, 0x0a,
      66,   16,   16,   16, 0x0a,
      77,   16,   16,   16, 0x0a,
      95,   16,   16,   16, 0x0a,
     110,   16,   16,   16, 0x0a,
     123,   16,   16,   16, 0x0a,
     139,   16,   16,   16, 0x0a,
     152,   16,   16,   16, 0x0a,
     168,   16,   16,   16, 0x0a,
     188,   16,   16,   16, 0x0a,
     202,   16,   16,   16, 0x0a,
     235,  224,   16,   16, 0x0a,
     256,  254,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditAlignPlugin[] = {
    "EditAlignPlugin\0\0suspendEditToggle()\0"
    "process()\0recalcCurrentArc()\0glueHere()\0"
    "glueHereVisible()\0selectBadArc()\0"
    "glueManual()\0glueByPicking()\0alignParam()\0"
    "meshTreeParam()\0alignParamCurrent()\0"
    "setBaseMesh()\0hideRevealGluedMesh()\0"
    "colorstate\0toggledColors(int)\0A\0"
    "DrawArc(vcg::AlignPair::Result*)\0"
};

void EditAlignPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditAlignPlugin *_t = static_cast<EditAlignPlugin *>(_o);
        switch (_id) {
        case 0: _t->suspendEditToggle(); break;
        case 1: _t->process(); break;
        case 2: _t->recalcCurrentArc(); break;
        case 3: _t->glueHere(); break;
        case 4: _t->glueHereVisible(); break;
        case 5: _t->selectBadArc(); break;
        case 6: _t->glueManual(); break;
        case 7: _t->glueByPicking(); break;
        case 8: _t->alignParam(); break;
        case 9: _t->meshTreeParam(); break;
        case 10: _t->alignParamCurrent(); break;
        case 11: _t->setBaseMesh(); break;
        case 12: _t->hideRevealGluedMesh(); break;
        case 13: _t->toggledColors((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->DrawArc((*reinterpret_cast< vcg::AlignPair::Result*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditAlignPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditAlignPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditAlignPlugin,
      qt_meta_data_EditAlignPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditAlignPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditAlignPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditAlignPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditAlignPlugin))
        return static_cast<void*>(const_cast< EditAlignPlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditAlignPlugin*>(this));
    if (!strcmp(_clname, MESH_EDIT_INTERFACE_IID))
        return static_cast< MeshEditInterface*>(const_cast< EditAlignPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditAlignPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void EditAlignPlugin::suspendEditToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
