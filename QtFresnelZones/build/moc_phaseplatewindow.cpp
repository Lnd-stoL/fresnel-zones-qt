/****************************************************************************
** Meta object code from reading C++ file 'phaseplatewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../phaseplatewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phaseplatewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PhasePlateWindow_t {
    QByteArrayData data[9];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PhasePlateWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PhasePlateWindow_t qt_meta_stringdata_PhasePlateWindow = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 7),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 18),
QT_MOC_LITERAL(4, 45, 19),
QT_MOC_LITERAL(5, 65, 26),
QT_MOC_LITERAL(6, 92, 27),
QT_MOC_LITERAL(7, 120, 24),
QT_MOC_LITERAL(8, 145, 28)
    },
    "PhasePlateWindow\0_update\0\0_updateSpiralGraph\0"
    "button_Back_Pressed\0button_SimplePlate_Pressed\0"
    "button_StagingPlate_Pressed\0"
    "button_LensPlate_Pressed\0"
    "button_FlatLensPlate_Pressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhasePlateWindow[] = {

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
       1,    0,   49,    2, 0x08,
       3,    0,   50,    2, 0x08,
       4,    0,   51,    2, 0x08,
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    0,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PhasePlateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PhasePlateWindow *_t = static_cast<PhasePlateWindow *>(_o);
        switch (_id) {
        case 0: _t->_update(); break;
        case 1: _t->_updateSpiralGraph(); break;
        case 2: _t->button_Back_Pressed(); break;
        case 3: _t->button_SimplePlate_Pressed(); break;
        case 4: _t->button_StagingPlate_Pressed(); break;
        case 5: _t->button_LensPlate_Pressed(); break;
        case 6: _t->button_FlatLensPlate_Pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PhasePlateWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PhasePlateWindow.data,
      qt_meta_data_PhasePlateWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *PhasePlateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhasePlateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhasePlateWindow.stringdata))
        return static_cast<void*>(const_cast< PhasePlateWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PhasePlateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
