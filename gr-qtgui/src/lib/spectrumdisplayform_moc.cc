/****************************************************************************
** Meta object code from reading C++ file 'spectrumdisplayform.h'
**
** Created: Tue Jul 14 15:57:22 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spectrumdisplayform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumdisplayform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpectrumDisplayForm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      23,   21,   20,   20, 0x0a,
      50,   21,   20,   20, 0x0a,
      83,   71,   20,   20, 0x0a,
     125,  116,   20,   20, 0x0a,
     155,  116,   20,   20, 0x0a,
     185,   20,   20,   20, 0x0a,
     211,   20,   20,   20, 0x0a,
     237,   71,   20,   20, 0x0a,
     326,  272,   20,   20, 0x0a,
     366,   21,   20,   20, 0x0a,
     399,  391,   20,   20, 0x0a,
     432,  422,   20,   20, 0x0a,
     457,   20,   20,   20, 0x0a,
     500,   20,   20,   20, 0x0a,
     543,   20,   20,   20, 0x0a,
     583,   20,   20,   20, 0x0a,
     609,   20,   20,   20, 0x0a,
     654,   20,   20,   20, 0x0a,
     699,   20,   20,   20, 0x0a,
     741,   20,   20,   20, 0x0a,
     769,   20,   20,   20, 0x0a,
     806,  800,   20,   20, 0x0a,
     831,  800,   20,   20, 0x0a,
     856,  800,   20,   20, 0x0a,
     883,  800,   20,   20, 0x0a,
     903,  800,   20,   20, 0x0a,
     940,  932,   20,   20, 0x0a,
     993,  973,   20,   20, 0x0a,
    1043,  932,   20,   20, 0x0a,
    1075,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpectrumDisplayForm[] = {
    "SpectrumDisplayForm\0\0e\0"
    "resizeEvent(QResizeEvent*)\0"
    "customEvent(QEvent*)\0valueString\0"
    "AvgLineEdit_textChanged(QString)\0"
    "newState\0MaxHoldCheckBox_toggled(bool)\0"
    "MinHoldCheckBox_toggled(bool)\0"
    "MinHoldResetBtn_clicked()\0"
    "MaxHoldResetBtn_clicked()\0"
    "PowerLineEdit_textChanged(QString)\0"
    "newCenterFrequency,newStartFrequency,newStopFrequency\0"
    "SetFrequencyRange(double,double,double)\0"
    "closeEvent(QCloseEvent*)\0newItem\0"
    "WindowTypeChanged(int)\0useRFFlag\0"
    "UseRFFrequenciesCB(bool)\0"
    "waterfallMaximumIntensityChangedCB(double)\0"
    "waterfallMinimumIntensityChangedCB(double)\0"
    "WaterfallIntensityColorTypeChanged(int)\0"
    "WaterfallAutoScaleBtnCB()\0"
    "waterfall3DMaximumIntensityChangedCB(double)\0"
    "waterfall3DMinimumIntensityChangedCB(double)\0"
    "Waterfall3DIntensityColorTypeChanged(int)\0"
    "Waterfall3DAutoScaleBtnCB()\0"
    "FFTComboBoxSelectedCB(QString)\0state\0"
    "ToggleTabFrequency(bool)\0"
    "ToggleTabWaterfall(bool)\0"
    "ToggleTabWaterfall3D(bool)\0"
    "ToggleTabTime(bool)\0ToggleTabConstellation(bool)\0"
    "min,max\0SetTimeDomainAxis(double,double)\0"
    "xmin,xmax,ymin,ymax\0"
    "SetConstellationAxis(double,double,double,double)\0"
    "SetFrequencyAxis(double,double)\0"
    "newFrequencyData(const SpectrumUpdateEvent*)\0"
};

const QMetaObject SpectrumDisplayForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpectrumDisplayForm,
      qt_meta_data_SpectrumDisplayForm, 0 }
};

const QMetaObject *SpectrumDisplayForm::metaObject() const
{
    return &staticMetaObject;
}

void *SpectrumDisplayForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumDisplayForm))
        return static_cast<void*>(const_cast< SpectrumDisplayForm*>(this));
    if (!strcmp(_clname, "Ui::SpectrumDisplayForm"))
        return static_cast< Ui::SpectrumDisplayForm*>(const_cast< SpectrumDisplayForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpectrumDisplayForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: customEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 2: AvgLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: MaxHoldCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: MinHoldCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: MinHoldResetBtn_clicked(); break;
        case 6: MaxHoldResetBtn_clicked(); break;
        case 7: PowerLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: SetFrequencyRange((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 9: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 10: WindowTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: UseRFFrequenciesCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: waterfallMaximumIntensityChangedCB((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: waterfallMinimumIntensityChangedCB((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: WaterfallIntensityColorTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: WaterfallAutoScaleBtnCB(); break;
        case 16: waterfall3DMaximumIntensityChangedCB((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: waterfall3DMinimumIntensityChangedCB((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: Waterfall3DIntensityColorTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: Waterfall3DAutoScaleBtnCB(); break;
        case 20: FFTComboBoxSelectedCB((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: ToggleTabFrequency((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 22: ToggleTabWaterfall((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: ToggleTabWaterfall3D((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 24: ToggleTabTime((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 25: ToggleTabConstellation((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 26: SetTimeDomainAxis((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 27: SetConstellationAxis((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 28: SetFrequencyAxis((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 29: newFrequencyData((*reinterpret_cast< const SpectrumUpdateEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
