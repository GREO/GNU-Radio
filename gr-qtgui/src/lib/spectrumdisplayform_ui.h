/********************************************************************************
** Form generated from reading ui file 'spectrumdisplayform.ui'
**
** Created: Tue Jul 14 15:57:22 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPECTRUMDISPLAYFORM_UI_H
#define SPECTRUMDISPLAYFORM_UI_H

#include <FrequencyDisplayPlot.h>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include <SpectrumGUIClass.h>
#include <TimeDomainDisplayPlot.h>
#include <Waterfall3DDisplayPlot.h>
#include <WaterfallDisplayPlot.h>
#include <QtGui/QRegExpValidator>
#include <vector>
#include "qwt_wheel.h"

QT_BEGIN_NAMESPACE

class Ui_SpectrumDisplayForm
{
public:
    QCheckBox *UseRFFrequenciesCheckBox;
    QComboBox *WindowComboBox;
    QLabel *WindowLbl;
    QLabel *FFTSizeLabel;
    QComboBox *FFTSizeComboBox;
    QTabWidget *SpectrumTypeTab;
    QWidget *FrequencyPage;
    QLineEdit *PowerLineEdit;
    QCheckBox *MinHoldCheckBox;
    QLabel *AvgLabel;
    QPushButton *MinHoldResetBtn;
    QLineEdit *AvgLineEdit;
    QLabel *PowerLabel;
    QPushButton *MaxHoldResetBtn;
    QCheckBox *MaxHoldCheckBox;
    QFrame *FrequencyPlotDisplayFrame;
    QWidget *WaterfallPage;
    QLabel *textLabel1;
    QComboBox *WaterfallIntensityComboBox;
    QwtWheel *WaterfallMaximumIntensityWheel;
    QLabel *WaterfallMaximumIntensityLabel;
    QFrame *WaterfallPlotDisplayFrame;
    QwtWheel *WaterfallMinimumIntensityWheel;
    QLabel *WaterfallMinimumIntensityLabel;
    QPushButton *WaterfallAutoScaleBtn;
    QWidget *Waterfall3DPage;
    QLabel *textLabel1_2;
    QLabel *Waterfall3DMaximumIntensityLabel;
    QPushButton *Waterfall3DAutoScaleBtn;
    QwtWheel *Waterfall3DMinimumIntensityWheel;
    QLabel *Waterfall3DMinimumIntensityLabel;
    QFrame *Waterfall3DPlotDisplayFrame;
    QComboBox *Waterfall3DIntensityComboBox;
    QwtWheel *Waterfall3DMaximumIntensityWheel;
    QWidget *TimeDomainPage;
    QFrame *TimeDomainDisplayFrame;
    QWidget *ConstellationPage;
    QFrame *ConstellationDisplayFrame;

    void setupUi(QWidget *SpectrumDisplayForm)
    {
        if (SpectrumDisplayForm->objectName().isEmpty())
            SpectrumDisplayForm->setObjectName(QString::fromUtf8("SpectrumDisplayForm"));
        SpectrumDisplayForm->resize(633, 436);
        UseRFFrequenciesCheckBox = new QCheckBox(SpectrumDisplayForm);
        UseRFFrequenciesCheckBox->setObjectName(QString::fromUtf8("UseRFFrequenciesCheckBox"));
        UseRFFrequenciesCheckBox->setGeometry(QRect(10, 385, 180, 20));
        WindowComboBox = new QComboBox(SpectrumDisplayForm);
        WindowComboBox->setObjectName(QString::fromUtf8("WindowComboBox"));
        WindowComboBox->setGeometry(QRect(105, 410, 170, 20));
        QFont font;
        font.setPointSize(9);
        WindowComboBox->setFont(font);
        WindowLbl = new QLabel(SpectrumDisplayForm);
        WindowLbl->setObjectName(QString::fromUtf8("WindowLbl"));
        WindowLbl->setGeometry(QRect(10, 410, 90, 17));
        WindowLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WindowLbl->setWordWrap(false);
        FFTSizeLabel = new QLabel(SpectrumDisplayForm);
        FFTSizeLabel->setObjectName(QString::fromUtf8("FFTSizeLabel"));
        FFTSizeLabel->setGeometry(QRect(405, 385, 116, 20));
        FFTSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        FFTSizeLabel->setWordWrap(false);
        FFTSizeComboBox = new QComboBox(SpectrumDisplayForm);
        FFTSizeComboBox->setObjectName(QString::fromUtf8("FFTSizeComboBox"));
        FFTSizeComboBox->setGeometry(QRect(525, 385, 100, 20));
        SpectrumTypeTab = new QTabWidget(SpectrumDisplayForm);
        SpectrumTypeTab->setObjectName(QString::fromUtf8("SpectrumTypeTab"));
        SpectrumTypeTab->setGeometry(QRect(0, 0, 630, 380));
        FrequencyPage = new QWidget();
        FrequencyPage->setObjectName(QString::fromUtf8("FrequencyPage"));
        PowerLineEdit = new QLineEdit(FrequencyPage);
        PowerLineEdit->setObjectName(QString::fromUtf8("PowerLineEdit"));
        PowerLineEdit->setGeometry(QRect(480, 320, 60, 20));
        MinHoldCheckBox = new QCheckBox(FrequencyPage);
        MinHoldCheckBox->setObjectName(QString::fromUtf8("MinHoldCheckBox"));
        MinHoldCheckBox->setGeometry(QRect(10, 325, 95, 20));
        MinHoldCheckBox->setChecked(false);
        AvgLabel = new QLabel(FrequencyPage);
        AvgLabel->setObjectName(QString::fromUtf8("AvgLabel"));
        AvgLabel->setGeometry(QRect(545, 300, 72, 20));
        AvgLabel->setAlignment(Qt::AlignCenter);
        AvgLabel->setWordWrap(false);
        MinHoldResetBtn = new QPushButton(FrequencyPage);
        MinHoldResetBtn->setObjectName(QString::fromUtf8("MinHoldResetBtn"));
        MinHoldResetBtn->setGeometry(QRect(105, 325, 61, 20));
        AvgLineEdit = new QLineEdit(FrequencyPage);
        AvgLineEdit->setObjectName(QString::fromUtf8("AvgLineEdit"));
        AvgLineEdit->setGeometry(QRect(550, 320, 60, 20));
        PowerLabel = new QLabel(FrequencyPage);
        PowerLabel->setObjectName(QString::fromUtf8("PowerLabel"));
        PowerLabel->setGeometry(QRect(475, 300, 72, 20));
        PowerLabel->setAlignment(Qt::AlignCenter);
        PowerLabel->setWordWrap(false);
        MaxHoldResetBtn = new QPushButton(FrequencyPage);
        MaxHoldResetBtn->setObjectName(QString::fromUtf8("MaxHoldResetBtn"));
        MaxHoldResetBtn->setGeometry(QRect(105, 300, 61, 20));
        MaxHoldCheckBox = new QCheckBox(FrequencyPage);
        MaxHoldCheckBox->setObjectName(QString::fromUtf8("MaxHoldCheckBox"));
        MaxHoldCheckBox->setGeometry(QRect(10, 300, 95, 20));
        MaxHoldCheckBox->setChecked(false);
        FrequencyPlotDisplayFrame = new QFrame(FrequencyPage);
        FrequencyPlotDisplayFrame->setObjectName(QString::fromUtf8("FrequencyPlotDisplayFrame"));
        FrequencyPlotDisplayFrame->setGeometry(QRect(5, 5, 620, 290));
        FrequencyPlotDisplayFrame->setFrameShape(QFrame::NoFrame);
        FrequencyPlotDisplayFrame->setFrameShadow(QFrame::Plain);
        SpectrumTypeTab->addTab(FrequencyPage, QString());
        WaterfallPage = new QWidget();
        WaterfallPage->setObjectName(QString::fromUtf8("WaterfallPage"));
        textLabel1 = new QLabel(WaterfallPage);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setGeometry(QRect(5, 0, 85, 21));
        textLabel1->setWordWrap(false);
        WaterfallIntensityComboBox = new QComboBox(WaterfallPage);
        WaterfallIntensityComboBox->setObjectName(QString::fromUtf8("WaterfallIntensityComboBox"));
        WaterfallIntensityComboBox->setGeometry(QRect(90, 0, 121, 25));
        WaterfallMaximumIntensityWheel = new QwtWheel(WaterfallPage);
        WaterfallMaximumIntensityWheel->setObjectName(QString::fromUtf8("WaterfallMaximumIntensityWheel"));
        WaterfallMaximumIntensityWheel->setGeometry(QRect(215, 0, 335, 24));
        WaterfallMaximumIntensityWheel->setMouseTracking(true);
        WaterfallMaximumIntensityWheel->setFocusPolicy(Qt::WheelFocus);
        WaterfallMaximumIntensityWheel->setValid(true);
        WaterfallMaximumIntensityWheel->setTotalAngle(200);
        WaterfallMaximumIntensityWheel->setViewAngle(20);
        WaterfallMaximumIntensityWheel->setMass(0);
        WaterfallMaximumIntensityLabel = new QLabel(WaterfallPage);
        WaterfallMaximumIntensityLabel->setObjectName(QString::fromUtf8("WaterfallMaximumIntensityLabel"));
        WaterfallMaximumIntensityLabel->setGeometry(QRect(563, 3, 55, 21));
        WaterfallMaximumIntensityLabel->setWordWrap(false);
        WaterfallPlotDisplayFrame = new QFrame(WaterfallPage);
        WaterfallPlotDisplayFrame->setObjectName(QString::fromUtf8("WaterfallPlotDisplayFrame"));
        WaterfallPlotDisplayFrame->setGeometry(QRect(5, 30, 615, 295));
        WaterfallPlotDisplayFrame->setFrameShape(QFrame::NoFrame);
        WaterfallPlotDisplayFrame->setFrameShadow(QFrame::Plain);
        WaterfallMinimumIntensityWheel = new QwtWheel(WaterfallPage);
        WaterfallMinimumIntensityWheel->setObjectName(QString::fromUtf8("WaterfallMinimumIntensityWheel"));
        WaterfallMinimumIntensityWheel->setGeometry(QRect(215, 325, 335, 24));
        WaterfallMinimumIntensityWheel->setValid(true);
        WaterfallMinimumIntensityWheel->setTotalAngle(200);
        WaterfallMinimumIntensityWheel->setViewAngle(20);
        WaterfallMinimumIntensityWheel->setMass(0);
        WaterfallMinimumIntensityLabel = new QLabel(WaterfallPage);
        WaterfallMinimumIntensityLabel->setObjectName(QString::fromUtf8("WaterfallMinimumIntensityLabel"));
        WaterfallMinimumIntensityLabel->setGeometry(QRect(565, 325, 55, 20));
        WaterfallMinimumIntensityLabel->setWordWrap(false);
        WaterfallAutoScaleBtn = new QPushButton(WaterfallPage);
        WaterfallAutoScaleBtn->setObjectName(QString::fromUtf8("WaterfallAutoScaleBtn"));
        WaterfallAutoScaleBtn->setGeometry(QRect(0, 325, 135, 21));
        SpectrumTypeTab->addTab(WaterfallPage, QString());
        Waterfall3DPage = new QWidget();
        Waterfall3DPage->setObjectName(QString::fromUtf8("Waterfall3DPage"));
        textLabel1_2 = new QLabel(Waterfall3DPage);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setGeometry(QRect(5, 0, 85, 21));
        textLabel1_2->setWordWrap(false);
        Waterfall3DMaximumIntensityLabel = new QLabel(Waterfall3DPage);
        Waterfall3DMaximumIntensityLabel->setObjectName(QString::fromUtf8("Waterfall3DMaximumIntensityLabel"));
        Waterfall3DMaximumIntensityLabel->setGeometry(QRect(563, 3, 55, 21));
        Waterfall3DMaximumIntensityLabel->setWordWrap(false);
        Waterfall3DAutoScaleBtn = new QPushButton(Waterfall3DPage);
        Waterfall3DAutoScaleBtn->setObjectName(QString::fromUtf8("Waterfall3DAutoScaleBtn"));
        Waterfall3DAutoScaleBtn->setGeometry(QRect(0, 325, 135, 21));
        Waterfall3DMinimumIntensityWheel = new QwtWheel(Waterfall3DPage);
        Waterfall3DMinimumIntensityWheel->setObjectName(QString::fromUtf8("Waterfall3DMinimumIntensityWheel"));
        Waterfall3DMinimumIntensityWheel->setGeometry(QRect(215, 325, 335, 24));
        Waterfall3DMinimumIntensityWheel->setValid(true);
        Waterfall3DMinimumIntensityWheel->setTotalAngle(200);
        Waterfall3DMinimumIntensityWheel->setViewAngle(20);
        Waterfall3DMinimumIntensityWheel->setMass(0);
        Waterfall3DMinimumIntensityLabel = new QLabel(Waterfall3DPage);
        Waterfall3DMinimumIntensityLabel->setObjectName(QString::fromUtf8("Waterfall3DMinimumIntensityLabel"));
        Waterfall3DMinimumIntensityLabel->setGeometry(QRect(565, 325, 55, 20));
        Waterfall3DMinimumIntensityLabel->setWordWrap(false);
        Waterfall3DPlotDisplayFrame = new QFrame(Waterfall3DPage);
        Waterfall3DPlotDisplayFrame->setObjectName(QString::fromUtf8("Waterfall3DPlotDisplayFrame"));
        Waterfall3DPlotDisplayFrame->setGeometry(QRect(5, 30, 615, 295));
        Waterfall3DPlotDisplayFrame->setFrameShape(QFrame::NoFrame);
        Waterfall3DPlotDisplayFrame->setFrameShadow(QFrame::Plain);
        Waterfall3DIntensityComboBox = new QComboBox(Waterfall3DPage);
        Waterfall3DIntensityComboBox->setObjectName(QString::fromUtf8("Waterfall3DIntensityComboBox"));
        Waterfall3DIntensityComboBox->setGeometry(QRect(90, 0, 121, 25));
        Waterfall3DMaximumIntensityWheel = new QwtWheel(Waterfall3DPage);
        Waterfall3DMaximumIntensityWheel->setObjectName(QString::fromUtf8("Waterfall3DMaximumIntensityWheel"));
        Waterfall3DMaximumIntensityWheel->setGeometry(QRect(215, 0, 335, 24));
        Waterfall3DMaximumIntensityWheel->setMouseTracking(true);
        Waterfall3DMaximumIntensityWheel->setFocusPolicy(Qt::WheelFocus);
        Waterfall3DMaximumIntensityWheel->setValid(true);
        Waterfall3DMaximumIntensityWheel->setTotalAngle(200);
        Waterfall3DMaximumIntensityWheel->setViewAngle(20);
        Waterfall3DMaximumIntensityWheel->setMass(0);
        SpectrumTypeTab->addTab(Waterfall3DPage, QString());
        TimeDomainPage = new QWidget();
        TimeDomainPage->setObjectName(QString::fromUtf8("TimeDomainPage"));
        TimeDomainDisplayFrame = new QFrame(TimeDomainPage);
        TimeDomainDisplayFrame->setObjectName(QString::fromUtf8("TimeDomainDisplayFrame"));
        TimeDomainDisplayFrame->setGeometry(QRect(5, 5, 620, 340));
        TimeDomainDisplayFrame->setFrameShape(QFrame::NoFrame);
        TimeDomainDisplayFrame->setFrameShadow(QFrame::Plain);
        SpectrumTypeTab->addTab(TimeDomainPage, QString());
        ConstellationPage = new QWidget();
        ConstellationPage->setObjectName(QString::fromUtf8("ConstellationPage"));
        ConstellationDisplayFrame = new QFrame(ConstellationPage);
        ConstellationDisplayFrame->setObjectName(QString::fromUtf8("ConstellationDisplayFrame"));
        ConstellationDisplayFrame->setGeometry(QRect(5, 5, 620, 340));
        ConstellationDisplayFrame->setFrameShape(QFrame::StyledPanel);
        ConstellationDisplayFrame->setFrameShadow(QFrame::Raised);
        SpectrumTypeTab->addTab(ConstellationPage, QString());
        QWidget::setTabOrder(SpectrumTypeTab, MaxHoldCheckBox);
        QWidget::setTabOrder(MaxHoldCheckBox, MaxHoldResetBtn);
        QWidget::setTabOrder(MaxHoldResetBtn, MinHoldCheckBox);
        QWidget::setTabOrder(MinHoldCheckBox, MinHoldResetBtn);
        QWidget::setTabOrder(MinHoldResetBtn, PowerLineEdit);
        QWidget::setTabOrder(PowerLineEdit, AvgLineEdit);
        QWidget::setTabOrder(AvgLineEdit, UseRFFrequenciesCheckBox);
        QWidget::setTabOrder(UseRFFrequenciesCheckBox, WindowComboBox);
        QWidget::setTabOrder(WindowComboBox, FFTSizeComboBox);
        QWidget::setTabOrder(FFTSizeComboBox, WaterfallMaximumIntensityWheel);
        QWidget::setTabOrder(WaterfallMaximumIntensityWheel, WaterfallMinimumIntensityWheel);

        retranslateUi(SpectrumDisplayForm);
        QObject::connect(MaxHoldCheckBox, SIGNAL(toggled(bool)), SpectrumDisplayForm, SLOT(MaxHoldCheckBox_toggled(bool)));
        QObject::connect(MaxHoldResetBtn, SIGNAL(clicked()), SpectrumDisplayForm, SLOT(MaxHoldResetBtn_clicked()));
        QObject::connect(MinHoldCheckBox, SIGNAL(toggled(bool)), SpectrumDisplayForm, SLOT(MinHoldCheckBox_toggled(bool)));
        QObject::connect(MinHoldResetBtn, SIGNAL(clicked()), SpectrumDisplayForm, SLOT(MinHoldResetBtn_clicked()));
        QObject::connect(AvgLineEdit, SIGNAL(textChanged(QString)), SpectrumDisplayForm, SLOT(AvgLineEdit_textChanged(QString)));
        QObject::connect(PowerLineEdit, SIGNAL(textChanged(QString)), SpectrumDisplayForm, SLOT(PowerLineEdit_textChanged(QString)));
        QObject::connect(WindowComboBox, SIGNAL(activated(int)), SpectrumDisplayForm, SLOT(WindowTypeChanged(int)));
        QObject::connect(UseRFFrequenciesCheckBox, SIGNAL(toggled(bool)), SpectrumDisplayForm, SLOT(UseRFFrequenciesCB(bool)));
        QObject::connect(WaterfallMaximumIntensityWheel, SIGNAL(valueChanged(double)), SpectrumDisplayForm, SLOT(waterfallMaximumIntensityChangedCB(double)));
        QObject::connect(WaterfallMinimumIntensityWheel, SIGNAL(valueChanged(double)), SpectrumDisplayForm, SLOT(waterfallMinimumIntensityChangedCB(double)));
        QObject::connect(Waterfall3DMaximumIntensityWheel, SIGNAL(valueChanged(double)), SpectrumDisplayForm, SLOT(waterfall3DMaximumIntensityChangedCB(double)));
        QObject::connect(Waterfall3DMinimumIntensityWheel, SIGNAL(valueChanged(double)), SpectrumDisplayForm, SLOT(waterfall3DMinimumIntensityChangedCB(double)));
        QObject::connect(FFTSizeComboBox, SIGNAL(activated(QString)), SpectrumDisplayForm, SLOT(FFTComboBoxSelectedCB(QString)));
        QObject::connect(WaterfallAutoScaleBtn, SIGNAL(clicked()), SpectrumDisplayForm, SLOT(WaterfallAutoScaleBtnCB()));
        QObject::connect(Waterfall3DAutoScaleBtn, SIGNAL(clicked()), SpectrumDisplayForm, SLOT(Waterfall3DAutoScaleBtnCB()));
        QObject::connect(WaterfallIntensityComboBox, SIGNAL(activated(int)), SpectrumDisplayForm, SLOT(WaterfallIntensityColorTypeChanged(int)));
        QObject::connect(Waterfall3DIntensityComboBox, SIGNAL(activated(int)), SpectrumDisplayForm, SLOT(Waterfall3DIntensityColorTypeChanged(int)));

        SpectrumTypeTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SpectrumDisplayForm);
    } // setupUi

    void retranslateUi(QWidget *SpectrumDisplayForm)
    {
        SpectrumDisplayForm->setWindowTitle(QApplication::translate("SpectrumDisplayForm", "Spectrum Display", 0, QApplication::UnicodeUTF8));
        UseRFFrequenciesCheckBox->setText(QApplication::translate("SpectrumDisplayForm", "Display RF Frequencies", 0, QApplication::UnicodeUTF8));
        WindowComboBox->clear();
        WindowComboBox->insertItems(0, QStringList()
         << QApplication::translate("SpectrumDisplayForm", "Hamming", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Hann", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Blackman", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Rectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Kaiser", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Blackman-harris", 0, QApplication::UnicodeUTF8)
        );
        WindowLbl->setText(QApplication::translate("SpectrumDisplayForm", "Window:", 0, QApplication::UnicodeUTF8));
        FFTSizeLabel->setText(QApplication::translate("SpectrumDisplayForm", "FFT Size:", 0, QApplication::UnicodeUTF8));
        FFTSizeComboBox->clear();
        FFTSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SpectrumDisplayForm", "1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "2048", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "4096", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "8192", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "16384", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "32768", 0, QApplication::UnicodeUTF8)
        );
        PowerLineEdit->setText(QApplication::translate("SpectrumDisplayForm", "1", 0, QApplication::UnicodeUTF8));
        MinHoldCheckBox->setText(QApplication::translate("SpectrumDisplayForm", "Min Hold", 0, QApplication::UnicodeUTF8));
        AvgLabel->setText(QApplication::translate("SpectrumDisplayForm", "Average", 0, QApplication::UnicodeUTF8));
        MinHoldResetBtn->setText(QApplication::translate("SpectrumDisplayForm", "Reset", 0, QApplication::UnicodeUTF8));
        AvgLineEdit->setText(QApplication::translate("SpectrumDisplayForm", "0", 0, QApplication::UnicodeUTF8));
        PowerLabel->setText(QApplication::translate("SpectrumDisplayForm", "Power", 0, QApplication::UnicodeUTF8));
        MaxHoldResetBtn->setText(QApplication::translate("SpectrumDisplayForm", "Reset", 0, QApplication::UnicodeUTF8));
        MaxHoldCheckBox->setText(QApplication::translate("SpectrumDisplayForm", "Max Hold", 0, QApplication::UnicodeUTF8));
        SpectrumTypeTab->setTabText(SpectrumTypeTab->indexOf(FrequencyPage), QApplication::translate("SpectrumDisplayForm", "Frequency Display", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("SpectrumDisplayForm", "<font size=\"-2\">Intensity Display:</font>", 0, QApplication::UnicodeUTF8));
        WaterfallIntensityComboBox->clear();
        WaterfallIntensityComboBox->insertItems(0, QStringList()
         << QApplication::translate("SpectrumDisplayForm", "Color", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "White Hot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Black Hot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Incandescent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "User Defined", 0, QApplication::UnicodeUTF8)
        );
        WaterfallMaximumIntensityLabel->setText(QApplication::translate("SpectrumDisplayForm", "100 dB", 0, QApplication::UnicodeUTF8));
        WaterfallMinimumIntensityLabel->setText(QApplication::translate("SpectrumDisplayForm", "-100 dB", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        WaterfallAutoScaleBtn->setToolTip(QApplication::translate("SpectrumDisplayForm", "Scales the Intensity to the current data extremes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        WaterfallAutoScaleBtn->setText(QApplication::translate("SpectrumDisplayForm", "Auto Scale", 0, QApplication::UnicodeUTF8));
        SpectrumTypeTab->setTabText(SpectrumTypeTab->indexOf(WaterfallPage), QApplication::translate("SpectrumDisplayForm", "Waterfall Display", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("SpectrumDisplayForm", "<font size=\"-2\">Intensity Display:</font>", 0, QApplication::UnicodeUTF8));
        Waterfall3DMaximumIntensityLabel->setText(QApplication::translate("SpectrumDisplayForm", "100 dB", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Waterfall3DAutoScaleBtn->setToolTip(QApplication::translate("SpectrumDisplayForm", "Scales the Intensity to the current data extremes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Waterfall3DAutoScaleBtn->setText(QApplication::translate("SpectrumDisplayForm", "Auto Scale", 0, QApplication::UnicodeUTF8));
        Waterfall3DMinimumIntensityLabel->setText(QApplication::translate("SpectrumDisplayForm", "-100 dB", 0, QApplication::UnicodeUTF8));
        Waterfall3DIntensityComboBox->clear();
        Waterfall3DIntensityComboBox->insertItems(0, QStringList()
         << QApplication::translate("SpectrumDisplayForm", "Color", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "White Hot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Black Hot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "Incandescent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SpectrumDisplayForm", "User Defined", 0, QApplication::UnicodeUTF8)
        );
        SpectrumTypeTab->setTabText(SpectrumTypeTab->indexOf(Waterfall3DPage), QApplication::translate("SpectrumDisplayForm", "3D Waterfall Display", 0, QApplication::UnicodeUTF8));
        SpectrumTypeTab->setTabText(SpectrumTypeTab->indexOf(TimeDomainPage), QApplication::translate("SpectrumDisplayForm", "Time Domain Display", 0, QApplication::UnicodeUTF8));
        SpectrumTypeTab->setTabText(SpectrumTypeTab->indexOf(ConstellationPage), QApplication::translate("SpectrumDisplayForm", "Constellation Display", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SpectrumDisplayForm);
    } // retranslateUi

};

namespace Ui {
    class SpectrumDisplayForm: public Ui_SpectrumDisplayForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPECTRUMDISPLAYFORM_UI_H
