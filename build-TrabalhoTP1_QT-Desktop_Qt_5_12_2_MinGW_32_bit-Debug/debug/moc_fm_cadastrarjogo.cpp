/****************************************************************************
** Meta object code from reading C++ file 'fm_cadastrarjogo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TrabalhoTP1_QT/fm_cadastrarjogo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fm_cadastrarjogo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fm_cadastrarJogo_t {
    QByteArrayData data[4];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fm_cadastrarJogo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fm_cadastrarJogo_t qt_meta_stringdata_fm_cadastrarJogo = {
    {
QT_MOC_LITERAL(0, 0, 16), // "fm_cadastrarJogo"
QT_MOC_LITERAL(1, 17, 28), // "on_btn_cadastrarJogo_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 21) // "on_btn_voltar_clicked"

    },
    "fm_cadastrarJogo\0on_btn_cadastrarJogo_clicked\0"
    "\0on_btn_voltar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fm_cadastrarJogo[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fm_cadastrarJogo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fm_cadastrarJogo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_cadastrarJogo_clicked(); break;
        case 1: _t->on_btn_voltar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject fm_cadastrarJogo::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_fm_cadastrarJogo.data,
    qt_meta_data_fm_cadastrarJogo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fm_cadastrarJogo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fm_cadastrarJogo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fm_cadastrarJogo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int fm_cadastrarJogo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
