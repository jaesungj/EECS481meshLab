/****************************************************************************
** Meta object code from reading C++ file 'additionalgui.h'
**
** Created: Mon Nov 23 16:54:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "additionalgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'additionalgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckBoxListItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CheckBoxListItemDelegate[] = {
    "CheckBoxListItemDelegate\0"
};

void CheckBoxListItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CheckBoxListItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CheckBoxListItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_CheckBoxListItemDelegate,
      qt_meta_data_CheckBoxListItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckBoxListItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckBoxListItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckBoxListItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckBoxListItemDelegate))
        return static_cast<void*>(const_cast< CheckBoxListItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int CheckBoxListItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CheckBoxList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x08,
      46,   43,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CheckBoxList[] = {
    "CheckBoxList\0\0high\0currentHighlighted(int)\0"
    "st\0setCurrentValue(QStringList)\0"
};

void CheckBoxList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckBoxList *_t = static_cast<CheckBoxList *>(_o);
        switch (_id) {
        case 0: _t->currentHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCurrentValue((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CheckBoxList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CheckBoxList::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CheckBoxList,
      qt_meta_data_CheckBoxList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckBoxList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckBoxList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckBoxList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckBoxList))
        return static_cast<void*>(const_cast< CheckBoxList*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CheckBoxList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PrimitiveButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PrimitiveButton[] = {
    "PrimitiveButton\0"
};

void PrimitiveButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PrimitiveButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrimitiveButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_PrimitiveButton,
      qt_meta_data_PrimitiveButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrimitiveButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrimitiveButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrimitiveButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrimitiveButton))
        return static_cast<void*>(const_cast< PrimitiveButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int PrimitiveButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ExpandButtonWidget[] = {

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
      24,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExpandButtonWidget[] = {
    "ExpandButtonWidget\0\0exp\0expandView(bool)\0"
    "changeIcon()\0"
};

void ExpandButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExpandButtonWidget *_t = static_cast<ExpandButtonWidget *>(_o);
        switch (_id) {
        case 0: _t->expandView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->changeIcon(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExpandButtonWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExpandButtonWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExpandButtonWidget,
      qt_meta_data_ExpandButtonWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExpandButtonWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExpandButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExpandButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExpandButtonWidget))
        return static_cast<void*>(const_cast< ExpandButtonWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExpandButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ExpandButtonWidget::expandView(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_TreeWidgetWithMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TreeWidgetWithMenu[] = {
    "TreeWidgetWithMenu\0\0act\0"
    "selectedAction(QAction*)\0"
};

void TreeWidgetWithMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeWidgetWithMenu *_t = static_cast<TreeWidgetWithMenu *>(_o);
        switch (_id) {
        case 0: _t->selectedAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TreeWidgetWithMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TreeWidgetWithMenu::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_TreeWidgetWithMenu,
      qt_meta_data_TreeWidgetWithMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TreeWidgetWithMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TreeWidgetWithMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TreeWidgetWithMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TreeWidgetWithMenu))
        return static_cast<void*>(const_cast< TreeWidgetWithMenu*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int TreeWidgetWithMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TreeWidgetWithMenu::selectedAction(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MLSyntaxHighlighter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_MLSyntaxHighlighter[] = {
    "MLSyntaxHighlighter\0"
};

void MLSyntaxHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MLSyntaxHighlighter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MLSyntaxHighlighter::staticMetaObject = {
    { &QSyntaxHighlighter::staticMetaObject, qt_meta_stringdata_MLSyntaxHighlighter,
      qt_meta_data_MLSyntaxHighlighter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MLSyntaxHighlighter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MLSyntaxHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MLSyntaxHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MLSyntaxHighlighter))
        return static_cast<void*>(const_cast< MLSyntaxHighlighter*>(this));
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int MLSyntaxHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MLAutoCompleterPopUp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_MLAutoCompleterPopUp[] = {
    "MLAutoCompleterPopUp\0"
};

void MLAutoCompleterPopUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MLAutoCompleterPopUp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MLAutoCompleterPopUp::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_MLAutoCompleterPopUp,
      qt_meta_data_MLAutoCompleterPopUp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MLAutoCompleterPopUp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MLAutoCompleterPopUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MLAutoCompleterPopUp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MLAutoCompleterPopUp))
        return static_cast<void*>(const_cast< MLAutoCompleterPopUp*>(this));
    return QListView::qt_metacast(_clname);
}

int MLAutoCompleterPopUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MLAutoCompleter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MLAutoCompleter[] = {
    "MLAutoCompleter\0\0ind\0changeCurrent(QModelIndex)\0"
};

void MLAutoCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MLAutoCompleter *_t = static_cast<MLAutoCompleter *>(_o);
        switch (_id) {
        case 0: _t->changeCurrent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MLAutoCompleter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MLAutoCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_MLAutoCompleter,
      qt_meta_data_MLAutoCompleter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MLAutoCompleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MLAutoCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MLAutoCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MLAutoCompleter))
        return static_cast<void*>(const_cast< MLAutoCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int MLAutoCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MLScriptEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   16,   15,   15, 0x08,
      61,   15,   15,   15, 0x08,
      89,   84,   15,   15, 0x08,
     123,  121,   15,   15, 0x08,
     155,  152,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MLScriptEditor[] = {
    "MLScriptEditor\0\0newBlockCount\0"
    "updateLineNumberAreaWidth(int)\0"
    "highlightCurrentLine()\0r,dy\0"
    "updateLineNumberArea(QRect,int)\0e\0"
    "showAutoComplete(QKeyEvent*)\0st\0"
    "insertSuggestedWord(QString)\0"
};

void MLScriptEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MLScriptEditor *_t = static_cast<MLScriptEditor *>(_o);
        switch (_id) {
        case 0: _t->updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->highlightCurrentLine(); break;
        case 2: _t->updateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->showAutoComplete((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 4: _t->insertSuggestedWord((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MLScriptEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MLScriptEditor::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_MLScriptEditor,
      qt_meta_data_MLScriptEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MLScriptEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MLScriptEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MLScriptEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MLScriptEditor))
        return static_cast<void*>(const_cast< MLScriptEditor*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int MLScriptEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_MyToolButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyToolButton[] = {
    "MyToolButton\0\0openMenu()\0"
};

void MyToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyToolButton *_t = static_cast<MyToolButton *>(_o);
        switch (_id) {
        case 0: _t->openMenu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MyToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_MyToolButton,
      qt_meta_data_MyToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyToolButton))
        return static_cast<void*>(const_cast< MyToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int MyToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MenuLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MenuLineEdit[] = {
    "MenuLineEdit\0\0k\0arrowPressed(int)\0"
};

void MenuLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MenuLineEdit *_t = static_cast<MenuLineEdit *>(_o);
        switch (_id) {
        case 0: _t->arrowPressed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MenuLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MenuLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_MenuLineEdit,
      qt_meta_data_MenuLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuLineEdit))
        return static_cast<void*>(const_cast< MenuLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int MenuLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MenuLineEdit::arrowPressed(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MenuWithToolTip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_MenuWithToolTip[] = {
    "MenuWithToolTip\0"
};

void MenuWithToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MenuWithToolTip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MenuWithToolTip::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_MenuWithToolTip,
      qt_meta_data_MenuWithToolTip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuWithToolTip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuWithToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuWithToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuWithToolTip))
        return static_cast<void*>(const_cast< MenuWithToolTip*>(this));
    return QMenu::qt_metacast(_clname);
}

int MenuWithToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SearchMenu[] = {

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
      17,   12,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      52,   11,   11,   11, 0x08,
      75,   73,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchMenu[] = {
    "SearchMenu\0\0text\0edited(QString)\0"
    "setLineEditFocus()\0onAboutToShowEvent()\0"
    "k\0changeFocus(int)\0"
};

void SearchMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchMenu *_t = static_cast<SearchMenu *>(_o);
        switch (_id) {
        case 0: _t->edited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setLineEditFocus(); break;
        case 2: _t->onAboutToShowEvent(); break;
        case 3: _t->changeFocus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchMenu::staticMetaObject = {
    { &MenuWithToolTip::staticMetaObject, qt_meta_stringdata_SearchMenu,
      qt_meta_data_SearchMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchMenu))
        return static_cast<void*>(const_cast< SearchMenu*>(this));
    return MenuWithToolTip::qt_metacast(_clname);
}

int SearchMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MenuWithToolTip::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
