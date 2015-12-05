/****************************************************************************
** Meta object code from reading C++ file 'savemaskexporter.h'
**
** Created: Mon Nov 23 16:54:35 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "savemaskexporter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savemaskexporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SaveMaskExporterDialog[] = {

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
      24,   23,   23,   23, 0x0a,
      56,   23,   23,   23, 0x0a,
      71,   23,   23,   23, 0x0a,
      90,   23,   23,   23, 0x0a,
     110,   23,   23,   23, 0x0a,
     137,   23,   23,   23, 0x0a,
     163,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SaveMaskExporterDialog[] = {
    "SaveMaskExporterDialog\0\0"
    "on_check_help_stateChanged(int)\0"
    "SlotOkButton()\0SlotCancelButton()\0"
    "SlotRenameTexture()\0SlotSelectionTextureName()\0"
    "SlotSelectionNoneButton()\0"
    "SlotSelectionAllButton()\0"
};

void SaveMaskExporterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SaveMaskExporterDialog *_t = static_cast<SaveMaskExporterDialog *>(_o);
        switch (_id) {
        case 0: _t->on_check_help_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SlotOkButton(); break;
        case 2: _t->SlotCancelButton(); break;
        case 3: _t->SlotRenameTexture(); break;
        case 4: _t->SlotSelectionTextureName(); break;
        case 5: _t->SlotSelectionNoneButton(); break;
        case 6: _t->SlotSelectionAllButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SaveMaskExporterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SaveMaskExporterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SaveMaskExporterDialog,
      qt_meta_data_SaveMaskExporterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SaveMaskExporterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SaveMaskExporterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SaveMaskExporterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SaveMaskExporterDialog))
        return static_cast<void*>(const_cast< SaveMaskExporterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SaveMaskExporterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
