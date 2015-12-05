/****************************************************************************
** Meta object code from reading C++ file 'maskImageWidget.h'
**
** Created: Mon Nov 23 17:01:23 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maskImageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maskImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui__maskImageWidget[] = {

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

 // slots: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x0a,
      48,   20,   20,   20, 0x08,
      71,   20,   20,   20, 0x08,
      86,   20,   20,   20, 0x08,
     104,   20,   20,   20, 0x08,
     130,   20,   20,   20, 0x08,
     153,   20,   20,   20, 0x08,
     175,   20,   20,   20, 0x08,
     186,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui__maskImageWidget[] = {
    "ui::maskImageWidget\0\0filename\0"
    "loadMask(QString)\0setCanvasPenWidth(int)\0"
    "setCanvasPen()\0setCanvasEraser()\0"
    "setGradientThreshold(int)\0"
    "setFixedThreshold(int)\0automaticMask(QPoint)\0"
    "loadMask()\0saveMask()\0"
};

void ui::maskImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        maskImageWidget *_t = static_cast<maskImageWidget *>(_o);
        switch (_id) {
        case 0: _t->loadMask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCanvasPenWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCanvasPen(); break;
        case 3: _t->setCanvasEraser(); break;
        case 4: _t->setGradientThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFixedThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->automaticMask((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->loadMask(); break;
        case 8: _t->saveMask(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui::maskImageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui::maskImageWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ui__maskImageWidget,
      qt_meta_data_ui__maskImageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui::maskImageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui::maskImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui::maskImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui__maskImageWidget))
        return static_cast<void*>(const_cast< maskImageWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int ui::maskImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
