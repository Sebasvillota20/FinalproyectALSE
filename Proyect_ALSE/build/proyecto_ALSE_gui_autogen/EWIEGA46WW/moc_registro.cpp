/****************************************************************************
** Meta object code from reading C++ file 'registro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../registro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_registro_t {
    QByteArrayData data[10];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_registro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_registro_t qt_meta_stringdata_registro = {
    {
QT_MOC_LITERAL(0, 0, 8), // "registro"
QT_MOC_LITERAL(1, 9, 21), // "on_cancelar_r_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "on_registro_r_clicked"
QT_MOC_LITERAL(4, 54, 27), // "on_nombre_r_editingFinished"
QT_MOC_LITERAL(5, 82, 25), // "on_apellido_r_textChanged"
QT_MOC_LITERAL(6, 108, 4), // "arg1"
QT_MOC_LITERAL(7, 113, 24), // "on_pasword_r_textChanged"
QT_MOC_LITERAL(8, 138, 22), // "on_fecha_r_textChanged"
QT_MOC_LITERAL(9, 161, 20) // "on_doc_r_textChanged"

    },
    "registro\0on_cancelar_r_clicked\0\0"
    "on_registro_r_clicked\0on_nombre_r_editingFinished\0"
    "on_apellido_r_textChanged\0arg1\0"
    "on_pasword_r_textChanged\0"
    "on_fecha_r_textChanged\0on_doc_r_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_registro[] = {

 // content:
       7,       // revision
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
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void registro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        registro *_t = static_cast<registro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cancelar_r_clicked(); break;
        case 1: _t->on_registro_r_clicked(); break;
        case 2: _t->on_nombre_r_editingFinished(); break;
        case 3: _t->on_apellido_r_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pasword_r_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_fecha_r_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_doc_r_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject registro::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_registro.data,
      qt_meta_data_registro,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *registro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *registro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_registro.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int registro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
