/****************************************************************************
** Meta object code from reading C++ file 'RealWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/realplot/RealWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RealWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RealWidget_t {
    QByteArrayData data[20];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RealWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RealWidget_t qt_meta_stringdata_RealWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RealWidget"
QT_MOC_LITERAL(1, 11, 11), // "customEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "QEvent*"
QT_MOC_LITERAL(4, 32, 1), // "e"
QT_MOC_LITERAL(5, 34, 14), // "setWidgetTitle"
QT_MOC_LITERAL(6, 49, 5), // "title"
QT_MOC_LITERAL(7, 55, 19), // "setWidgetAxisLabels"
QT_MOC_LITERAL(8, 75, 6), // "xLabel"
QT_MOC_LITERAL(9, 82, 6), // "yLabel"
QT_MOC_LITERAL(10, 89, 19), // "setWidgetXAxisScale"
QT_MOC_LITERAL(11, 109, 4), // "xMin"
QT_MOC_LITERAL(12, 114, 4), // "xMax"
QT_MOC_LITERAL(13, 119, 19), // "setWidgetYAxisScale"
QT_MOC_LITERAL(14, 139, 4), // "yMin"
QT_MOC_LITERAL(15, 144, 4), // "yMax"
QT_MOC_LITERAL(16, 149, 23), // "setWidgetXAxisAutoScale"
QT_MOC_LITERAL(17, 173, 2), // "on"
QT_MOC_LITERAL(18, 176, 23), // "setWidgetYAxisAutoScale"
QT_MOC_LITERAL(19, 200, 19) // "setWidgetXAxisRange"

    },
    "RealWidget\0customEvent\0\0QEvent*\0e\0"
    "setWidgetTitle\0title\0setWidgetAxisLabels\0"
    "xLabel\0yLabel\0setWidgetXAxisScale\0"
    "xMin\0xMax\0setWidgetYAxisScale\0yMin\0"
    "yMax\0setWidgetXAxisAutoScale\0on\0"
    "setWidgetYAxisAutoScale\0setWidgetXAxisRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RealWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    2,   60,    2, 0x0a /* Public */,
      10,    2,   65,    2, 0x0a /* Public */,
      13,    2,   70,    2, 0x0a /* Public */,
      16,    1,   75,    2, 0x0a /* Public */,
      18,    1,   78,    2, 0x0a /* Public */,
      19,    2,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   11,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   14,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   11,   12,

       0        // eod
};

void RealWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RealWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->customEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: _t->setWidgetTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setWidgetAxisLabels((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->setWidgetXAxisScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->setWidgetYAxisScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setWidgetXAxisAutoScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setWidgetYAxisAutoScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setWidgetXAxisRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RealWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_RealWidget.data,
    qt_meta_data_RealWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RealWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RealWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RealWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int RealWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
