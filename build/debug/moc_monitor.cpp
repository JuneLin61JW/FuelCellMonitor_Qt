/****************************************************************************
** Meta object code from reading C++ file 'monitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../monitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_monitor_t {
    QByteArrayData data[8];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_monitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_monitor_t qt_meta_stringdata_monitor = {
    {
QT_MOC_LITERAL(0, 0, 7), // "monitor"
QT_MOC_LITERAL(1, 8, 17), // "onGetProtocolData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "VCI_CAN_OBJ*"
QT_MOC_LITERAL(4, 40, 3), // "vci"
QT_MOC_LITERAL(5, 44, 5), // "dwRel"
QT_MOC_LITERAL(6, 50, 7), // "channel"
QT_MOC_LITERAL(7, 58, 8) // "showData"

    },
    "monitor\0onGetProtocolData\0\0VCI_CAN_OBJ*\0"
    "vci\0dwRel\0channel\0showData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_monitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x08 /* Private */,
       7,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt,    4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void monitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<monitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onGetProtocolData((*reinterpret_cast< VCI_CAN_OBJ*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->showData(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject monitor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_monitor.data,
    qt_meta_data_monitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *monitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *monitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_monitor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int monitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
