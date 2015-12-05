/****************************************************************************
** Meta object code from reading C++ file 'layerDialog.h'
**
** Created: Mon Nov 23 16:54:37 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "layerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DecoratorParamsTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      34,   26,   26,   26, 0x0a,
      42,   26,   26,   26, 0x0a,
      50,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DecoratorParamsTreeWidget[] = {
    "DecoratorParamsTreeWidget\0\0save()\0"
    "reset()\0apply()\0load()\0"
};

void DecoratorParamsTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DecoratorParamsTreeWidget *_t = static_cast<DecoratorParamsTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->reset(); break;
        case 2: _t->apply(); break;
        case 3: _t->load(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DecoratorParamsTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DecoratorParamsTreeWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_DecoratorParamsTreeWidget,
      qt_meta_data_DecoratorParamsTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DecoratorParamsTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DecoratorParamsTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DecoratorParamsTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DecoratorParamsTreeWidget))
        return static_cast<void*>(const_cast< DecoratorParamsTreeWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int DecoratorParamsTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_LayerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   48,   12,   12, 0x0a,
      80,   12,   12,   12, 0x0a,
      96,   94,   12,   12, 0x0a,
     136,   94,   12,   12, 0x0a,
     174,   48,   12,   12, 0x0a,
     201,  197,   12,   12, 0x0a,
     230,  225,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LayerDialog[] = {
    "LayerDialog\0\0removeDecoratorRequested(QAction*)\0"
    "event\0keyPressEvent(QKeyEvent*)\0"
    "updateTable()\0,\0rasterItemClicked(QTreeWidgetItem*,int)\0"
    "meshItemClicked(QTreeWidgetItem*,int)\0"
    "showEvent(QShowEvent*)\0pos\0"
    "showContextMenu(QPoint)\0item\0"
    "adaptLayout(QTreeWidgetItem*)\0"
};

void LayerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LayerDialog *_t = static_cast<LayerDialog *>(_o);
        switch (_id) {
        case 0: _t->removeDecoratorRequested((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->updateTable(); break;
        case 3: _t->rasterItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->meshItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 6: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->adaptLayout((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LayerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LayerDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_LayerDialog,
      qt_meta_data_LayerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LayerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LayerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LayerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LayerDialog))
        return static_cast<void*>(const_cast< LayerDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int LayerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void LayerDialog::removeDecoratorRequested(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
