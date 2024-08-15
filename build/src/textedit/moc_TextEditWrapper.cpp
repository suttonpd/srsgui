/****************************************************************************
** Meta object code from reading C++ file 'TextEditWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/textedit/TextEditWrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextEditWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextEditWrapper_t {
    QByteArrayData data[18];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextEditWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextEditWrapper_t qt_meta_stringdata_TextEditWrapper = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TextEditWrapper"
QT_MOC_LITERAL(1, 16, 15), // "appendPlainText"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "message"
QT_MOC_LITERAL(4, 41, 12), // "setPlainText"
QT_MOC_LITERAL(5, 54, 14), // "setWidgetTitle"
QT_MOC_LITERAL(6, 69, 5), // "title"
QT_MOC_LITERAL(7, 75, 18), // "createWidgetSignal"
QT_MOC_LITERAL(8, 94, 19), // "destroyWidgetSignal"
QT_MOC_LITERAL(9, 114, 27), // "destroyWidgetSignalBlocking"
QT_MOC_LITERAL(10, 142, 17), // "addToWindowSignal"
QT_MOC_LITERAL(11, 160, 6), // "window"
QT_MOC_LITERAL(12, 167, 3), // "row"
QT_MOC_LITERAL(13, 171, 6), // "column"
QT_MOC_LITERAL(14, 178, 16), // "createWidgetSlot"
QT_MOC_LITERAL(15, 195, 17), // "destroyWidgetSlot"
QT_MOC_LITERAL(16, 213, 15), // "widgetDestroyed"
QT_MOC_LITERAL(17, 229, 15) // "addToWindowSlot"

    },
    "TextEditWrapper\0appendPlainText\0\0"
    "message\0setPlainText\0setWidgetTitle\0"
    "title\0createWidgetSignal\0destroyWidgetSignal\0"
    "destroyWidgetSignalBlocking\0"
    "addToWindowSignal\0window\0row\0column\0"
    "createWidgetSlot\0destroyWidgetSlot\0"
    "widgetDestroyed\0addToWindowSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEditWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       7,    0,   78,    2, 0x06 /* Public */,
       8,    0,   79,    2, 0x06 /* Public */,
       9,    0,   80,    2, 0x06 /* Public */,
      10,    3,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    0,   90,    2, 0x0a /* Public */,
      17,    3,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   11,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   11,   12,   13,

       0        // eod
};

void TextEditWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextEditWrapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appendPlainText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setPlainText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setWidgetTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->createWidgetSignal(); break;
        case 4: _t->destroyWidgetSignal(); break;
        case 5: _t->destroyWidgetSignalBlocking(); break;
        case 6: _t->addToWindowSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->createWidgetSlot(); break;
        case 8: _t->destroyWidgetSlot(); break;
        case 9: _t->widgetDestroyed(); break;
        case 10: _t->addToWindowSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextEditWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::appendPlainText)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TextEditWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::setPlainText)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TextEditWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::setWidgetTitle)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TextEditWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::createWidgetSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TextEditWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::destroyWidgetSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TextEditWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::destroyWidgetSignalBlocking)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TextEditWrapper::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEditWrapper::addToWindowSignal)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextEditWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TextEditWrapper.data,
    qt_meta_data_TextEditWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextEditWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEditWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEditWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TextEditWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void TextEditWrapper::appendPlainText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TextEditWrapper::setPlainText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TextEditWrapper::setWidgetTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TextEditWrapper::createWidgetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TextEditWrapper::destroyWidgetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TextEditWrapper::destroyWidgetSignalBlocking()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TextEditWrapper::addToWindowSignal(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
