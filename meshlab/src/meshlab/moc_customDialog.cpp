/****************************************************************************
** Meta object code from reading C++ file 'customDialog.h'
**
** Created: Mon Nov 23 16:54:30 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "customDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   14,   14,   14, 0x0a,
      43,   14,   14,   14, 0x0a,
      51,   14,   14,   14, 0x0a,
      59,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SettingDialog[] = {
    "SettingDialog\0\0applySettingSignal()\0"
    "save()\0reset()\0apply()\0load()\0"
};

void SettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingDialog *_t = static_cast<SettingDialog *>(_o);
        switch (_id) {
        case 0: _t->applySettingSignal(); break;
        case 1: _t->save(); break;
        case 2: _t->reset(); break;
        case 3: _t->apply(); break;
        case 4: _t->load(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SettingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingDialog,
      qt_meta_data_SettingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingDialog))
        return static_cast<void*>(const_cast< SettingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void SettingDialog::applySettingSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_CustomDialog[] = {

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
      39,   35,   13,   13, 0x0a,
      72,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CustomDialog[] = {
    "CustomDialog\0\0applyCustomSetting()\0"
    "itm\0openSubDialog(QTableWidgetItem*)\0"
    "updateSettings()\0"
};

void CustomDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CustomDialog *_t = static_cast<CustomDialog *>(_o);
        switch (_id) {
        case 0: _t->applyCustomSetting(); break;
        case 1: _t->openSubDialog((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->updateSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CustomDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CustomDialog,
      qt_meta_data_CustomDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomDialog))
        return static_cast<void*>(const_cast< CustomDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CustomDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CustomDialog::applyCustomSetting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
