/****************************************************************************
** Meta object code from reading C++ file 'petmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PETCollecter/petmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'petmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PETMainWindow_t {
    QByteArrayData data[15];
    char stringdata[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PETMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PETMainWindow_t qt_meta_stringdata_PETMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 12),
QT_MOC_LITERAL(4, 40, 28),
QT_MOC_LITERAL(5, 69, 14),
QT_MOC_LITERAL(6, 84, 15),
QT_MOC_LITERAL(7, 100, 13),
QT_MOC_LITERAL(8, 114, 28),
QT_MOC_LITERAL(9, 143, 30),
QT_MOC_LITERAL(10, 174, 28),
QT_MOC_LITERAL(11, 203, 29),
QT_MOC_LITERAL(12, 233, 28),
QT_MOC_LITERAL(13, 262, 27),
QT_MOC_LITERAL(14, 290, 26)
    },
    "PETMainWindow\0ReadTcpData\0\0ReadTcpError\0"
    "QAbstractSocket::SocketError\0"
    "CollectTimeout\0ProgressTimeout\0"
    "SetStateLabel\0on_pushButtonConnect_clicked\0"
    "on_pushButtonInitClock_clicked\0"
    "on_pushButtonPoweron_clicked\0"
    "on_pushButtonPoweroff_clicked\0"
    "on_pushButtonCollect_clicked\0"
    "on_pushButtonCancel_clicked\0"
    "on_pushButtonCAddr_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PETMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    1,   75,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    2,   80,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PETMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PETMainWindow *_t = static_cast<PETMainWindow *>(_o);
        switch (_id) {
        case 0: _t->ReadTcpData(); break;
        case 1: _t->ReadTcpError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->CollectTimeout(); break;
        case 3: _t->ProgressTimeout(); break;
        case 4: _t->SetStateLabel((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->on_pushButtonConnect_clicked(); break;
        case 6: _t->on_pushButtonInitClock_clicked(); break;
        case 7: _t->on_pushButtonPoweron_clicked(); break;
        case 8: _t->on_pushButtonPoweroff_clicked(); break;
        case 9: _t->on_pushButtonCollect_clicked(); break;
        case 10: _t->on_pushButtonCancel_clicked(); break;
        case 11: _t->on_pushButtonCAddr_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject PETMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PETMainWindow.data,
      qt_meta_data_PETMainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *PETMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PETMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PETMainWindow.stringdata))
        return static_cast<void*>(const_cast< PETMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PETMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE