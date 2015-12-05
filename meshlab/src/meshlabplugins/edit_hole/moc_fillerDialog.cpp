/****************************************************************************
** Meta object code from reading C++ file 'fillerDialog.h'
**
** Created: Mon Nov 23 16:59:01 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fillerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fillerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FillerDialog[] = {

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
      34,   28,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FillerDialog[] = {
    "FillerDialog\0\0SGN_Closing()\0exist\0"
    "SLOT_ExistBridge(bool)\0"
};

void FillerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FillerDialog *_t = static_cast<FillerDialog *>(_o);
        switch (_id) {
        case 0: _t->SGN_Closing(); break;
        case 1: _t->SLOT_ExistBridge((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FillerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FillerDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_FillerDialog,
      qt_meta_data_FillerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FillerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FillerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FillerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FillerDialog))
        return static_cast<void*>(const_cast< FillerDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int FillerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void FillerDialog::SGN_Closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
