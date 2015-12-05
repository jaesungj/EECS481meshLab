/****************************************************************************
** Meta object code from reading C++ file 'changetexturename.h'
**
** Created: Mon Nov 23 16:54:37 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "changetexturename.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changetexturename.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeTextureNameDialog[] = {

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
      25,   24,   24,   24, 0x08,
      40,   24,   24,   24, 0x08,
      59,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChangeTextureNameDialog[] = {
    "ChangeTextureNameDialog\0\0SlotOkButton()\0"
    "SlotCancelButton()\0SlotSearchTextureName()\0"
};

void ChangeTextureNameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChangeTextureNameDialog *_t = static_cast<ChangeTextureNameDialog *>(_o);
        switch (_id) {
        case 0: _t->SlotOkButton(); break;
        case 1: _t->SlotCancelButton(); break;
        case 2: _t->SlotSearchTextureName(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChangeTextureNameDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChangeTextureNameDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeTextureNameDialog,
      qt_meta_data_ChangeTextureNameDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChangeTextureNameDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChangeTextureNameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChangeTextureNameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeTextureNameDialog))
        return static_cast<void*>(const_cast< ChangeTextureNameDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangeTextureNameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
