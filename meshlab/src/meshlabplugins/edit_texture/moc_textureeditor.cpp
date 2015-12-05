/****************************************************************************
** Meta object code from reading C++ file 'textureeditor.h'
**
** Created: Mon Nov 23 17:00:37 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textureeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textureeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextureEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   31,   14,   14, 0x08,
      70,   14,   14,   14, 0x08,
      99,   14,   14,   14, 0x08,
     123,   14,   14,   14, 0x08,
     149,   14,   14,   14, 0x08,
     175,   14,   14,   14, 0x08,
     200,   14,   14,   14, 0x08,
     227,   14,   14,   14, 0x08,
     253,   14,   14,   14, 0x08,
     279,   14,   14,   14, 0x08,
     305,   14,   14,   14, 0x08,
     330,   14,   14,   14, 0x08,
     355,   14,   14,   14, 0x08,
     381,   14,   14,   14, 0x08,
     409,   14,   14,   14, 0x08,
     435,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TextureEditor[] = {
    "TextureEditor\0\0updateTexture()\0index\0"
    "on_tabWidget_currentChanged(int)\0"
    "on_connectedButton_clicked()\0"
    "on_moveButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_vertexButton_clicked()\0"
    "on_clampButton_clicked()\0"
    "on_modulusButton_clicked()\0"
    "on_smoothButton_clicked()\0"
    "on_cancelButton_clicked()\0"
    "on_invertButton_clicked()\0"
    "on_flipHButton_clicked()\0"
    "on_flipVButton_clicked()\0"
    "on_unify2Button_clicked()\0"
    "on_unifySetButton_clicked()\0"
    "on_browseButton_clicked()\0UpdateModel()\0"
};

void TextureEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextureEditor *_t = static_cast<TextureEditor *>(_o);
        switch (_id) {
        case 0: _t->updateTexture(); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_connectedButton_clicked(); break;
        case 3: _t->on_moveButton_clicked(); break;
        case 4: _t->on_selectButton_clicked(); break;
        case 5: _t->on_vertexButton_clicked(); break;
        case 6: _t->on_clampButton_clicked(); break;
        case 7: _t->on_modulusButton_clicked(); break;
        case 8: _t->on_smoothButton_clicked(); break;
        case 9: _t->on_cancelButton_clicked(); break;
        case 10: _t->on_invertButton_clicked(); break;
        case 11: _t->on_flipHButton_clicked(); break;
        case 12: _t->on_flipVButton_clicked(); break;
        case 13: _t->on_unify2Button_clicked(); break;
        case 14: _t->on_unifySetButton_clicked(); break;
        case 15: _t->on_browseButton_clicked(); break;
        case 16: _t->UpdateModel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TextureEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextureEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TextureEditor,
      qt_meta_data_TextureEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextureEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextureEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextureEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextureEditor))
        return static_cast<void*>(const_cast< TextureEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int TextureEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void TextureEditor::updateTexture()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
