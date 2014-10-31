/****************************************************************************
** Meta object code from reading C++ file 'intensitygraphwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtFresnelZones/intensitygraphwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intensitygraphwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IntensityGraphWindow_t {
    QByteArrayData data[13];
    char stringdata[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_IntensityGraphWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_IntensityGraphWindow_t qt_meta_stringdata_IntensityGraphWindow = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 19),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 24),
QT_MOC_LITERAL(4, 67, 5),
QT_MOC_LITERAL(5, 73, 25),
QT_MOC_LITERAL(6, 99, 25),
QT_MOC_LITERAL(7, 125, 15),
QT_MOC_LITERAL(8, 141, 22),
QT_MOC_LITERAL(9, 164, 23),
QT_MOC_LITERAL(10, 188, 23),
QT_MOC_LITERAL(11, 212, 17),
QT_MOC_LITERAL(12, 230, 20)
    },
    "IntensityGraphWindow\0button_Back_Pressed\0"
    "\0slider_xDistance_Changed\0value\0"
    "slider_WaveLength_Changed\0"
    "slider_HoleRadius_Changed\0slider_Released\0"
    "spin_xDistance_Changed\0spin_WaveLength_Changed\0"
    "spin_HoleRadius_Changed\0radio_xDependance\0"
    "radio_holeDependance\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntensityGraphWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    1,   65,    2, 0x08,
       5,    1,   68,    2, 0x08,
       6,    1,   71,    2, 0x08,
       7,    0,   74,    2, 0x08,
       8,    1,   75,    2, 0x08,
       9,    1,   78,    2, 0x08,
      10,    1,   81,    2, 0x08,
      11,    0,   84,    2, 0x08,
      12,    0,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IntensityGraphWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IntensityGraphWindow *_t = static_cast<IntensityGraphWindow *>(_o);
        switch (_id) {
        case 0: _t->button_Back_Pressed(); break;
        case 1: _t->slider_xDistance_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slider_WaveLength_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slider_HoleRadius_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slider_Released(); break;
        case 5: _t->spin_xDistance_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->spin_WaveLength_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->spin_HoleRadius_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->radio_xDependance(); break;
        case 9: _t->radio_holeDependance(); break;
        default: ;
        }
    }
}

const QMetaObject IntensityGraphWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_IntensityGraphWindow.data,
      qt_meta_data_IntensityGraphWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *IntensityGraphWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntensityGraphWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntensityGraphWindow.stringdata))
        return static_cast<void*>(const_cast< IntensityGraphWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int IntensityGraphWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
