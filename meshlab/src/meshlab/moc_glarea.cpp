/****************************************************************************
** Meta object code from reading C++ file 'glarea.h'
**
** Created: Mon Nov 23 16:54:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "glarea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      32,    7,    7,    7, 0x05,
      57,   47,    7,    7, 0x05,
      92,   83,    7,    7, 0x05,
     130,   83,    7,    7, 0x05,
     168,   83,    7,    7, 0x05,
     209,   83,    7,    7, 0x05,
     255,  249,    7,    7, 0x05,
     288,  249,    7,    7, 0x05,
     327,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     346,    7,    7,    7, 0x0a,
     362,    7,    7,    7, 0x0a,
     393,  379,    7,    7, 0x0a,
     410,    7,    7,    7, 0x0a,
     441,  436,    7,    7, 0x0a,
     481,  473,    7,    7, 0x0a,
     525,  436,    7,    7, 0x0a,
     559,  473,    7,    7, 0x0a,
     605,  436,    7,    7, 0x0a,
     643,  473,    7,    7, 0x0a,
     697,  693,    7,    7, 0x0a,
     742,    7,    7,    7, 0x0a,
     760,  752,    7,    7, 0x0a,
     789,  752,    7,    7, 0x0a,
     818,    7,    7,    7, 0x0a,
     838,    7,    7,    7, 0x0a,
     864,    7,    7,    7, 0x0a,
     898,  893,    7,    7, 0x0a,
     919,  893,    7,    7, 0x0a,
     943,  893,    7,    7, 0x0a,
     964,  893,    7,    7, 0x0a,
     987,  893,    7,    7, 0x0a,
    1009,  893,    7,    7, 0x0a,
    1033,  893,    7,    7, 0x0a,
    1057,  893,    7,    7, 0x0a,
    1081,    7,    7,    7, 0x0a,
    1109,    7,    7,    7, 0x0a,
    1148, 1139,    7,    7, 0x08,
    1180, 1174,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GLArea[] = {
    "GLArea\0\0updateMainWindowMenus()\0"
    "glareaClosed()\0currentId\0"
    "currentViewerChanged(int)\0name,dir\0"
    "transmitViewDir(QString,vcg::Point3f)\0"
    "transmitViewPos(QString,vcg::Point3f)\0"
    "transmitSurfacePos(QString,vcg::Point3f)\0"
    "transmitCameraPos(QString,vcg::Point3f)\0"
    "name,\0transmitShot(QString,vcg::Shotf)\0"
    "transmitMatrix(QString,vcg::Matrix44f)\0"
    "updateLayerTable()\0updateTexture()\0"
    "resetTrackBall()\0resetViewFlag\0"
    "showRaster(bool)\0completeUpdateRequested()\0"
    "mode\0setDrawMode(vcg::GLW::DrawMode)\0"
    "rm,mode\0setDrawMode(RenderMode&,vcg::GLW::DrawMode)\0"
    "setColorMode(vcg::GLW::ColorMode)\0"
    "setColorMode(RenderMode&,vcg::GLW::ColorMode)\0"
    "setTextureMode(vcg::GLW::TextureMode)\0"
    "setTextureMode(RenderMode&,vcg::GLW::TextureMode)\0"
    "rps\0updateCustomSettingValues(RichParameterSet&)\0"
    "endEdit()\0enabled\0setSelectFaceRendering(bool)\0"
    "setSelectVertRendering(bool)\0"
    "suspendEditToggle()\0manageCurrentMeshChange()\0"
    "updateAllPerMeshDecorators()\0name\0"
    "sendViewPos(QString)\0sendSurfacePos(QString)\0"
    "sendViewDir(QString)\0sendCameraPos(QString)\0"
    "sendMeshShot(QString)\0sendMeshMatrix(QString)\0"
    "sendViewerShot(QString)\0sendRasterShot(QString)\0"
    "updateMeshSetVisibilities()\0"
    "updateRasterSetVisibilities()\0index,rm\0"
    "meshAdded(int,RenderMode)\0index\0"
    "meshRemoved(int)\0"
};

void GLArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GLArea *_t = static_cast<GLArea *>(_o);
        switch (_id) {
        case 0: _t->updateMainWindowMenus(); break;
        case 1: _t->glareaClosed(); break;
        case 2: _t->currentViewerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->transmitViewDir((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Point3f(*)>(_a[2]))); break;
        case 4: _t->transmitViewPos((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Point3f(*)>(_a[2]))); break;
        case 5: _t->transmitSurfacePos((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Point3f(*)>(_a[2]))); break;
        case 6: _t->transmitCameraPos((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Point3f(*)>(_a[2]))); break;
        case 7: _t->transmitShot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Shotf(*)>(_a[2]))); break;
        case 8: _t->transmitMatrix((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Matrix44f(*)>(_a[2]))); break;
        case 9: _t->updateLayerTable(); break;
        case 10: _t->updateTexture(); break;
        case 11: _t->resetTrackBall(); break;
        case 12: _t->showRaster((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->completeUpdateRequested(); break;
        case 14: _t->setDrawMode((*reinterpret_cast< vcg::GLW::DrawMode(*)>(_a[1]))); break;
        case 15: _t->setDrawMode((*reinterpret_cast< RenderMode(*)>(_a[1])),(*reinterpret_cast< vcg::GLW::DrawMode(*)>(_a[2]))); break;
        case 16: _t->setColorMode((*reinterpret_cast< vcg::GLW::ColorMode(*)>(_a[1]))); break;
        case 17: _t->setColorMode((*reinterpret_cast< RenderMode(*)>(_a[1])),(*reinterpret_cast< vcg::GLW::ColorMode(*)>(_a[2]))); break;
        case 18: _t->setTextureMode((*reinterpret_cast< vcg::GLW::TextureMode(*)>(_a[1]))); break;
        case 19: _t->setTextureMode((*reinterpret_cast< RenderMode(*)>(_a[1])),(*reinterpret_cast< vcg::GLW::TextureMode(*)>(_a[2]))); break;
        case 20: _t->updateCustomSettingValues((*reinterpret_cast< RichParameterSet(*)>(_a[1]))); break;
        case 21: _t->endEdit(); break;
        case 22: _t->setSelectFaceRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setSelectVertRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->suspendEditToggle(); break;
        case 25: _t->manageCurrentMeshChange(); break;
        case 26: _t->updateAllPerMeshDecorators(); break;
        case 27: _t->sendViewPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->sendSurfacePos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->sendViewDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->sendCameraPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->sendMeshShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->sendMeshMatrix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->sendViewerShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->sendRasterShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->updateMeshSetVisibilities(); break;
        case 36: _t->updateRasterSetVisibilities(); break;
        case 37: _t->meshAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RenderMode(*)>(_a[2]))); break;
        case 38: _t->meshRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GLArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GLArea::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLArea,
      qt_meta_data_GLArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLArea))
        return static_cast<void*>(const_cast< GLArea*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void GLArea::updateMainWindowMenus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GLArea::glareaClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GLArea::currentViewerChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLArea::transmitViewDir(QString _t1, vcg::Point3f _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GLArea::transmitViewPos(QString _t1, vcg::Point3f _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GLArea::transmitSurfacePos(QString _t1, vcg::Point3f _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GLArea::transmitCameraPos(QString _t1, vcg::Point3f _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GLArea::transmitShot(QString _t1, vcg::Shotf _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GLArea::transmitMatrix(QString _t1, vcg::Matrix44f _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GLArea::updateLayerTable()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
