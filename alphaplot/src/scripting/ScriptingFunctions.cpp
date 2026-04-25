#include <QJSEngine>
#include <QFile>
#include <QFileInfo>
#include <QtDebug>

#include "../ApplicationWindow.h"
#include "../Table.h"
#include "scripting/widgets/Console.h"
#include "widgets/ConsoleWidget.h"
#include "ScriptingFunctions.h"

// ScriptingConsole print() function reimplimentation
QJSValue print(QJSEngine *engine, QJSValue thisObject, QJSValue arguments) {
  int argCount = arguments.property("length").toInt();
  if (argCount == 0) {
    return engine->evaluate("Error('print() should have atleast one argument')");
  }
  QString result;
  for (int i = 0; i < argCount; i++) {
    result += " " + arguments.property(i).toString();
  }
  
  // In QJSEngine, we set the console object via property on the function object or similar.
  // We'll use the 'this' object which should be the console if we set it up that way.
  Console *console = qobject_cast<Console *>(thisObject.toQObject());
  if (console) {
    console->append(result);
  } else {
    qDebug() << "Scripting console print() unable to access Console object";
    return false;
  }
  return QJSValue(QJSValue::UndefinedValue);
}

// ScriptingConsole clear() function
QJSValue clear(QJSEngine *engine, QJSValue thisObject, QJSValue arguments) {
  Q_UNUSED(arguments);
  Console *console = qobject_cast<Console *>(thisObject.toQObject());
  if (console) {
    console->clearConsole();
  } else {
    qDebug() << "Scripting console clear() unable to access Console object";
    return false;
  }
  return QJSValue(QJSValue::UndefinedValue);
}

// ScriptingConsole openAproj() function
QJSValue openProj(QJSEngine *engine, QJSValue thisObject, QJSValue arguments) {
  int argCount = arguments.property("length").toInt();
  ApplicationWindow *app =
      qobject_cast<ApplicationWindow *>(thisObject.toQObject());
  if (app) {
    if (argCount == 0) {
      app->openAproj();
    } else {
      QFileInfo fileInfo(arguments.property(0).toString());
      if (fileInfo.exists()) {
        app->openAproj(fileInfo.absoluteFilePath());
      } else {
         return engine->evaluate(QString("Error('%1 file not found!')").arg(fileInfo.absoluteFilePath()));
      }
    }
  } else {
    qDebug() << "Scripting console openProj() unable to access ApplicationWindow object";
    return false;
  }
  return QJSValue(QJSValue::UndefinedValue);
}

QJSValue collectGarbage(QJSEngine *engine, QJSValue thisObject, QJSValue arguments) {
  Q_UNUSED(thisObject);
  Q_UNUSED(arguments);
  engine->collectGarbage();
  return QJSValue(QJSValue::UndefinedValue);
}

QJSValue attachDebugger(QJSEngine *engine, QJSValue thisObject, QJSValue arguments) {
  Q_UNUSED(engine);
  Q_UNUSED(thisObject);
  Q_UNUSED(arguments);
  qDebug() << "Scripting console attachDebugger(bool) is no longer available in Qt 6 (QJSEngine)";
  return QJSValue(QJSValue::UndefinedValue);
}
