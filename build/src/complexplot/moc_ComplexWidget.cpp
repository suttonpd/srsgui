/****************************************************************************
** Meta object code from reading C++ file 'ComplexWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/complexplot/ComplexWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComplexWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComplexWidget_t {
    QByteArrayData data[18];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComplexWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComplexWidget_t qt_meta_stringdata_ComplexWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ComplexWidget"
QT_MOC_LITERAL(1, 14, 11), // "customEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "QEvent*"
QT_MOC_LITERAL(4, 35, 1), // "e"
QT_MOC_LITERAL(5, 37, 14), // "setWidgetTitle"
QT_MOC_LITERAL(6, 52, 5), // "title"
QT_MOC_LITERAL(7, 58, 19), // "setWidgetXAxisScale"
QT_MOC_LITERAL(8, 78, 2), // "id"
QT_MOC_LITERAL(9, 81, 4), // "xMin"
QT_MOC_LITERAL(10, 86, 4), // "xMax"
QT_MOC_LITERAL(11, 91, 19), // "setWidgetYAxisScale"
QT_MOC_LITERAL(12, 111, 4), // "yMin"
QT_MOC_LITERAL(13, 116, 4), // "yMax"
QT_MOC_LITERAL(14, 121, 23), // "setWidgetXAxisAutoScale"
QT_MOC_LITERAL(15, 145, 2), // "on"
QT_MOC_LITERAL(16, 148, 23), // "setWidgetYAxisAutoScale"
QT_MOC_LITERAL(17, 172, 19) // "setWidgetXAxisRange"

    },
    "ComplexWidget\0customEvent\0\0QEvent*\0e\0"
    "setWidgetTitle\0title\0setWidgetXAxisScale\0"
    "id\0xMin\0xMax\0setWidgetYAxisScale\0yMin\0"
    "yMax\0setWidgetXAxisAutoScale\0on\0"
    "setWidgetYAxisAutoScale\0setWidgetXAxisRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComplexWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       7,    3,   55,    2, 0x0a /* Public */,
      11,    3,   62,    2, 0x0a /* Public */,
      14,    2,   69,    2, 0x0a /* Public */,
      16,    2,   74,    2, 0x0a /* Public */,
      17,    2,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    8,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    9,   10,

       0        // eod
};

void ComplexWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComplexWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->customEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: _t->setWidgetTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setWidgetXAxisScale((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->setWidgetYAxisScale((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->setWidgetXAxisAutoScale((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setWidgetYAxisAutoScale((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setWidgetXAxisRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComplexWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ComplexWidget.data,
    qt_meta_data_ComplexWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComplexWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComplexWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComplexWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ComplexWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
