/****************************************************************************
** Meta object code from reading C++ file 'qualitymapperdialog.h'
**
** Created: Mon Nov 23 17:00:06 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qualitymapperdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qualitymapperdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TFDoubleClickCatcher[] = {

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
      22,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TFDoubleClickCatcher[] = {
    "TFDoubleClickCatcher\0\0TFdoubleClicked(QPointF)\0"
};

void TFDoubleClickCatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TFDoubleClickCatcher *_t = static_cast<TFDoubleClickCatcher *>(_o);
        switch (_id) {
        case 0: _t->TFdoubleClicked((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TFDoubleClickCatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TFDoubleClickCatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TFDoubleClickCatcher,
      qt_meta_data_TFDoubleClickCatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TFDoubleClickCatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TFDoubleClickCatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TFDoubleClickCatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TFDoubleClickCatcher))
        return static_cast<void*>(const_cast< TFDoubleClickCatcher*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< TFDoubleClickCatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int TFDoubleClickCatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void TFDoubleClickCatcher::TFdoubleClicked(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QualityMapperDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      41,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   20,   20,   20, 0x08,
      96,   20,   20,   20, 0x08,
     131,   20,   20,   20, 0x08,
     169,   20,   20,   20, 0x08,
     210,   20,   20,   20, 0x08,
     235,   20,   20,   20, 0x08,
     268,   20,   20,   20, 0x08,
     301,   20,   20,   20, 0x08,
     328,   20,   20,   20, 0x08,
     353,   20,   20,   20, 0x08,
     386,  378,   20,   20, 0x08,
     414,  378,   20,   20, 0x08,
     443,  378,   20,   20, 0x08,
     470,   20,   20,   20, 0x08,
     516,   20,   20,   20, 0x08,
     546,   20,   20,   20, 0x08,
     576,   20,   20,   20, 0x08,
     595,   20,   20,   20, 0x08,
     617,  615,   20,   20, 0x08,
     671,  664,   20,   20, 0x08,
     700,  664,   20,   20, 0x08,
     731,  664,   20,   20, 0x08,
     772,  768,   20,   20, 0x08,
     806,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QualityMapperDialog[] = {
    "QualityMapperDialog\0\0suspendEditToggle()\0"
    "closingDialog()\0on_midPercentageLine_editingFinished()\0"
    "on_midSpinBox_valueChanged(double)\0"
    "on_brightnessSlider_valueChanged(int)\0"
    "on_brightessSpinBox_valueChanged(double)\0"
    "on_clampButton_clicked()\0"
    "on_ySpinBox_valueChanged(double)\0"
    "on_xSpinBox_valueChanged(double)\0"
    "on_previewButton_clicked()\0"
    "on_applyButton_clicked()\0"
    "on_resetButton_clicked()\0checked\0"
    "on_blueButton_toggled(bool)\0"
    "on_greenButton_toggled(bool)\0"
    "on_redButton_toggled(bool)\0"
    "on_presetComboBox_currentTextChanged(QString)\0"
    "on_loadPresetButton_clicked()\0"
    "on_savePresetButton_clicked()\0"
    "meshColorPreview()\0on_EQHandle_moved()\0"
    ",\0on_EqHandle_crossing_histogram(EqHandle*,bool)\0"
    "sender\0on_TfHandle_moved(TFHandle*)\0"
    "on_TfHandle_clicked(TFHandle*)\0"
    "on_TfHandle_doubleClicked(TFHandle*)\0"
    "pos\0on_TF_view_doubleClicked(QPointF)\0"
    "drawGammaCorrection()\0"
};

void QualityMapperDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QualityMapperDialog *_t = static_cast<QualityMapperDialog *>(_o);
        switch (_id) {
        case 0: _t->suspendEditToggle(); break;
        case 1: _t->closingDialog(); break;
        case 2: _t->on_midPercentageLine_editingFinished(); break;
        case 3: _t->on_midSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_brightnessSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_brightessSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_clampButton_clicked(); break;
        case 7: _t->on_ySpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_xSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_previewButton_clicked(); break;
        case 10: _t->on_applyButton_clicked(); break;
        case 11: _t->on_resetButton_clicked(); break;
        case 12: _t->on_blueButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_greenButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_redButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_presetComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_loadPresetButton_clicked(); break;
        case 17: _t->on_savePresetButton_clicked(); break;
        case 18: _t->meshColorPreview(); break;
        case 19: _t->on_EQHandle_moved(); break;
        case 20: _t->on_EqHandle_crossing_histogram((*reinterpret_cast< EqHandle*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->on_TfHandle_moved((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 22: _t->on_TfHandle_clicked((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 23: _t->on_TfHandle_doubleClicked((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 24: _t->on_TF_view_doubleClicked((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 25: _t->drawGammaCorrection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QualityMapperDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QualityMapperDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_QualityMapperDialog,
      qt_meta_data_QualityMapperDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QualityMapperDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QualityMapperDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QualityMapperDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QualityMapperDialog))
        return static_cast<void*>(const_cast< QualityMapperDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int QualityMapperDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QualityMapperDialog::suspendEditToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QualityMapperDialog::closingDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
