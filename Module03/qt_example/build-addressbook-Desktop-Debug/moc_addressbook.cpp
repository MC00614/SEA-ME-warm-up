/****************************************************************************
** Meta object code from reading C++ file 'addressbook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addressbook/addressbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressBook_t {
    QByteArrayData data[13];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressBook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressBook_t qt_meta_stringdata_AddressBook = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AddressBook"
QT_MOC_LITERAL(1, 12, 10), // "addContact"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "submitContact"
QT_MOC_LITERAL(4, 38, 6), // "cancel"
QT_MOC_LITERAL(5, 45, 4), // "next"
QT_MOC_LITERAL(6, 50, 8), // "previous"
QT_MOC_LITERAL(7, 59, 11), // "editContact"
QT_MOC_LITERAL(8, 71, 13), // "removeContact"
QT_MOC_LITERAL(9, 85, 15), // "updateInterface"
QT_MOC_LITERAL(10, 101, 4), // "Mode"
QT_MOC_LITERAL(11, 106, 4), // "mode"
QT_MOC_LITERAL(12, 111, 11) // "findContact"

    },
    "AddressBook\0addContact\0\0submitContact\0"
    "cancel\0next\0previous\0editContact\0"
    "removeContact\0updateInterface\0Mode\0"
    "mode\0findContact"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressBook[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void AddressBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddressBook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addContact(); break;
        case 1: _t->submitContact(); break;
        case 2: _t->cancel(); break;
        case 3: _t->next(); break;
        case 4: _t->previous(); break;
        case 5: _t->editContact(); break;
        case 6: _t->removeContact(); break;
        case 7: _t->updateInterface((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 8: _t->findContact(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddressBook::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AddressBook.data,
    qt_meta_data_AddressBook,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddressBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBook.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddressBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
