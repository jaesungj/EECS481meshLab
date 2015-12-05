/****************************************************************************
** Meta object code from reading C++ file 'filterScriptDialog.h'
**
** Created: Mon Nov 23 16:54:33 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filterScriptDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterScriptDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilterScriptDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      34,   19,   19,   19, 0x08,
      48,   19,   19,   19, 0x08,
      61,   19,   19,   19, 0x08,
      74,   19,   19,   19, 0x08,
      97,   19,   19,   19, 0x08,
     122,   19,   19,   19, 0x08,
     145,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilterScriptDialog[] = {
    "FilterScriptDialog\0\0applyScript()\0"
    "clearScript()\0saveScript()\0openScript()\0"
    "moveSelectedFilterUp()\0moveSelectedFilterDown()\0"
    "removeSelectedFilter()\0"
    "editSelectedFilterParameters()\0"
};

void FilterScriptDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterScriptDialog *_t = static_cast<FilterScriptDialog *>(_o);
        switch (_id) {
        case 0: _t->applyScript(); break;
        case 1: _t->clearScript(); break;
        case 2: _t->saveScript(); break;
        case 3: _t->openScript(); break;
        case 4: _t->moveSelectedFilterUp(); break;
        case 5: _t->moveSelectedFilterDown(); break;
        case 6: _t->removeSelectedFilter(); break;
        case 7: _t->editSelectedFilterParameters(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FilterScriptDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilterScriptDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FilterScriptDialog,
      qt_meta_data_FilterScriptDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilterScriptDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilterScriptDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilterScriptDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterScriptDialog))
        return static_cast<void*>(const_cast< FilterScriptDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FilterScriptDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
