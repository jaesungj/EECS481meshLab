/****************************************************************************
** Meta object code from reading C++ file 'v3dImportDialog.h'
**
** Created: Mon Nov 23 17:01:21 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "v3dImportDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3dImportDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_v3dImportDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   16,   16,   16, 0x0a,
      58,   53,   16,   16, 0x0a,
     109,   16,   16,   16, 0x0a,
     152,   53,   16,   16, 0x0a,
     209,   16,   16,   16, 0x0a,
     232,   16,   16,   16, 0x08,
     270,   16,   16,   16, 0x08,
     306,   16,   16,   16, 0x08,
     343,   16,   16,   16, 0x08,
     368,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_v3dImportDialog[] = {
    "v3dImportDialog\0\0closing()\0"
    "on_selectButton_clicked()\0item\0"
    "on_imageTableWidget_itemClicked(QTableWidgetItem*)\0"
    "on_imageTableWidget_itemSelectionChanged()\0"
    "on_imageTableWidget_itemDoubleClicked(QTableWidgetItem*)\0"
    "on_plyButton_clicked()\0"
    "on_subsampleSpinBox_valueChanged(int)\0"
    "on_minCountSlider_valueChanged(int)\0"
    "on_minCountSpinBox_valueChanged(int)\0"
    "dilationSizeChanged(int)\0"
    "erosionSizeChanged(int)\0"
};

void v3dImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        v3dImportDialog *_t = static_cast<v3dImportDialog *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_selectButton_clicked(); break;
        case 2: _t->on_imageTableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_imageTableWidget_itemSelectionChanged(); break;
        case 4: _t->on_imageTableWidget_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_plyButton_clicked(); break;
        case 6: _t->on_subsampleSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_minCountSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_minCountSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->dilationSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->erosionSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData v3dImportDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject v3dImportDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_v3dImportDialog,
      qt_meta_data_v3dImportDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &v3dImportDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *v3dImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *v3dImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_v3dImportDialog))
        return static_cast<void*>(const_cast< v3dImportDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int v3dImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void v3dImportDialog::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
