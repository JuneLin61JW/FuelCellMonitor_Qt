/****************************************************************************
** Meta object code from reading C++ file 'write_data.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../write_data.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'write_data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_write_data_t {
    QByteArrayData data[14];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_write_data_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_write_data_t qt_meta_stringdata_write_data = {
    {
QT_MOC_LITERAL(0, 0, 10), // "write_data"
QT_MOC_LITERAL(1, 11, 20), // "on_DCF_WRITE_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 40), // "on_projectConfig_cbx_currentI..."
QT_MOC_LITERAL(4, 74, 5), // "index"
QT_MOC_LITERAL(5, 80, 23), // "on_check_module_clicked"
QT_MOC_LITERAL(6, 104, 22), // "on_read_module_clicked"
QT_MOC_LITERAL(7, 127, 17), // "onGetProtocolData"
QT_MOC_LITERAL(8, 145, 12), // "VCI_CAN_OBJ*"
QT_MOC_LITERAL(9, 158, 3), // "vci"
QT_MOC_LITERAL(10, 162, 5), // "dwRel"
QT_MOC_LITERAL(11, 168, 7), // "channel"
QT_MOC_LITERAL(12, 176, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(13, 201, 23) // "on_pushButton_9_clicked"

    },
    "write_data\0on_DCF_WRITE_clicked\0\0"
    "on_projectConfig_cbx_currentIndexChanged\0"
    "index\0on_check_module_clicked\0"
    "on_read_module_clicked\0onGetProtocolData\0"
    "VCI_CAN_OBJ*\0vci\0dwRel\0channel\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_write_data[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    3,   55,    2, 0x08 /* Private */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::UInt, QMetaType::UInt,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void write_data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<write_data *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_DCF_WRITE_clicked(); break;
        case 1: _t->on_projectConfig_cbx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_check_module_clicked(); break;
        case 3: _t->on_read_module_clicked(); break;
        case 4: _t->onGetProtocolData((*reinterpret_cast< VCI_CAN_OBJ*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->on_pushButton_10_clicked(); break;
        case 6: _t->on_pushButton_9_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject write_data::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_write_data.data,
    qt_meta_data_write_data,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *write_data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *write_data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_write_data.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int write_data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
