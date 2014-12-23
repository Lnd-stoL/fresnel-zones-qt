/****************************************************************************
** Meta object code from reading C++ file 'amplitudeplatewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtFresnelZones/amplitudeplatewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amplitudeplatewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AmplitudePlateWindow_t {
    QByteArrayData data[12];
    char stringdata[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmplitudePlateWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmplitudePlateWindow_t qt_meta_stringdata_AmplitudePlateWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AmplitudePlateWindow"
QT_MOC_LITERAL(1, 21, 7), // "_update"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "button_Back_Pressed"
QT_MOC_LITERAL(4, 50, 19), // "button_Next_Pressed"
QT_MOC_LITERAL(5, 70, 22), // "button_OpenAll_Pressed"
QT_MOC_LITERAL(6, 93, 23), // "button_CloseAll_Pressed"
QT_MOC_LITERAL(7, 117, 22), // "button_OpenOdd_Pressed"
QT_MOC_LITERAL(8, 140, 19), // "button_Tune_Pressed"
QT_MOC_LITERAL(9, 160, 25), // "slider_WaveLength_Changed"
QT_MOC_LITERAL(10, 186, 5), // "value"
QT_MOC_LITERAL(11, 192, 23) // "spin_WaveLength_Changed"

    },
    "AmplitudePlateWindow\0_update\0\0"
    "button_Back_Pressed\0button_Next_Pressed\0"
    "button_OpenAll_Pressed\0button_CloseAll_Pressed\0"
    "button_OpenOdd_Pressed\0button_Tune_Pressed\0"
    "slider_WaveLength_Changed\0value\0"
    "spin_WaveLength_Changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmplitudePlateWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Double,   10,

       0        // eod
};

void AmplitudePlateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AmplitudePlateWindow *_t = static_cast<AmplitudePlateWindow *>(_o);
        switch (_id) {
        case 0: _t->_update(); break;
        case 1: _t->button_Back_Pressed(); break;
        case 2: _t->button_Next_Pressed(); break;
        case 3: _t->button_OpenAll_Pressed(); break;
        case 4: _t->button_CloseAll_Pressed(); break;
        case 5: _t->button_OpenOdd_Pressed(); break;
        case 6: _t->button_Tune_Pressed(); break;
        case 7: _t->slider_WaveLength_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->spin_WaveLength_Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AmplitudePlateWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AmplitudePlateWindow.data,
      qt_meta_data_AmplitudePlateWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AmplitudePlateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmplitudePlateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AmplitudePlateWindow.stringdata))
        return static_cast<void*>(const_cast< AmplitudePlateWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AmplitudePlateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
