/****************************************************************************
** Meta object code from reading C++ file 'firescreen.h'
**
** Created: Thu May 7 17:10:09 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "firescreen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FireScreen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      30,   11,   11,   11, 0x0a,
      47,   11,   11,   11, 0x0a,
      64,   62,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
      89,   87,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FireScreen[] = {
    "FireScreen\0\0start_timer(bool)\0"
    "stop_timer(bool)\0nextCompteur()\0x\0"
    "set_delai(int)\0reset()\0y\0updateWind(int)\0"
};

void FireScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FireScreen *_t = static_cast<FireScreen *>(_o);
        switch (_id) {
        case 0: _t->start_timer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->stop_timer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nextCompteur(); break;
        case 3: _t->set_delai((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reset(); break;
        case 5: _t->updateWind((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FireScreen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FireScreen::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FireScreen,
      qt_meta_data_FireScreen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FireScreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FireScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FireScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FireScreen))
        return static_cast<void*>(const_cast< FireScreen*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FireScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
