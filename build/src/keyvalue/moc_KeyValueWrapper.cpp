/****************************************************************************
** Meta object code from reading C++ file 'KeyValueWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/keyvalue/KeyValueWrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyValueWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeyValueWrapper_t {
    QByteArrayData data[18];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyValueWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyValueWrapper_t qt_meta_stringdata_KeyValueWrapper = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KeyValueWrapper"
QT_MOC_LITERAL(1, 16, 15), // "appendPlainText"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "message"
QT_MOC_LITERAL(4, 41, 10), // "setKeyText"
QT_MOC_LITERAL(5, 52, 3), // "txt"
QT_MOC_LITERAL(6, 56, 12), // "setValueText"
QT_MOC_LITERAL(7, 69, 18), // "createWidgetSignal"
QT_MOC_LITERAL(8, 88, 19), // "destroyWidgetSignal"
QT_MOC_LITERAL(9, 108, 27), // "destroyWidgetSignalBlocking"
QT_MOC_LITERAL(10, 136, 17), // "addToWindowSignal"
QT_MOC_LITERAL(11, 154, 6), // "window"
QT_MOC_LITERAL(12, 161, 3), // "row"
QT_MOC_LITERAL(13, 165, 6), // "column"
QT_MOC_LITERAL(14, 172, 16), // "createWidgetSlot"
QT_MOC_LITERAL(15, 189, 17), // "destroyWidgetSlot"
QT_MOC_LITERAL(16, 207, 15), // "widgetDestroyed"
QT_MOC_LITERAL(17, 223, 15) // "addToWindowSlot"

    },
    "KeyValueWrapper\0appendPlainText\0\0"
    "message\0setKeyText\0txt\0setValueText\0"
    "createWidgetSignal\0destroyWidgetSignal\0"
    "destroyWidgetSignalBlocking\0"
    "addToWindowSignal\0window\0row\0column\0"
    "createWidgetSlot\0destroyWidgetSlot\0"
    "widgetDestroyed\0addToWindowSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyValueWrapper[] = {

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
       6,    1,   75,    2, 0x06 /* Public */,
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
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
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

void KeyValueWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyValueWrapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appendPlainText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setKeyText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setValueText((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
            using _t = void (KeyValueWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::appendPlainText)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyValueWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::setKeyText)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyValueWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::setValueText)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KeyValueWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::createWidgetSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KeyValueWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::destroyWidgetSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KeyValueWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::destroyWidgetSignalBlocking)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KeyValueWrapper::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyValueWrapper::addToWindowSignal)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KeyValueWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KeyValueWrapper.data,
    qt_meta_data_KeyValueWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KeyValueWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyValueWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeyValueWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyValueWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KeyValueWrapper::appendPlainText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KeyValueWrapper::setKeyText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KeyValueWrapper::setValueText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KeyValueWrapper::createWidgetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KeyValueWrapper::destroyWidgetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KeyValueWrapper::destroyWidgetSignalBlocking()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KeyValueWrapper::addToWindowSignal(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
