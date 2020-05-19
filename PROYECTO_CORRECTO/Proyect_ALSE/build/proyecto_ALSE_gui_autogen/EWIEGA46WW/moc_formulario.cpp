/****************************************************************************
** Meta object code from reading C++ file 'formulario.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../formulario.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formulario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_formulario_t {
    QByteArrayData data[21];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formulario_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formulario_t qt_meta_stringdata_formulario = {
    {
QT_MOC_LITERAL(0, 0, 10), // "formulario"
QT_MOC_LITERAL(1, 11, 18), // "enviar_Datostiempo"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "prueba"
QT_MOC_LITERAL(4, 38, 11), // "cedula_paci"
QT_MOC_LITERAL(5, 50, 11), // "reciboDatos"
QT_MOC_LITERAL(6, 62, 6), // "string"
QT_MOC_LITERAL(7, 69, 1), // "f"
QT_MOC_LITERAL(8, 71, 1), // "d"
QT_MOC_LITERAL(9, 73, 20), // "on_iniciar_f_clicked"
QT_MOC_LITERAL(10, 94, 18), // "on_salir_f_clicked"
QT_MOC_LITERAL(11, 113, 23), // "on_nombre_f_textChanged"
QT_MOC_LITERAL(12, 137, 4), // "arg1"
QT_MOC_LITERAL(13, 142, 25), // "on_apellido_f_textChanged"
QT_MOC_LITERAL(14, 168, 20), // "on_doc_f_textChanged"
QT_MOC_LITERAL(15, 189, 22), // "on_fecha_f_textChanged"
QT_MOC_LITERAL(16, 212, 26), // "on_direccion_f_textChanged"
QT_MOC_LITERAL(17, 239, 22), // "on_nivel_f_textChanged"
QT_MOC_LITERAL(18, 262, 18), // "on__time1m_clicked"
QT_MOC_LITERAL(19, 281, 18), // "on__time2m_clicked"
QT_MOC_LITERAL(20, 300, 18) // "on__time30_clicked"

    },
    "formulario\0enviar_Datostiempo\0\0prueba\0"
    "cedula_paci\0reciboDatos\0string\0f\0d\0"
    "on_iniciar_f_clicked\0on_salir_f_clicked\0"
    "on_nombre_f_textChanged\0arg1\0"
    "on_apellido_f_textChanged\0"
    "on_doc_f_textChanged\0on_fecha_f_textChanged\0"
    "on_direccion_f_textChanged\0"
    "on_nivel_f_textChanged\0on__time1m_clicked\0"
    "on__time2m_clicked\0on__time30_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formulario[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   84,    2, 0x0a /* Public */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    1,   91,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      15,    1,  100,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void formulario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formulario *_t = static_cast<formulario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enviar_Datostiempo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->reciboDatos((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_iniciar_f_clicked(); break;
        case 3: _t->on_salir_f_clicked(); break;
        case 4: _t->on_nombre_f_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_apellido_f_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_doc_f_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_fecha_f_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_direccion_f_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_nivel_f_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on__time1m_clicked(); break;
        case 11: _t->on__time2m_clicked(); break;
        case 12: _t->on__time30_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (formulario::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&formulario::enviar_Datostiempo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject formulario::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_formulario.data,
      qt_meta_data_formulario,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *formulario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formulario::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_formulario.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int formulario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void formulario::enviar_Datostiempo(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
