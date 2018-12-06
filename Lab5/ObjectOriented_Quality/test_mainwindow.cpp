#include<QTest>
#include"test_mainwindow.h"
#include"mainwindow.h"

void Test_MainWindow::averNumModuleLines()
{
    QString code = "#include<QTest> #include\"test_mainwindow.h\" #include\"mainwindow.h\"";
    QString failCode = "#define #END_IF";
    MainWindow mw;
    QCOMPARE(mw.averNumModuleLines(code), 2.0);
    QCOMPARE(mw.averNumModuleLines(failCode), 0.0);
}

void Test_MainWindow::NORM()
{
    QString code = "float get_average_score(){} unsigned int get_work_time(){}";
    QString failCode = "class human{} class student : public human{}";

    MainWindow mw;

    QCOMPARE(mw.NORM(code), 2);
    QCOMPARE(mw.NORM(failCode), 0);
}

//QTEST_APPLESS_MAIN(Test_MainWindow)
