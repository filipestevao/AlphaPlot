#ifndef SCRIPTINGFUNCTIONS_H
#define SCRIPTINGFUNCTIONS_H

#include <QJSEngine>
#include <../Table.h>
#include <../Note.h>
#include <../Matrix.h>
#include <../future/core/column/Column.h>

class QJSEngine;
class Table;

// Register types
Q_DECLARE_METATYPE(Table *)
Q_DECLARE_METATYPE(Note *)
Q_DECLARE_METATYPE(Matrix *)
Q_DECLARE_METATYPE(Column *)
Q_DECLARE_METATYPE(QVector<int>)
Q_DECLARE_METATYPE(QVector<float>)
Q_DECLARE_METATYPE(QVector<double>)
Q_DECLARE_METATYPE(QVector<long>)
Q_DECLARE_METATYPE(QVector<QString>)
Q_DECLARE_METATYPE(QVector<QDate>)
Q_DECLARE_METATYPE(QVector<QDateTime>)

// Registered type to from conversion
template <class AlphaWindowObject>
QJSValue tableObjectToScriptValue(QJSEngine *engine,
                                      const AlphaWindowObject &in) {
  return engine->newQObject(in);
}

template <class AlphaWindowObject>
void tableObjectFromScriptValue(const QJSValue &object,
                                AlphaWindowObject &out) {
  out = qobject_cast<AlphaWindowObject>(object.toQObject());
}

// Register QVector<>
template <class Container>
QJSValue toScriptValue(QJSEngine *eng, const Container &cont)
{
    QJSValue a = eng->newArray(cont.size());
    typename Container::const_iterator it;
    int i = 0;
    for (it = cont.begin(); it != cont.end(); ++it, ++i)
        a.setProperty(i, eng->toScriptValue(*it));
    return a;
}

template <class Container>
void fromScriptValue(const QJSValue &value, Container &cont)
{
    quint32 len = value.property("length").toUInt();
    for (quint32 i = 0; i < len; ++i) {
        QJSValue item = value.property(i);
        typedef typename Container::value_type ContainerValue;
        cont.push_back(item.toVariant().value<ContainerValue>());
    }
}

// Console Basic Functions
QJSValue print(QJSEngine *engine, QJSValue thisObject, QJSValue arguments);
QJSValue clear(QJSEngine *engine, QJSValue thisObject, QJSValue arguments);
QJSValue collectGarbage(QJSEngine *engine, QJSValue thisObject, QJSValue arguments);
QJSValue attachDebugger(QJSEngine *engine, QJSValue thisObject, QJSValue arguments);
// Core functions
QJSValue openProj(QJSEngine *engine, QJSValue thisObject, QJSValue arguments);

#endif  // SCRIPTINGFUNCTIONS_H
