/****************************************************************************
** Meta object code from reading C++ file 'xmlgeneratorgui.h'
**
** Created: Mon Nov 23 16:54:45 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "xmlgeneratorgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmlgeneratorgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParamGeneratorGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   19,   18,   18, 0x05,
      99,   87,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     158,  148,   18,   18, 0x08,
     185,  181,   18,   18, 0x08,
     209,   18,   18,   18, 0x08,
     257,  249,   18,   18, 0x08,
     291,   18,   18,   18, 0x08,
     306,   18,   18,   18, 0x08,
     337,  331,   18,   18, 0x0a,
     374,  369,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ParamGeneratorGUI[] = {
    "ParamGeneratorGUI\0\0parent,newname\0"
    "paramNameValidationRequest(QTreeWidgetItem*,QString)\0"
    "parent,text\0"
    "itemLabelUpdateRequest(QTreeWidgetItem*,QString)\0"
    "paramtype\0updateGUIType(QString)\0lab\0"
    "updateGUILabel(QString)\0"
    "updateOptionalWidgetVisibility(QString)\0"
    "guitype\0updateGUIWidgetInterface(QString)\0"
    "validateName()\0updateItemLabel(QString)\0"
    "param\0collectInfo(MLXMLParamSubTree&)\0"
    "tree\0importInfo(MLXMLParamSubTree)\0"
};

void ParamGeneratorGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParamGeneratorGUI *_t = static_cast<ParamGeneratorGUI *>(_o);
        switch (_id) {
        case 0: _t->paramNameValidationRequest((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->itemLabelUpdateRequest((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->updateGUIType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateGUILabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateOptionalWidgetVisibility((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateGUIWidgetInterface((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->validateName(); break;
        case 7: _t->updateItemLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->collectInfo((*reinterpret_cast< MLXMLParamSubTree(*)>(_a[1]))); break;
        case 9: _t->importInfo((*reinterpret_cast< const MLXMLParamSubTree(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParamGeneratorGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParamGeneratorGUI::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ParamGeneratorGUI,
      qt_meta_data_ParamGeneratorGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParamGeneratorGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParamGeneratorGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParamGeneratorGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParamGeneratorGUI))
        return static_cast<void*>(const_cast< ParamGeneratorGUI*>(this));
    return QFrame::qt_metacast(_clname);
}

int ParamGeneratorGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ParamGeneratorGUI::paramNameValidationRequest(QTreeWidgetItem * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParamGeneratorGUI::itemLabelUpdateRequest(QTreeWidgetItem * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_FilterGeneratorGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x05,
      64,   55,   19,   19, 0x05,
     113,  100,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     168,  161,   19,   19, 0x0a,
     206,  201,   19,   19, 0x0a,
     245,  237,   19,   19, 0x0a,
     272,  268,   19,   19, 0x08,
     311,  296,   19,   19, 0x08,
     372,  360,   19,   19, 0x08,
     413,   19,   19,   19, 0x08,
     447,  443,   19,   19, 0x08,
     475,   20,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilterGeneratorGUI[] = {
    "FilterGeneratorGUI\0\0name\0"
    "validateFunctionName(QString)\0name,wid\0"
    "filterNameUpdated(QString,QWidget*)\0"
    "name,thiswid\0"
    "validateFilterName(QString,FilterGeneratorGUI*)\0"
    "filter\0collectInfo(MLXMLFilterSubTree&)\0"
    "tree\0importInfo(MLXMLFilterSubTree)\0"
    "newname\0setFilterName(QString)\0act\0"
    "menuSelection(QAction*)\0parent,newname\0"
    "validateAndSetItemName(QTreeWidgetItem*,QString)\0"
    "parent,text\0updateItemText(QTreeWidgetItem*,QString)\0"
    "filterNameValidationRequest()\0fun\0"
    "updateFunctionName(QString)\0"
    "filterNameUpdated(QString)\0"
};

void FilterGeneratorGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterGeneratorGUI *_t = static_cast<FilterGeneratorGUI *>(_o);
        switch (_id) {
        case 0: _t->validateFunctionName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->filterNameUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: _t->validateFilterName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< FilterGeneratorGUI*(*)>(_a[2]))); break;
        case 3: _t->collectInfo((*reinterpret_cast< MLXMLFilterSubTree(*)>(_a[1]))); break;
        case 4: _t->importInfo((*reinterpret_cast< const MLXMLFilterSubTree(*)>(_a[1]))); break;
        case 5: _t->setFilterName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->menuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->validateAndSetItemName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->updateItemText((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->filterNameValidationRequest(); break;
        case 10: _t->updateFunctionName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->filterNameUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilterGeneratorGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilterGeneratorGUI::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FilterGeneratorGUI,
      qt_meta_data_FilterGeneratorGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilterGeneratorGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilterGeneratorGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilterGeneratorGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterGeneratorGUI))
        return static_cast<void*>(const_cast< FilterGeneratorGUI*>(this));
    return QFrame::qt_metacast(_clname);
}

int FilterGeneratorGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FilterGeneratorGUI::validateFunctionName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterGeneratorGUI::filterNameUpdated(const QString & _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FilterGeneratorGUI::validateFilterName(const QString & _t1, FilterGeneratorGUI * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_FilterGeneratorTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   20,   19,   19, 0x05,
      66,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,   19,   19,   19, 0x08,
     132,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilterGeneratorTab[] = {
    "FilterGeneratorTab\0\0fname,wid\0"
    "filterNameUpdated(QString,QWidget*)\0"
    "validateFilterName(QString,FilterGeneratorGUI*)\0"
    "jsButtonClicked()\0guiButtonClicked()\0"
};

void FilterGeneratorTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterGeneratorTab *_t = static_cast<FilterGeneratorTab *>(_o);
        switch (_id) {
        case 0: _t->filterNameUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 1: _t->validateFilterName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< FilterGeneratorGUI*(*)>(_a[2]))); break;
        case 2: _t->jsButtonClicked(); break;
        case 3: _t->guiButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilterGeneratorTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilterGeneratorTab::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FilterGeneratorTab,
      qt_meta_data_FilterGeneratorTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilterGeneratorTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilterGeneratorTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilterGeneratorTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterGeneratorTab))
        return static_cast<void*>(const_cast< FilterGeneratorTab*>(this));
    return QFrame::qt_metacast(_clname);
}

int FilterGeneratorTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void FilterGeneratorTab::filterNameUpdated(const QString & _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterGeneratorTab::validateFilterName(const QString & _t1, FilterGeneratorGUI * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_PluginGeneratorGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   20,   19,   19, 0x05,
      99,   75,   19,   19, 0x05,
     141,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     163,  158,   19,   19, 0x0a,
     187,   19,   19,   19, 0x08,
     218,  211,   19,   19, 0x08,
     265,  256,   19,   19, 0x08,
     298,  256,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PluginGeneratorGUI[] = {
    "PluginGeneratorGUI\0\0val,time,\0"
    "scriptCodeExecuted(QScriptValue,int,QString)\0"
    "filename,plugscriptname\0"
    "insertXMLPluginRequested(QString,QString)\0"
    "historyRequest()\0hist\0getHistory(QStringList)\0"
    "menuSelection(QAction*)\0filter\0"
    "addNewFilter(MLXMLPluginInfo::XMLMap)\0"
    "name,wid\0updateTabTitle(QString,QWidget*)\0"
    "validateFilterName(QString,FilterGeneratorGUI*)\0"
};

void PluginGeneratorGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginGeneratorGUI *_t = static_cast<PluginGeneratorGUI *>(_o);
        switch (_id) {
        case 0: _t->scriptCodeExecuted((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->insertXMLPluginRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->historyRequest(); break;
        case 3: _t->getHistory((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->menuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->addNewFilter((*reinterpret_cast< const MLXMLPluginInfo::XMLMap(*)>(_a[1]))); break;
        case 6: _t->updateTabTitle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 7: _t->validateFilterName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< FilterGeneratorGUI*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginGeneratorGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginGeneratorGUI::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_PluginGeneratorGUI,
      qt_meta_data_PluginGeneratorGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginGeneratorGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginGeneratorGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginGeneratorGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginGeneratorGUI))
        return static_cast<void*>(const_cast< PluginGeneratorGUI*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int PluginGeneratorGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PluginGeneratorGUI::scriptCodeExecuted(const QScriptValue & _t1, const int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginGeneratorGUI::insertXMLPluginRequested(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PluginGeneratorGUI::historyRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
