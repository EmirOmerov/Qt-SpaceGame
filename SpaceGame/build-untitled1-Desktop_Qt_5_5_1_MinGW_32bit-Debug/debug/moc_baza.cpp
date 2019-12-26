/****************************************************************************
** Meta object code from reading C++ file 'baza.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled1/baza.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baza.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Baza_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Baza_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Baza_t qt_meta_stringdata_Baza = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Baza"
QT_MOC_LITERAL(1, 5, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "on_btnEdit_clicked"
QT_MOC_LITERAL(4, 43, 20), // "on_btnDelete_clicked"
QT_MOC_LITERAL(5, 64, 18), // "on_table_activated"
QT_MOC_LITERAL(6, 83, 5) // "index"

    },
    "Baza\0on_btnAdd_clicked\0\0on_btnEdit_clicked\0"
    "on_btnDelete_clicked\0on_table_activated\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Baza[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void Baza::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Baza *_t = static_cast<Baza *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnEdit_clicked(); break;
        case 2: _t->on_btnDelete_clicked(); break;
        case 3: _t->on_table_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Baza::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Baza.data,
      qt_meta_data_Baza,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Baza::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Baza::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Baza.stringdata0))
        return static_cast<void*>(const_cast< Baza*>(this));
    return QDialog::qt_metacast(_clname);
}

int Baza::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
