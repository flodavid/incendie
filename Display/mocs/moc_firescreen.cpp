/****************************************************************************
** Meta object code from reading C++ file 'firescreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../firescreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FireScreen_t {
    QByteArrayData data[17];
    char stringdata[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FireScreen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FireScreen_t qt_meta_stringdata_FireScreen = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 1),
QT_MOC_LITERAL(4, 27, 11),
QT_MOC_LITERAL(5, 39, 10),
QT_MOC_LITERAL(6, 50, 9),
QT_MOC_LITERAL(7, 60, 8),
QT_MOC_LITERAL(8, 69, 5),
QT_MOC_LITERAL(9, 75, 8),
QT_MOC_LITERAL(10, 84, 9),
QT_MOC_LITERAL(11, 94, 8),
QT_MOC_LITERAL(12, 103, 10),
QT_MOC_LITERAL(13, 114, 5),
QT_MOC_LITERAL(14, 120, 7),
QT_MOC_LITERAL(15, 128, 14),
QT_MOC_LITERAL(16, 143, 8)
    },
    "FireScreen\0actionSender\0\0x\0start_timer\0"
    "stop_timer\0set_delai\0nextStep\0reset\0"
    "saveData\0saveImage\0saveSeed\0updateWind\0"
    "angle\0vitesse\0releaseOrdered\0popAbout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FireScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x0a,
       5,    0,   78,    2, 0x0a,
       6,    1,   79,    2, 0x0a,
       7,    0,   82,    2, 0x0a,
       8,    0,   83,    2, 0x0a,
       9,    0,   84,    2, 0x0a,
      10,    0,   85,    2, 0x0a,
      11,    0,   86,    2, 0x0a,
      12,    2,   87,    2, 0x0a,
      15,    0,   92,    2, 0x0a,
      16,    0,   93,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FireScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FireScreen *_t = static_cast<FireScreen *>(_o);
        switch (_id) {
        case 0: _t->actionSender((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->start_timer(); break;
        case 2: _t->stop_timer(); break;
        case 3: _t->set_delai((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->nextStep(); break;
        case 5: _t->reset(); break;
        case 6: _t->saveData(); break;
        case 7: _t->saveImage(); break;
        case 8: _t->saveSeed(); break;
        case 9: _t->updateWind((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->releaseOrdered(); break;
        case 11: _t->popAbout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FireScreen::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FireScreen::actionSender)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FireScreen::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FireScreen.data,
      qt_meta_data_FireScreen,  qt_static_metacall, 0, 0}
};


const QMetaObject *FireScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FireScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FireScreen.stringdata))
        return static_cast<void*>(const_cast< FireScreen*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FireScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FireScreen::actionSender(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
