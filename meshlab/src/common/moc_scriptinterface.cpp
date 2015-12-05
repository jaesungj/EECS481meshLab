/****************************************************************************
** Meta object code from reading C++ file 'scriptinterface.h'
**
** Created: Mon Nov 23 16:53:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scriptinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCGVertexSI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      28,   12,   13,   12, 0x02,
      47,   12,   35,   12, 0x02,
      64,   58,   12,   12, 0x02,
      91,   89,   12,   12, 0x02,
     112,   89,   12,   12, 0x02,
     134,   12,   13,   12, 0x02,
     141,   12,   35,   12, 0x02,
     153,   89,   12,   12, 0x02,
     176,   58,   12,   12, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_VCGVertexSI[] = {
    "VCGVertexSI\0\0QVector<float>\0getP()\0"
    "VCGPoint3SI\0getPoint()\0x,y,z\0"
    "setPC(float,float,float)\0p\0"
    "setP(QVector<float>)\0setPoint(VCGPoint3SI)\0"
    "getN()\0getNormal()\0setNormal(VCGPoint3SI)\0"
    "setN(float,float,float)\0"
};

void VCGVertexSI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VCGVertexSI *_t = static_cast<VCGVertexSI *>(_o);
        switch (_id) {
        case 0: { QVector<float> _r = _t->getP();
            if (_a[0]) *reinterpret_cast< QVector<float>*>(_a[0]) = _r; }  break;
        case 1: { VCGPoint3SI _r = _t->getPoint();
            if (_a[0]) *reinterpret_cast< VCGPoint3SI*>(_a[0]) = _r; }  break;
        case 2: _t->setPC((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 3: _t->setP((*reinterpret_cast< const QVector<float>(*)>(_a[1]))); break;
        case 4: _t->setPoint((*reinterpret_cast< const VCGPoint3SI(*)>(_a[1]))); break;
        case 5: { QVector<float> _r = _t->getN();
            if (_a[0]) *reinterpret_cast< QVector<float>*>(_a[0]) = _r; }  break;
        case 6: { VCGPoint3SI _r = _t->getNormal();
            if (_a[0]) *reinterpret_cast< VCGPoint3SI*>(_a[0]) = _r; }  break;
        case 7: _t->setNormal((*reinterpret_cast< const VCGPoint3SI(*)>(_a[1]))); break;
        case 8: _t->setN((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VCGVertexSI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VCGVertexSI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VCGVertexSI,
      qt_meta_data_VCGVertexSI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCGVertexSI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCGVertexSI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCGVertexSI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCGVertexSI))
        return static_cast<void*>(const_cast< VCGVertexSI*>(this));
    return QObject::qt_metacast(_clname);
}

int VCGVertexSI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_MeshDocumentSI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      36,   29,   16,   15, 0x02,
      54,   49,   16,   15, 0x02,
      77,   15,   16,   15, 0x02,
      91,   15,   87,   15, 0x02,
     103,   29,   87,   15, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MeshDocumentSI[] = {
    "MeshDocumentSI\0\0MeshModelSI*\0meshId\0"
    "getMesh(int)\0name\0getMeshByName(QString)\0"
    "current()\0int\0currentId()\0setCurrent(int)\0"
};

void MeshDocumentSI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshDocumentSI *_t = static_cast<MeshDocumentSI *>(_o);
        switch (_id) {
        case 0: { MeshModelSI* _r = _t->getMesh((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MeshModelSI**>(_a[0]) = _r; }  break;
        case 1: { MeshModelSI* _r = _t->getMeshByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MeshModelSI**>(_a[0]) = _r; }  break;
        case 2: { MeshModelSI* _r = _t->current();
            if (_a[0]) *reinterpret_cast< MeshModelSI**>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->currentId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->setCurrent((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshDocumentSI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshDocumentSI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeshDocumentSI,
      qt_meta_data_MeshDocumentSI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshDocumentSI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshDocumentSI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshDocumentSI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshDocumentSI))
        return static_cast<void*>(const_cast< MeshDocumentSI*>(this));
    return QObject::qt_metacast(_clname);
}

int MeshDocumentSI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_MeshModelSI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      17,   12,   13,   12, 0x02,
      28,   12,   22,   12, 0x02,
      54,   12,   39,   12, 0x02,
      64,   12,   39,   12, 0x02,
      74,   12,   22,   12, 0x02,
      89,   12,   22,   12, 0x02,
     104,   12,   22,   12, 0x02,
     119,   12,   22,   12, 0x02,
     156,   12,  134,   12, 0x02,
     176,   12,  163,   12, 0x02,
     194,   12,  163,   12, 0x02,
     216,  213,   12,   12, 0x02,
     249,  246,   12,   12, 0x02,
     280,   12,   13,   12, 0x02,
     285,   12,   13,   12, 0x02,
     307,  303,  290,   12, 0x02,
     322,   12,  314,   12, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MeshModelSI[] = {
    "MeshModelSI\0\0int\0id()\0float\0bboxDiag()\0"
    "QVector<float>\0bboxMin()\0bboxMax()\0"
    "computeMinVQ()\0computeMaxVQ()\0"
    "computeMinFQ()\0computeMaxFQ()\0"
    "QVector<VCGVertexSI*>\0vert()\0Point3Vector\0"
    "getVertPosArray()\0getVertNormArray()\0"
    "pa\0setVertPosArray(Point3Vector)\0na\0"
    "setVertNormArray(Point3Vector)\0vn()\0"
    "fn()\0VCGVertexSI*\0ind\0v(int)\0ShotSI*\0"
    "shot()\0"
};

void MeshModelSI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshModelSI *_t = static_cast<MeshModelSI *>(_o);
        switch (_id) {
        case 0: { int _r = _t->id();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { float _r = _t->bboxDiag();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 2: { QVector<float> _r = _t->bboxMin();
            if (_a[0]) *reinterpret_cast< QVector<float>*>(_a[0]) = _r; }  break;
        case 3: { QVector<float> _r = _t->bboxMax();
            if (_a[0]) *reinterpret_cast< QVector<float>*>(_a[0]) = _r; }  break;
        case 4: { float _r = _t->computeMinVQ();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->computeMaxVQ();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->computeMinFQ();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 7: { float _r = _t->computeMaxFQ();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: { QVector<VCGVertexSI*> _r = _t->vert();
            if (_a[0]) *reinterpret_cast< QVector<VCGVertexSI*>*>(_a[0]) = _r; }  break;
        case 9: { Point3Vector _r = _t->getVertPosArray();
            if (_a[0]) *reinterpret_cast< Point3Vector*>(_a[0]) = _r; }  break;
        case 10: { Point3Vector _r = _t->getVertNormArray();
            if (_a[0]) *reinterpret_cast< Point3Vector*>(_a[0]) = _r; }  break;
        case 11: _t->setVertPosArray((*reinterpret_cast< const Point3Vector(*)>(_a[1]))); break;
        case 12: _t->setVertNormArray((*reinterpret_cast< const Point3Vector(*)>(_a[1]))); break;
        case 13: { int _r = _t->vn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->fn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { VCGVertexSI* _r = _t->v((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< VCGVertexSI**>(_a[0]) = _r; }  break;
        case 16: { ShotSI* _r = _t->shot();
            if (_a[0]) *reinterpret_cast< ShotSI**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshModelSI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshModelSI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeshModelSI,
      qt_meta_data_MeshModelSI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshModelSI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshModelSI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshModelSI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshModelSI))
        return static_cast<void*>(const_cast< MeshModelSI*>(this));
    return QObject::qt_metacast(_clname);
}

int MeshModelSI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_Env[] = {

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

 // methods: signature, parameters, type, tag, flags
      12,    5,    4,    4, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Env[] = {
    "Env\0\0nm,exp\0insertExpressionBinding(QString,QString)\0"
};

void Env::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Env *_t = static_cast<Env *>(_o);
        switch (_id) {
        case 0: _t->insertExpressionBinding((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Env::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Env::staticMetaObject = {
    { &QScriptEngine::staticMetaObject, qt_meta_stringdata_Env,
      qt_meta_data_Env, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Env::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Env::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Env::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Env))
        return static_cast<void*>(const_cast< Env*>(this));
    return QScriptEngine::qt_metacast(_clname);
}

int Env::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ShotSI[] = {

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

 // methods: signature, parameters, type, tag, flags
      16,    7,    8,    7, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_ShotSI[] = {
    "ShotSI\0\0ShotSI*\0itSelf()\0"
};

void ShotSI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShotSI *_t = static_cast<ShotSI *>(_o);
        switch (_id) {
        case 0: { ShotSI* _r = _t->itSelf();
            if (_a[0]) *reinterpret_cast< ShotSI**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShotSI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShotSI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ShotSI,
      qt_meta_data_ShotSI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShotSI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShotSI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShotSI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShotSI))
        return static_cast<void*>(const_cast< ShotSI*>(this));
    return QObject::qt_metacast(_clname);
}

int ShotSI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
