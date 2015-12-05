/****************************************************************************
** Meta object code from reading C++ file 'meshmodel.h'
**
** Created: Mon Nov 23 16:53:14 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "meshmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meshmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,
      44,   13,   13,   13, 0x05,
      67,   13,   13,   13, 0x05,
      93,   84,   13,   13, 0x05,
     119,   14,   13,   13, 0x05,
     136,   13,   13,   13, 0x05,
     155,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MeshDocument[] = {
    "MeshDocument\0\0index\0currentMeshChanged(int)\0"
    "meshDocumentModified()\0meshSetChanged()\0"
    "index,rm\0meshAdded(int,RenderMode)\0"
    "meshRemoved(int)\0rasterSetChanged()\0"
    "documentUpdated()\0"
};

void MeshDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshDocument *_t = static_cast<MeshDocument *>(_o);
        switch (_id) {
        case 0: _t->currentMeshChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->meshDocumentModified(); break;
        case 2: _t->meshSetChanged(); break;
        case 3: _t->meshAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RenderMode(*)>(_a[2]))); break;
        case 4: _t->meshRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->rasterSetChanged(); break;
        case 6: _t->documentUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeshDocument,
      qt_meta_data_MeshDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshDocument))
        return static_cast<void*>(const_cast< MeshDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int MeshDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MeshDocument::currentMeshChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MeshDocument::meshDocumentModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MeshDocument::meshSetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MeshDocument::meshAdded(int _t1, RenderMode _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MeshDocument::meshRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MeshDocument::rasterSetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MeshDocument::documentUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
