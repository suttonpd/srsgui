/****************************************************************************
** Meta object code from reading C++ file 'WaterfallWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/waterfallplot/WaterfallWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WaterfallWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WaterfallWidget_t {
    QByteArrayData data[26];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaterfallWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaterfallWidget_t qt_meta_stringdata_WaterfallWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WaterfallWidget"
QT_MOC_LITERAL(1, 16, 11), // "customEvent"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "QEvent*"
QT_MOC_LITERAL(4, 37, 1), // "e"
QT_MOC_LITERAL(5, 39, 14), // "setWidgetTitle"
QT_MOC_LITERAL(6, 54, 5), // "title"
QT_MOC_LITERAL(7, 60, 13), // "setPlotXLabel"
QT_MOC_LITERAL(8, 74, 6), // "xLabel"
QT_MOC_LITERAL(9, 81, 13), // "setPlotYLabel"
QT_MOC_LITERAL(10, 95, 6), // "yLabel"
QT_MOC_LITERAL(11, 102, 17), // "setPlotXAxisRange"
QT_MOC_LITERAL(12, 120, 4), // "xMin"
QT_MOC_LITERAL(13, 125, 4), // "xMax"
QT_MOC_LITERAL(14, 130, 17), // "setPlotXAxisScale"
QT_MOC_LITERAL(15, 148, 17), // "setPlotYAxisScale"
QT_MOC_LITERAL(16, 166, 4), // "yMin"
QT_MOC_LITERAL(17, 171, 4), // "yMax"
QT_MOC_LITERAL(18, 176, 20), // "setSpectrogramXLabel"
QT_MOC_LITERAL(19, 197, 20), // "setSpectrogramYLabel"
QT_MOC_LITERAL(20, 218, 24), // "setSpectrogramXAxisRange"
QT_MOC_LITERAL(21, 243, 24), // "setSpectrogramYAxisRange"
QT_MOC_LITERAL(22, 268, 24), // "setSpectrogramZAxisScale"
QT_MOC_LITERAL(23, 293, 4), // "zMin"
QT_MOC_LITERAL(24, 298, 4), // "zMax"
QT_MOC_LITERAL(25, 303, 9) // "autoscale"

    },
    "WaterfallWidget\0customEvent\0\0QEvent*\0"
    "e\0setWidgetTitle\0title\0setPlotXLabel\0"
    "xLabel\0setPlotYLabel\0yLabel\0"
    "setPlotXAxisRange\0xMin\0xMax\0"
    "setPlotXAxisScale\0setPlotYAxisScale\0"
    "yMin\0yMax\0setSpectrogramXLabel\0"
    "setSpectrogramYLabel\0setSpectrogramXAxisRange\0"
    "setSpectrogramYAxisRange\0"
    "setSpectrogramZAxisScale\0zMin\0zMax\0"
    "autoscale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaterfallWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      11,    2,   91,    2, 0x0a /* Public */,
      14,    2,   96,    2, 0x0a /* Public */,
      15,    2,  101,    2, 0x0a /* Public */,
      18,    1,  106,    2, 0x0a /* Public */,
      19,    1,  109,    2, 0x0a /* Public */,
      20,    2,  112,    2, 0x0a /* Public */,
      21,    2,  117,    2, 0x0a /* Public */,
      22,    2,  122,    2, 0x0a /* Public */,
      25,    0,  127,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   16,   17,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   16,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   23,   24,
    QMetaType::Void,

       0        // eod
};

void WaterfallWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WaterfallWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->customEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: _t->setWidgetTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setPlotXLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setPlotYLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setPlotXAxisRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setPlotXAxisScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->setPlotYAxisScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->setSpectrogramXLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setSpectrogramYLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setSpectrogramXAxisRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->setSpectrogramYAxisRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->setSpectrogramZAxisScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->autoscale(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WaterfallWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_WaterfallWidget.data,
    qt_meta_data_WaterfallWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WaterfallWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaterfallWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaterfallWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WaterfallWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
