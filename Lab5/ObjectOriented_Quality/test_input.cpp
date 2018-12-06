#include "test_input.h"
#include "QLineEdit"
#include "QPlainTextEdit"
#include "mainwindow.h"
#include <QDebug>

void Test_Input::input()
{
QPlainTextEdit txt;
QTest::keyClicks(&txt,"Hello words");
QCOMPARE(txt.toPlainText(), QString("Hello words"));
}

