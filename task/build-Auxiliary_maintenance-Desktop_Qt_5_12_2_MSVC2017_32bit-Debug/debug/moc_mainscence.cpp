/****************************************************************************
** Meta object code from reading C++ file 'mainscence.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Auxiliary_maintenance/mainscence.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainscence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainscence_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainscence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainscence_t qt_meta_stringdata_mainscence = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainscence"
QT_MOC_LITERAL(1, 11, 25), // "send_jobnum_main_to_pinfo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "selectitems1"
QT_MOC_LITERAL(4, 51, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 68, 10), // "get_jobnum"
QT_MOC_LITERAL(6, 79, 7), // "get_job"
QT_MOC_LITERAL(7, 87, 16), // "get_personal_inf"
QT_MOC_LITERAL(8, 104, 23) // "get_modify_personal_inf"

    },
    "mainscence\0send_jobnum_main_to_pinfo\0"
    "\0selectitems1\0QTreeWidgetItem*\0"
    "get_jobnum\0get_job\0get_personal_inf\0"
    "get_modify_personal_inf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainscence[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   47,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void mainscence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainscence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_jobnum_main_to_pinfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->selectitems1((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->get_jobnum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->get_job((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->get_personal_inf((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->get_modify_personal_inf((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mainscence::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainscence::send_jobnum_main_to_pinfo)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mainscence::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_mainscence.data,
    qt_meta_data_mainscence,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainscence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainscence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainscence.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainscence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mainscence::send_jobnum_main_to_pinfo(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
