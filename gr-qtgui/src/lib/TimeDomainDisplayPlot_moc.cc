/****************************************************************************
** Meta object code from reading C++ file 'TimeDomainDisplayPlot.h'
**
** Created: Tue Jul 14 15:57:22 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TimeDomainDisplayPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeDomainDisplayPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeDomainDisplayPlot[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      35,   23,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TimeDomainDisplayPlot[] = {
    "TimeDomainDisplayPlot\0\0plotItem,on\0"
    "LegendEntryChecked(QwtPlotItem*,bool)\0"
};

const QMetaObject TimeDomainDisplayPlot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_TimeDomainDisplayPlot,
      qt_meta_data_TimeDomainDisplayPlot, 0 }
};

const QMetaObject *TimeDomainDisplayPlot::metaObject() const
{
    return &staticMetaObject;
}

void *TimeDomainDisplayPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeDomainDisplayPlot))
        return static_cast<void*>(const_cast< TimeDomainDisplayPlot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int TimeDomainDisplayPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LegendEntryChecked((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
