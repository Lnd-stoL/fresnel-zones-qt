/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtFresnelZones/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 22),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 20),
QT_MOC_LITERAL(4, 56, 23),
QT_MOC_LITERAL(5, 80, 27),
QT_MOC_LITERAL(6, 108, 5),
QT_MOC_LITERAL(7, 114, 18),
QT_MOC_LITERAL(8, 133, 18),
QT_MOC_LITERAL(9, 152, 27),
QT_MOC_LITERAL(10, 180, 22),
QT_MOC_LITERAL(11, 203, 22),
QT_MOC_LITERAL(12, 226, 15),
QT_MOC_LITERAL(13, 242, 15)
    },
    "MainWindow\0btnPressed_XDependence\0\0"
    "btnPressed_ZonePlate\0btnPressed_FresnelZones\0"
    "intensity_WaveLengthChanged\0value\0"
    "intensity_xChanged\0intensity_hChanged\0"
    "intensity_lambdaSpinChanged\0"
    "intensity_xSpinChanged\0intensity_hSpinChanged\0"
    "intensity_xMode\0intensity_hMode\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    1,   72,    2, 0x08,
       7,    1,   75,    2, 0x08,
       8,    1,   78,    2, 0x08,
       9,    1,   81,    2, 0x08,
      10,    1,   84,    2, 0x08,
      11,    1,   87,    2, 0x08,
      12,    0,   90,    2, 0x08,
      13,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->btnPressed_XDependence(); break;
        case 1: _t->btnPressed_ZonePlate(); break;
        case 2: _t->btnPressed_FresnelZones(); break;
        case 3: _t->intensity_WaveLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->intensity_xChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->intensity_hChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->intensity_lambdaSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->intensity_xSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->intensity_hSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->intensity_xMode(); break;
        case 10: _t->intensity_hMode(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
