/****************************************************************************
** Meta object code from reading C++ file 'multiViewer_Container.h'
**
** Created: Mon Nov 23 16:54:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multiViewer_Container.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiViewer_Container.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Splitter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Splitter[] = {
    "Splitter\0"
};

void Splitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Splitter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Splitter::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_Splitter,
      qt_meta_data_Splitter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Splitter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Splitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Splitter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Splitter))
        return static_cast<void*>(const_cast< Splitter*>(this));
    return QSplitter::qt_metacast(_clname);
}

int Splitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SplitterHandle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_SplitterHandle[] = {
    "SplitterHandle\0"
};

void SplitterHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SplitterHandle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SplitterHandle::staticMetaObject = {
    { &QSplitterHandle::staticMetaObject, qt_meta_stringdata_SplitterHandle,
      qt_meta_data_SplitterHandle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SplitterHandle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SplitterHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SplitterHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplitterHandle))
        return static_cast<void*>(const_cast< SplitterHandle*>(this));
    return QSplitterHandle::qt_metacast(_clname);
}

int SplitterHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitterHandle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MultiViewer_Container[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   47,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MultiViewer_Container[] = {
    "MultiViewer_Container\0\0updateMainWindowMenus()\0"
    "current\0updateCurrent(int)\0"
};

void MultiViewer_Container::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiViewer_Container *_t = static_cast<MultiViewer_Container *>(_o);
        switch (_id) {
        case 0: _t->updateMainWindowMenus(); break;
        case 1: _t->updateCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MultiViewer_Container::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MultiViewer_Container::staticMetaObject = {
    { &Splitter::staticMetaObject, qt_meta_stringdata_MultiViewer_Container,
      qt_meta_data_MultiViewer_Container, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiViewer_Container::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiViewer_Container::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiViewer_Container::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiViewer_Container))
        return static_cast<void*>(const_cast< MultiViewer_Container*>(this));
    return Splitter::qt_metacast(_clname);
}

int MultiViewer_Container::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Splitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MultiViewer_Container::updateMainWindowMenus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
