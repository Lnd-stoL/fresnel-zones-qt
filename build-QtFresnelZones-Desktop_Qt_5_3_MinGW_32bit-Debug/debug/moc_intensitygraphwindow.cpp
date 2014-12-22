/****************************************************************************
** Meta object code from reading C++ file 'intensitygraphwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtFresnelZones/intensitygraphwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intensitygraphwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IntensityGraphWindow_t {
    QByteArrayData data[20];
    char stringdata[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntensityGraphWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntensityGraphWindow_t qt_meta_stringdata_IntensityGraphWindow = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 19),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 19),
QT_MOC_LITERAL(4, 62, 24),
QT_MOC_LITERAL(5, 87, 5),
QT_MOC_LITERAL(6, 93, 25),
QT_MOC_LITERAL(7, 119, 25),
QT_MOC_LITERAL(8, 145, 13),
QT_MOC_LITERAL(9, 159, 22),
QT_MOC_LITERAL(10, 182, 23),
QT_MOC_LITERAL(11, 206, 23),
QT_MOC_LITERAL(12, 230, 17),
QT_MOC_LITERAL(13, 248, 20),
QT_MOC_LITERAL(14, 269, 14),
QT_MOC_LITERAL(15, 284, 14),
QT_MOC_LITERAL(16, 299, 14),
QT_MOC_LITERAL(17, 314, 14),
QT_MOC_LITERAL(18, 329, 14),
QT_MOC_LITERAL(19, 344, 20)
    },
    "IntensityGraphWindow\0button_Back_Pressed\0"
    "\0button_Next_Pressed\0slider_xDistance_Changed\0"
    "value\0slider_WaveLength_Changed\0"
    "slider_HoleRadius_Changed\0update_Needed\0"
    "spin_xDistance_Changed\0spin_WaveLength_Changed\0"
    "spin_HoleRadius_Changed\0radio_xDependence\0"
    "radio_holeDependence\0parametersSet1\0"
    "parametersSet2\0parametersSet3\0"
    "parametersSet4\0parametersSet5\0"
    "parametersSetDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntensityGraphWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    1,  101,    2, 0x08 /* Private */,
       6,    1,  104,    2, 0x08 /* Private */,
       7,    1,  107,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    1,  111,    2, 0x08 /* Private */,
      10,    1,  114,    2, 0x08 /* Private */,
      11,    1,  117,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    0,  125,    2, 0x08 /* Private */,
      18,    0,  126,    2, 0x08 /* Private */,
      19,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 1: _t->button_Next_Pressed(); break;
        case 2: _t->slider_xDistance_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slider_WaveLength_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slider_HoleRadius_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->update_Needed(); break;
        case 6: _t->spin_xDistance_Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->spin_WaveLength_Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->spin_HoleRadius_Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->radio_xDependence(); break;
        case 10: _t->radio_holeDependence(); break;
        case 11: _t->parametersSet1(); break;
        case 12: _t->parametersSet2(); break;
        case 13: _t->parametersSet3(); break;
        case 14: _t->parametersSet4(); break;
        case 15: _t->parametersSet5(); break;
        case 16: _t->parametersSetDefault(); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
