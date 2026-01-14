/****************************************************************************
** Meta object code from reading C++ file 'mainguimanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainguimanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainguimanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainGuiManager_t {
    QByteArrayData data[11];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainGuiManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainGuiManager_t qt_meta_stringdata_MainGuiManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainGuiManager"
QT_MOC_LITERAL(1, 15, 11), // "dataChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "onGetData"
QT_MOC_LITERAL(4, 38, 9), // "NetResult"
QT_MOC_LITERAL(5, 48, 3), // "res"
QT_MOC_LITERAL(6, 52, 10), // "onPostData"
QT_MOC_LITERAL(7, 63, 4), // "send"
QT_MOC_LITERAL(8, 68, 7), // "message"
QT_MOC_LITERAL(9, 76, 11), // "getMessages"
QT_MOC_LITERAL(10, 88, 4) // "data"

    },
    "MainGuiManager\0dataChanged\0\0onGetData\0"
    "NetResult\0res\0onPostData\0send\0message\0"
    "getMessages\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainGuiManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x02 /* Public */,
       9,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant,    8,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MainGuiManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainGuiManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->onGetData((*reinterpret_cast< NetResult(*)>(_a[1]))); break;
        case 2: _t->onPostData((*reinterpret_cast< NetResult(*)>(_a[1]))); break;
        case 3: _t->send((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 4: _t->getMessages(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainGuiManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainGuiManager::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainGuiManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MainGuiManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainGuiManager.data,
    qt_meta_data_MainGuiManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainGuiManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainGuiManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainGuiManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainGuiManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainGuiManager::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
