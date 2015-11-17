/****************************************************************************
** Meta object code from reading C++ file 'stdpardialog.h'
**
** Created: Tue Nov 17 15:14:48 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../meshlab/stdpardialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdpardialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshLabWidget[] = {

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
      15,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MeshLabWidget[] = {
    "MeshLabWidget\0\0parameterChanged()\0"
};

void MeshLabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshLabWidget *_t = static_cast<MeshLabWidget *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshLabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshLabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MeshLabWidget,
      qt_meta_data_MeshLabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshLabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshLabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshLabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshLabWidget))
        return static_cast<void*>(const_cast< MeshLabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MeshLabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void MeshLabWidget::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_LineEditWidget[] = {

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
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LineEditWidget[] = {
    "LineEditWidget\0\0lineEditChanged()\0"
    "changeChecker()\0"
};

void LineEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LineEditWidget *_t = static_cast<LineEditWidget *>(_o);
        switch (_id) {
        case 0: _t->lineEditChanged(); break;
        case 1: _t->changeChecker(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LineEditWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LineEditWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_LineEditWidget,
      qt_meta_data_LineEditWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineEditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditWidget))
        return static_cast<void*>(const_cast< LineEditWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int LineEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void LineEditWidget::lineEditChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ColorWidget[] = {

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
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorWidget[] = {
    "ColorWidget\0\0dialogParamChanged()\0"
    "pickColor()\0"
};

void ColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorWidget *_t = static_cast<ColorWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->pickColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ColorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_ColorWidget,
      qt_meta_data_ColorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorWidget))
        return static_cast<void*>(const_cast< ColorWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int ColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void ColorWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_AbsPercWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   36,   14,   14, 0x0a,
      71,   36,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbsPercWidget[] = {
    "AbsPercWidget\0\0dialogParamChanged()\0"
    "newv\0on_absSB_valueChanged(double)\0"
    "on_percSB_valueChanged(double)\0"
};

void AbsPercWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbsPercWidget *_t = static_cast<AbsPercWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->on_absSB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_percSB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbsPercWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbsPercWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_AbsPercWidget,
      qt_meta_data_AbsPercWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbsPercWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbsPercWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbsPercWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbsPercWidget))
        return static_cast<void*>(const_cast< AbsPercWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int AbsPercWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AbsPercWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Point3fWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      35,   14,   14,   14, 0x05,
      55,   14,   14,   14, 0x05,
      78,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   14,   14,   14, 0x0a,
     120,  111,   14,   14, 0x0a,
     151,  111,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Point3fWidget[] = {
    "Point3fWidget\0\0askViewDir(QString)\0"
    "askViewPos(QString)\0askSurfacePos(QString)\0"
    "askCameraPos(QString)\0getPoint()\0"
    "name,val\0setValue(QString,vcg::Point3f)\0"
    "setShotValue(QString,vcg::Shotf)\0"
};

void Point3fWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Point3fWidget *_t = static_cast<Point3fWidget *>(_o);
        switch (_id) {
        case 0: _t->askViewDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askViewPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->askSurfacePos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->askCameraPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->getPoint(); break;
        case 5: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Point3f(*)>(_a[2]))); break;
        case 6: _t->setShotValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Shotf(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Point3fWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Point3fWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_Point3fWidget,
      qt_meta_data_Point3fWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Point3fWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Point3fWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Point3fWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Point3fWidget))
        return static_cast<void*>(const_cast< Point3fWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int Point3fWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void Point3fWidget::askViewDir(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Point3fWidget::askViewPos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Point3fWidget::askSurfacePos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Point3fWidget::askCameraPos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_Matrix44fWidget[] = {

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
      49,   40,   16,   16, 0x0a,
      82,   16,   16,   16, 0x0a,
      94,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Matrix44fWidget[] = {
    "Matrix44fWidget\0\0askMeshMatrix(QString)\0"
    "name,val\0setValue(QString,vcg::Matrix44f)\0"
    "getMatrix()\0pasteMatrix()\0"
};

void Matrix44fWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Matrix44fWidget *_t = static_cast<Matrix44fWidget *>(_o);
        switch (_id) {
        case 0: _t->askMeshMatrix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Matrix44f(*)>(_a[2]))); break;
        case 2: _t->getMatrix(); break;
        case 3: _t->pasteMatrix(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Matrix44fWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Matrix44fWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_Matrix44fWidget,
      qt_meta_data_Matrix44fWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Matrix44fWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Matrix44fWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Matrix44fWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Matrix44fWidget))
        return static_cast<void*>(const_cast< Matrix44fWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int Matrix44fWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void Matrix44fWidget::askMeshMatrix(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ShotfWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      36,   12,   12,   12, 0x05,
      57,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   12,   12,   12, 0x0a,
      99,   90,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ShotfWidget[] = {
    "ShotfWidget\0\0askRasterShot(QString)\0"
    "askMeshShot(QString)\0askViewerShot(QString)\0"
    "getShot()\0name,val\0setShotValue(QString,vcg::Shotf)\0"
};

void ShotfWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShotfWidget *_t = static_cast<ShotfWidget *>(_o);
        switch (_id) {
        case 0: _t->askRasterShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askMeshShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->askViewerShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getShot(); break;
        case 4: _t->setShotValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Shotf(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShotfWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShotfWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_ShotfWidget,
      qt_meta_data_ShotfWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShotfWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShotfWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShotfWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShotfWidget))
        return static_cast<void*>(const_cast< ShotfWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int ShotfWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ShotfWidget::askRasterShot(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShotfWidget::askMeshShot(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ShotfWidget::askViewerShot(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_DynamicFloatWidget[] = {

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
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   41,   19,   19, 0x0a,
      60,   19,   19,   19, 0x0a,
      80,   71,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DynamicFloatWidget[] = {
    "DynamicFloatWidget\0\0dialogParamChanged()\0"
    "newv\0setValue(int)\0setValue()\0newValue\0"
    "setValue(float)\0"
};

void DynamicFloatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DynamicFloatWidget *_t = static_cast<DynamicFloatWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue(); break;
        case 3: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DynamicFloatWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DynamicFloatWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_DynamicFloatWidget,
      qt_meta_data_DynamicFloatWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DynamicFloatWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DynamicFloatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DynamicFloatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicFloatWidget))
        return static_cast<void*>(const_cast< DynamicFloatWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int DynamicFloatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void DynamicFloatWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ComboWidget[] = {

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
      13,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ComboWidget[] = {
    "ComboWidget\0\0dialogParamChanged()\0"
};

void ComboWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComboWidget *_t = static_cast<ComboWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ComboWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComboWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_ComboWidget,
      qt_meta_data_ComboWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComboWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComboWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComboWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComboWidget))
        return static_cast<void*>(const_cast< ComboWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int ComboWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void ComboWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_EnumWidget[] = {

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

static const char qt_meta_stringdata_EnumWidget[] = {
    "EnumWidget\0"
};

void EnumWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EnumWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EnumWidget::staticMetaObject = {
    { &ComboWidget::staticMetaObject, qt_meta_stringdata_EnumWidget,
      qt_meta_data_EnumWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EnumWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EnumWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EnumWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EnumWidget))
        return static_cast<void*>(const_cast< EnumWidget*>(this));
    return ComboWidget::qt_metacast(_clname);
}

int EnumWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IOFileWidget[] = {

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
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_IOFileWidget[] = {
    "IOFileWidget\0\0dialogParamChanged()\0"
    "selectFile()\0"
};

void IOFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IOFileWidget *_t = static_cast<IOFileWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->selectFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IOFileWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IOFileWidget::staticMetaObject = {
    { &MeshLabWidget::staticMetaObject, qt_meta_stringdata_IOFileWidget,
      qt_meta_data_IOFileWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IOFileWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IOFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IOFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IOFileWidget))
        return static_cast<void*>(const_cast< IOFileWidget*>(this));
    return MeshLabWidget::qt_metacast(_clname);
}

int IOFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MeshLabWidget::qt_metacall(_c, _id, _a);
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
void IOFileWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SaveFileWidget[] = {

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
      16,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SaveFileWidget[] = {
    "SaveFileWidget\0\0selectFile()\0"
};

void SaveFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SaveFileWidget *_t = static_cast<SaveFileWidget *>(_o);
        switch (_id) {
        case 0: _t->selectFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SaveFileWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SaveFileWidget::staticMetaObject = {
    { &IOFileWidget::staticMetaObject, qt_meta_stringdata_SaveFileWidget,
      qt_meta_data_SaveFileWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SaveFileWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SaveFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SaveFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SaveFileWidget))
        return static_cast<void*>(const_cast< SaveFileWidget*>(this));
    return IOFileWidget::qt_metacast(_clname);
}

int SaveFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOFileWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_OpenFileWidget[] = {

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
      16,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OpenFileWidget[] = {
    "OpenFileWidget\0\0selectFile()\0"
};

void OpenFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenFileWidget *_t = static_cast<OpenFileWidget *>(_o);
        switch (_id) {
        case 0: _t->selectFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OpenFileWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenFileWidget::staticMetaObject = {
    { &IOFileWidget::staticMetaObject, qt_meta_stringdata_OpenFileWidget,
      qt_meta_data_OpenFileWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenFileWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenFileWidget))
        return static_cast<void*>(const_cast< OpenFileWidget*>(this));
    return IOFileWidget::qt_metacast(_clname);
}

int OpenFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOFileWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_StdParFrame[] = {

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
      13,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_StdParFrame[] = {
    "StdParFrame\0\0parameterChanged()\0"
};

void StdParFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StdParFrame *_t = static_cast<StdParFrame *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StdParFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StdParFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_StdParFrame,
      qt_meta_data_StdParFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StdParFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StdParFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StdParFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StdParFrame))
        return static_cast<void*>(const_cast< StdParFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int StdParFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void StdParFrame::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_GenericParamDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      32,   19,   19,   19, 0x0a,
      45,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GenericParamDialog[] = {
    "GenericParamDialog\0\0getAccept()\0"
    "toggleHelp()\0resetValues()\0"
};

void GenericParamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GenericParamDialog *_t = static_cast<GenericParamDialog *>(_o);
        switch (_id) {
        case 0: _t->getAccept(); break;
        case 1: _t->toggleHelp(); break;
        case 2: _t->resetValues(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GenericParamDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GenericParamDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GenericParamDialog,
      qt_meta_data_GenericParamDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenericParamDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenericParamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenericParamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenericParamDialog))
        return static_cast<void*>(const_cast< GenericParamDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GenericParamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_MeshlabStdDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      31,   17,   17,   17, 0x08,
      44,   17,   17,   17, 0x08,
      58,   17,   17,   17, 0x08,
      71,   17,   17,   17, 0x08,
      87,   17,   17,   17, 0x08,
     110,  102,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MeshlabStdDialog[] = {
    "MeshlabStdDialog\0\0closeClick()\0"
    "applyClick()\0resetValues()\0toggleHelp()\0"
    "togglePreview()\0applyDynamic()\0meshInd\0"
    "changeCurrentMesh(int)\0"
};

void MeshlabStdDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshlabStdDialog *_t = static_cast<MeshlabStdDialog *>(_o);
        switch (_id) {
        case 0: _t->closeClick(); break;
        case 1: _t->applyClick(); break;
        case 2: _t->resetValues(); break;
        case 3: _t->toggleHelp(); break;
        case 4: _t->togglePreview(); break;
        case 5: _t->applyDynamic(); break;
        case 6: _t->changeCurrentMesh((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshlabStdDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshlabStdDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_MeshlabStdDialog,
      qt_meta_data_MeshlabStdDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshlabStdDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshlabStdDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshlabStdDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshlabStdDialog))
        return static_cast<void*>(const_cast< MeshlabStdDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int MeshlabStdDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
