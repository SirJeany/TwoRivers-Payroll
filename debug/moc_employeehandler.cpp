/****************************************************************************
** Meta object code from reading C++ file 'employeehandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../employeehandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employeehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmployeeHandler_t {
    QByteArrayData data[24];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmployeeHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmployeeHandler_t qt_meta_stringdata_EmployeeHandler = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 11),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 5),
QT_MOC_LITERAL(4, 35, 5),
QT_MOC_LITERAL(5, 41, 1),
QT_MOC_LITERAL(6, 43, 2),
QT_MOC_LITERAL(7, 46, 2),
QT_MOC_LITERAL(8, 49, 2),
QT_MOC_LITERAL(9, 52, 3),
QT_MOC_LITERAL(10, 56, 3),
QT_MOC_LITERAL(11, 60, 1),
QT_MOC_LITERAL(12, 62, 4),
QT_MOC_LITERAL(13, 67, 5),
QT_MOC_LITERAL(14, 73, 11),
QT_MOC_LITERAL(15, 85, 8),
QT_MOC_LITERAL(16, 94, 14),
QT_MOC_LITERAL(17, 109, 6),
QT_MOC_LITERAL(18, 116, 8),
QT_MOC_LITERAL(19, 125, 13),
QT_MOC_LITERAL(20, 139, 7),
QT_MOC_LITERAL(21, 147, 6),
QT_MOC_LITERAL(22, 154, 7),
QT_MOC_LITERAL(23, 162, 13)
    },
    "EmployeeHandler\0addEmployee\0\0fname\0"
    "lname\0g\0ar\0br\0dw\0rpd\0inc\0b\0debt\0notes\0"
    "writeToFile\0fileName\0writeToXMLFile\0"
    "doRead\0filename\0doSimpleWrite\0empList\0"
    "gender\0getList\0EmployeeList*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmployeeHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,   11,   44,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,
      16,    1,   70,    2, 0x0a /* Public */,
      17,    1,   73,    2, 0x0a /* Public */,
      19,    3,   76,    2, 0x0a /* Public */,
      22,    0,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Bool, QMetaType::QString,   18,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,   18,   20,   21,
    0x80000000 | 23,

       0        // eod
};

void EmployeeHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmployeeHandler *_t = static_cast<EmployeeHandler *>(_o);
        switch (_id) {
        case 0: _t->addEmployee((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< QString(*)>(_a[11]))); break;
        case 1: { bool _r = _t->writeToFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->writeToXMLFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->doRead((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->doSimpleWrite((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { EmployeeList* _r = _t->getList();
            if (_a[0]) *reinterpret_cast< EmployeeList**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject EmployeeHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EmployeeHandler.data,
      qt_meta_data_EmployeeHandler,  qt_static_metacall, 0, 0}
};


const QMetaObject *EmployeeHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmployeeHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmployeeHandler.stringdata))
        return static_cast<void*>(const_cast< EmployeeHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int EmployeeHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
