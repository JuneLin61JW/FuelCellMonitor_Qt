/****************************************************************************
** Meta object code from reading C++ file 'bootloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bootloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bootloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bootloader_t {
    QByteArrayData data[10];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bootloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bootloader_t qt_meta_stringdata_bootloader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "bootloader"
QT_MOC_LITERAL(1, 11, 23), // "on_openDocument_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_Download_Btn_clicked"
QT_MOC_LITERAL(4, 60, 20), // "on_Erase_Btn_clicked"
QT_MOC_LITERAL(5, 81, 20), // "on_Check_Btn_clicked"
QT_MOC_LITERAL(6, 102, 25), // "on_ExcuteType_Btn_clicked"
QT_MOC_LITERAL(7, 128, 26), // "on_SetBaudrate_Btn_clicked"
QT_MOC_LITERAL(8, 155, 26), // "on_textBrowser_textChanged"
QT_MOC_LITERAL(9, 182, 29) // "on_UpdateFirmware_Btn_clicked"

    },
    "bootloader\0on_openDocument_clicked\0\0"
    "on_Download_Btn_clicked\0on_Erase_Btn_clicked\0"
    "on_Check_Btn_clicked\0on_ExcuteType_Btn_clicked\0"
    "on_SetBaudrate_Btn_clicked\0"
    "on_textBrowser_textChanged\0"
    "on_UpdateFirmware_Btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bootloader[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void bootloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bootloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openDocument_clicked(); break;
        case 1: _t->on_Download_Btn_clicked(); break;
        case 2: _t->on_Erase_Btn_clicked(); break;
        case 3: _t->on_Check_Btn_clicked(); break;
        case 4: _t->on_ExcuteType_Btn_clicked(); break;
        case 5: _t->on_SetBaudrate_Btn_clicked(); break;
        case 6: _t->on_textBrowser_textChanged(); break;
        case 7: _t->on_UpdateFirmware_Btn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject bootloader::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_bootloader.data,
    qt_meta_data_bootloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *bootloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bootloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bootloader.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int bootloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
