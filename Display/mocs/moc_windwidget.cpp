/****************************************************************************
** Meta object code from reading C++ file 'windwidget.h'
**
** Created: Sun Jun 7 11:00:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../windwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   11,   11,   11, 0x0a,
      54,   46,   11,   11, 0x0a,
      68,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WindWidget[] = {
    "WindWidget\0\0,\0modif_value(int,int)\0"
    "majAngle()\0vitesse\0majSpeed(int)\0"
    "changeWindDir()\0"
};

void WindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindWidget *_t = static_cast<WindWidget *>(_o);
        switch (_id) {
        case 0: _t->modif_value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->majAngle(); break;
        case 2: _t->majSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeWindDir(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindWidget,
      qt_meta_data_WindWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindWidget))
        return static_cast<void*>(const_cast< WindWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WindWidget::modif_value(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
