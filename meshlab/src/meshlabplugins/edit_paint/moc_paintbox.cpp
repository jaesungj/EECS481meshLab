/****************************************************************************
** Meta object code from reading C++ file 'paintbox.h'
**
** Created: Mon Nov 23 16:59:17 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "paintbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Paintbox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      17,    9,    9,    9, 0x05,
      26,   24,    9,    9, 0x05,
      69,   47,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,  102,    9,    9, 0x0a,
     138,  102,    9,    9, 0x0a,
     167,  102,    9,    9, 0x0a,
     200,  102,    9,    9, 0x0a,
     231,  102,    9,    9, 0x0a,
     261,  102,    9,    9, 0x0a,
     290,  102,    9,    9, 0x0a,
     324,  102,    9,    9, 0x0a,
     360,  102,    9,    9, 0x0a,
     396,  102,    9,    9, 0x0a,
     429,  102,    9,    9, 0x0a,
     460,    9,    9,    9, 0x0a,
     485,    9,    9,    9, 0x0a,
     510,    9,    9,    9, 0x0a,
     538,    9,    9,    9, 0x0a,
     565,    9,    9,    9, 0x0a,
     603,    9,    9,    9, 0x0a,
     640,    9,    9,    9, 0x0a,
     673,    9,    9,    9, 0x0a,
     715,  711,    9,    9, 0x0a,
     761,  711,    9,    9, 0x0a,
     807,  711,    9,    9, 0x0a,
     841,  711,    9,    9, 0x0a,
     879,  875,    9,    9, 0x0a,
     909,  875,    9,    9, 0x0a,
     940,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Paintbox[] = {
    "Paintbox\0\0undo()\0redo()\0t\0"
    "typeChange(ToolType)\0size,opacity,hardness\0"
    "brushSettingsChange(int,int,int)\0"
    "checked\0on_pen_button_toggled(bool)\0"
    "on_fill_button_toggled(bool)\0"
    "on_gradient_button_toggled(bool)\0"
    "on_smooth_button_toggled(bool)\0"
    "on_clone_button_toggled(bool)\0"
    "on_pick_button_toggled(bool)\0"
    "on_mesh_pick_button_toggled(bool)\0"
    "on_mesh_smooth_button_toggled(bool)\0"
    "on_mesh_sculpt_button_toggled(bool)\0"
    "on_mesh_add_button_toggled(bool)\0"
    "on_perlin_button_toggled(bool)\0"
    "on_undo_button_clicked()\0"
    "on_redo_button_clicked()\0"
    "on_default_colors_clicked()\0"
    "on_switch_colors_clicked()\0"
    "on_brush_box_currentIndexChanged(int)\0"
    "on_hardness_slider_valueChanged(int)\0"
    "on_size_slider_valueChanged(int)\0"
    "on_clone_source_load_button_clicked()\0"
    "val\0on_mesh_displacement_slider_valueChanged(int)\0"
    "on_displacement_spin_box_valueChanged(double)\0"
    "on_noise_slider_valueChanged(int)\0"
    "on_noise_box_valueChanged(double)\0x,y\0"
    "setPixmapDelta(double,double)\0"
    "movePixmapDelta(double,double)\0"
    "resetPixmapDelta()\0"
};

void Paintbox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Paintbox *_t = static_cast<Paintbox *>(_o);
        switch (_id) {
        case 0: _t->undo(); break;
        case 1: _t->redo(); break;
        case 2: _t->typeChange((*reinterpret_cast< ToolType(*)>(_a[1]))); break;
        case 3: _t->brushSettingsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->on_pen_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_fill_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_gradient_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_smooth_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_clone_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_pick_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_mesh_pick_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_mesh_smooth_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_mesh_sculpt_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_mesh_add_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_perlin_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_undo_button_clicked(); break;
        case 16: _t->on_redo_button_clicked(); break;
        case 17: _t->on_default_colors_clicked(); break;
        case 18: _t->on_switch_colors_clicked(); break;
        case 19: _t->on_brush_box_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_hardness_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_size_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_clone_source_load_button_clicked(); break;
        case 23: _t->on_mesh_displacement_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_displacement_spin_box_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->on_noise_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_noise_box_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->setPixmapDelta((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 28: _t->movePixmapDelta((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 29: _t->resetPixmapDelta(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Paintbox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Paintbox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Paintbox,
      qt_meta_data_Paintbox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Paintbox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Paintbox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Paintbox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Paintbox))
        return static_cast<void*>(const_cast< Paintbox*>(this));
    return QWidget::qt_metacast(_clname);
}

int Paintbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Paintbox::undo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Paintbox::redo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Paintbox::typeChange(ToolType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Paintbox::brushSettingsChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
