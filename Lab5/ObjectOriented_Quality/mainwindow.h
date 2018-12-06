#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    float averNumMethLines(QString code);
    float averNumModuleLines(QString code);
    float averNumClassLines(QString code);
    int NORM(QString code);
    int RFC(QString code);
    int WMC(QString code);
    void NOC(QString code);
    void input();

private slots:
    void on_openFile_Button_clicked();

    void on_calculate_Button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
