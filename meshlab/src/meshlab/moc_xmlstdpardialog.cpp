/****************************************************************************
** Meta object code from reading C++ file 'xmlstdpardialog.h'
**
** Created: Mon Nov 23 16:54:41 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "xmlstdpardialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmlstdpardialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLMeshLabWidget[] = {

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
      18,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMLMeshLabWidget[] = {
    "XMLMeshLabWidget\0\0parameterChanged()\0"
};

void XMLMeshLabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLMeshLabWidget *_t = static_cast<XMLMeshLabWidget *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLMeshLabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLMeshLabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XMLMeshLabWidget,
      qt_meta_data_XMLMeshLabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLMeshLabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLMeshLabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLMeshLabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLMeshLabWidget))
        return static_cast<void*>(const_cast< XMLMeshLabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int XMLMeshLabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMLMeshLabWidget::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMLCheckBoxWidget[] = {

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

static const char qt_meta_stringdata_XMLCheckBoxWidget[] = {
    "XMLCheckBoxWidget\0"
};

void XMLCheckBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLCheckBoxWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLCheckBoxWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLCheckBoxWidget,
      qt_meta_data_XMLCheckBoxWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLCheckBoxWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLCheckBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLCheckBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLCheckBoxWidget))
        return static_cast<void*>(const_cast< XMLCheckBoxWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLCheckBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMLEditWidget[] = {

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
      15,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditWidget[] = {
    "XMLEditWidget\0\0tooltipEvaluation()\0"
};

void XMLEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditWidget *_t = static_cast<XMLEditWidget *>(_o);
        switch (_id) {
        case 0: _t->tooltipEvaluation(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLEditWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLEditWidget,
      qt_meta_data_XMLEditWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditWidget))
        return static_cast<void*>(const_cast< XMLEditWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_XMLAbsWidget[] = {

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
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   35,   13,   13, 0x0a,
      70,   35,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLAbsWidget[] = {
    "XMLAbsWidget\0\0dialogParamChanged()\0"
    "newv\0on_absSB_valueChanged(double)\0"
    "on_percSB_valueChanged(double)\0"
};

void XMLAbsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLAbsWidget *_t = static_cast<XMLAbsWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->on_absSB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_percSB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLAbsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLAbsWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLAbsWidget,
      qt_meta_data_XMLAbsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLAbsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLAbsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLAbsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLAbsWidget))
        return static_cast<void*>(const_cast< XMLAbsWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLAbsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
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
void XMLAbsWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMLVec3Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      35,   14,   14,   14, 0x05,
      55,   14,   14,   14, 0x05,
      78,   14,   14,   14, 0x05,
     109,  100,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,   14,   14,   14, 0x0a,
     151,  144,   14,   14, 0x0a,
     191,  182,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLVec3Widget[] = {
    "XMLVec3Widget\0\0askViewDir(QString)\0"
    "askViewPos(QString)\0askSurfacePos(QString)\0"
    "askCameraPos(QString)\0name,exp\0"
    "setExp(QString,QString)\0getPoint()\0"
    "name,p\0setPoint(QString,vcg::Point3f)\0"
    "name,val\0setShot(QString,vcg::Shotf)\0"
};

void XMLVec3Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLVec3Widget *_t = static_cast<XMLVec3Widget *>(_o);
        switch (_id) {
        case 0: _t->askViewDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askViewPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->askSurfacePos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->askCameraPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setExp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->getPoint(); break;
        case 6: _t->setPoint((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const vcg::Point3f(*)>(_a[2]))); break;
        case 7: _t->setShot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const vcg::Shotf(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLVec3Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLVec3Widget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLVec3Widget,
      qt_meta_data_XMLVec3Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLVec3Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLVec3Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLVec3Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLVec3Widget))
        return static_cast<void*>(const_cast< XMLVec3Widget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLVec3Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void XMLVec3Widget::askViewDir(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMLVec3Widget::askViewPos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMLVec3Widget::askSurfacePos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMLVec3Widget::askCameraPos(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XMLVec3Widget::setExp(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_XMLColorWidget[] = {

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
      37,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMLColorWidget[] = {
    "XMLColorWidget\0\0dialogParamChanged()\0"
    "pickColor()\0"
};

void XMLColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLColorWidget *_t = static_cast<XMLColorWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->pickColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLColorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLColorWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLColorWidget,
      qt_meta_data_XMLColorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLColorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLColorWidget))
        return static_cast<void*>(const_cast< XMLColorWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
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
void XMLColorWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMLSliderWidget[] = {

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
      43,   38,   16,   16, 0x0a,
      57,   16,   16,   16, 0x0a,
      77,   68,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLSliderWidget[] = {
    "XMLSliderWidget\0\0dialogParamChanged()\0"
    "newv\0setValue(int)\0setValue()\0newValue\0"
    "setValue(float)\0"
};

void XMLSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLSliderWidget *_t = static_cast<XMLSliderWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue(); break;
        case 3: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLSliderWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLSliderWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLSliderWidget,
      qt_meta_data_XMLSliderWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLSliderWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLSliderWidget))
        return static_cast<void*>(const_cast< XMLSliderWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
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
void XMLSliderWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMLComboWidget[] = {

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
      16,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMLComboWidget[] = {
    "XMLComboWidget\0\0dialogParamChanged()\0"
};

void XMLComboWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLComboWidget *_t = static_cast<XMLComboWidget *>(_o);
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLComboWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLComboWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLComboWidget,
      qt_meta_data_XMLComboWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLComboWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLComboWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLComboWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLComboWidget))
        return static_cast<void*>(const_cast< XMLComboWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLComboWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
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
void XMLComboWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMLEnumWidget[] = {

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

static const char qt_meta_stringdata_XMLEnumWidget[] = {
    "XMLEnumWidget\0"
};

void XMLEnumWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLEnumWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEnumWidget::staticMetaObject = {
    { &XMLComboWidget::staticMetaObject, qt_meta_stringdata_XMLEnumWidget,
      qt_meta_data_XMLEnumWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEnumWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEnumWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEnumWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEnumWidget))
        return static_cast<void*>(const_cast< XMLEnumWidget*>(this));
    return XMLComboWidget::qt_metacast(_clname);
}

int XMLEnumWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLComboWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMLMeshWidget[] = {

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

static const char qt_meta_stringdata_XMLMeshWidget[] = {
    "XMLMeshWidget\0"
};

void XMLMeshWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLMeshWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLMeshWidget::staticMetaObject = {
    { &XMLEnumWidget::staticMetaObject, qt_meta_stringdata_XMLMeshWidget,
      qt_meta_data_XMLMeshWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLMeshWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLMeshWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLMeshWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLMeshWidget))
        return static_cast<void*>(const_cast< XMLMeshWidget*>(this));
    return XMLEnumWidget::qt_metacast(_clname);
}

int XMLMeshWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLEnumWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMLShotWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      38,   14,   14,   14, 0x05,
      59,   14,   14,   14, 0x05,
      82,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   14,   14,   14, 0x0a,
     122,  113,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLShotWidget[] = {
    "XMLShotWidget\0\0askRasterShot(QString)\0"
    "askMeshShot(QString)\0askViewerShot(QString)\0"
    "dialogParamChanged()\0getShot()\0name,val\0"
    "setShotValue(QString,vcg::Shotf)\0"
};

void XMLShotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLShotWidget *_t = static_cast<XMLShotWidget *>(_o);
        switch (_id) {
        case 0: _t->askRasterShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askMeshShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->askViewerShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->dialogParamChanged(); break;
        case 4: _t->getShot(); break;
        case 5: _t->setShotValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Shotf(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLShotWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLShotWidget::staticMetaObject = {
    { &XMLMeshLabWidget::staticMetaObject, qt_meta_stringdata_XMLShotWidget,
      qt_meta_data_XMLShotWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLShotWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLShotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLShotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLShotWidget))
        return static_cast<void*>(const_cast< XMLShotWidget*>(this));
    return XMLMeshLabWidget::qt_metacast(_clname);
}

int XMLShotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLMeshLabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void XMLShotWidget::askRasterShot(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMLShotWidget::askMeshShot(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMLShotWidget::askViewerShot(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMLShotWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_XMLStdParFrame[] = {

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
      16,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMLStdParFrame[] = {
    "XMLStdParFrame\0\0parameterChanged()\0"
};

void XMLStdParFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLStdParFrame *_t = static_cast<XMLStdParFrame *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMLStdParFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLStdParFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLStdParFrame,
      qt_meta_data_XMLStdParFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLStdParFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLStdParFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLStdParFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLStdParFrame))
        return static_cast<void*>(const_cast< XMLStdParFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLStdParFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMLStdParFrame::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_MeshLabXMLStdDialog[] = {

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
      42,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   20,   20,   20, 0x08,
      77,   20,   20,   20, 0x08,
      90,   20,   20,   20, 0x08,
     109,   20,   20,   20, 0x08,
     122,   20,   20,   20, 0x08,
     138,   20,   20,   20, 0x08,
     161,  153,   20,   20, 0x08,
     188,  184,   20,   20, 0x08,
     207,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MeshLabXMLStdDialog[] = {
    "MeshLabXMLStdDialog\0\0isinterruptrequested\0"
    "filterInterrupt(bool)\0applyClick()\0"
    "closeClick()\0resetExpressions()\0"
    "toggleHelp()\0togglePreview()\0"
    "applyDynamic()\0meshInd\0changeCurrentMesh(int)\0"
    "ext\0extendedView(bool)\0postFilterExecution()\0"
};

void MeshLabXMLStdDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshLabXMLStdDialog *_t = static_cast<MeshLabXMLStdDialog *>(_o);
        switch (_id) {
        case 0: _t->filterInterrupt((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->applyClick(); break;
        case 2: _t->closeClick(); break;
        case 3: _t->resetExpressions(); break;
        case 4: _t->toggleHelp(); break;
        case 5: _t->togglePreview(); break;
        case 6: _t->applyDynamic(); break;
        case 7: _t->changeCurrentMesh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->extendedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->postFilterExecution(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshLabXMLStdDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshLabXMLStdDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_MeshLabXMLStdDialog,
      qt_meta_data_MeshLabXMLStdDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshLabXMLStdDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshLabXMLStdDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshLabXMLStdDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshLabXMLStdDialog))
        return static_cast<void*>(const_cast< MeshLabXMLStdDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int MeshLabXMLStdDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void MeshLabXMLStdDialog::filterInterrupt(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
