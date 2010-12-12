/****************************************************************************
** Meta object code from reading C++ file 'Waterfall3DDisplayPlot.h'
**
** Created: Tue Jul 14 15:57:22 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Waterfall3DDisplayPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Waterfall3DDisplayPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Waterfall3DDisplayPlot[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      59,   23,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Waterfall3DDisplayPlot[] = {
    "Waterfall3DDisplayPlot\0\0"
    "UpdatedLowerIntensityLevel(double)\0"
    "UpdatedUpperIntensityLevel(double)\0"
};

const QMetaObject Waterfall3DDisplayPlot::staticMetaObject = {
    { &Qwt3D::SurfacePlot::staticMetaObject, qt_meta_stringdata_Waterfall3DDisplayPlot,
      qt_meta_data_Waterfall3DDisplayPlot, 0 }
};

const QMetaObject *Waterfall3DDisplayPlot::metaObject() const
{
    return &staticMetaObject;
}

void *Waterfall3DDisplayPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Waterfall3DDisplayPlot))
        return static_cast<void*>(const_cast< Waterfall3DDisplayPlot*>(this));
    typedef Qwt3D::SurfacePlot QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Waterfall3DDisplayPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Qwt3D::SurfacePlot QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdatedLowerIntensityLevel((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: UpdatedUpperIntensityLevel((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Waterfall3DDisplayPlot::UpdatedLowerIntensityLevel(const double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Waterfall3DDisplayPlot::UpdatedUpperIntensityLevel(const double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
