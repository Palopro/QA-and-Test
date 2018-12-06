#include "mainwindow.h"
#include <QApplication>
#include <QTest>
#include "test_mainwindow.h"
#include "test_input.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    QTest::qExec(new Test_MainWindow, argc, argv);
    QTest::qExec(new Test_Input, argc, argv);
    return a.exec();
}
