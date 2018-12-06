#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Global variables
 *
 * code - save text (code) from file
*/
QString code;

float MainWindow::averNumMethLines(QString code)
{
    QStringList conditions = code.split(QRegExp("(void|int|string|float|double|byte)[A-Za-z0-9]*"), QString::SkipEmptyParts);
    int s = 0;
    for(int i = conditions.count()-1; i>=0; --i)
    {
        const QString &item = conditions[i];
        s=s+item.count("\n");
    }
    return (float)s/(conditions.count()) - 1;
}

float MainWindow::averNumModuleLines(QString code)
{
    QStringList includes = code.split(QRegExp("#include"), QString::SkipEmptyParts);
    return (float) includes.count() - 1;
}

float MainWindow::averNumClassLines(QString code)
{
    QStringList classes = code.split(QRegExp("class "), QString::SkipEmptyParts);

    int s = 0;
    for(int i = classes.count()-1; i>=0;--i)
    {
        const QString &item = classes[i];
        s=s+item.count("\n")-1;
    }
    return (float) s/classes.count();
}

int MainWindow::NORM(QString code)
{
    QStringList classes = code.split(QRegExp("class "), QString::SkipEmptyParts);
    int s = 0;
    for(int i = classes.count()-1; i>=0; --i)
    {
        const QString &item = classes[i];
        QStringList list = item.split("){",QString::SkipEmptyParts);
        s = s + item.count(")") - item.count("this->") - item.count(" )");
    }
    return s;
}

int MainWindow::RFC(QString code)
{
    QStringList classes = code.split(QRegExp("class "), QString::SkipEmptyParts);

    int s = 0;
    for(int i = classes.count()-1; i>=0; --i)
    {
        const QString &item = classes[i];
        QStringList list = item.split("){",QString::SkipEmptyParts);
        s = s + item.count(")") - item.count(" )");
    }
    return s;
}

int MainWindow::WMC(QString code)
{
    QStringList classes = code.split(QRegExp("class "), QString::SkipEmptyParts);

    int s = 0;
    for(int i = classes.count()-1; i>=0; --i)
    {
        const QString &item = classes[i];
        QStringList list = item.split("){",QString::SkipEmptyParts);
        s = 0;
        for(int j = list.count()-1;j>=0; --j)
        {
            s = s + 1;
        }
        return s;
    }
    return s;
}

void MainWindow::NOC(QString code)
{
    ui->label_NOC->clear();
    QStringList classes = code.split(QRegExp("class"), QString::SkipEmptyParts);
    QStringList list,Lls, Rls;

    for(int i=0; i<classes.count(); i++)
    {
        const QString &item = classes[i].trimmed();
        QString str = "";
        for(int j=0; j<item.count();j++)
        {
            if(item[j] != '\n')
                str=str + QString(item[j]);
            else
                break;
        }
        list<<str;
    }

    for(int i=0; i<list.count(); i++)
    {
        const QString &item = classes[i].trimmed();
        QString str = "";
        for(int j=0; j<item.count();j++)
        {
            if(item[j] != ' '){
                str=str+QString(item[j]);
            }
            else
            {
                break;
            }

        }
        Rls << str;
    }

    for(int i=0; i<list.count(); i++)
    {
        const QString &item = list[i].trimmed();
        QString str = "";
        classes = item.split(QRegExp("public|protected|private"), QString::SkipEmptyParts);
        for(int j=0; j < classes.count(); j++)
        {
            str = str + classes[j];

        }
        Lls << str;
    }

    for(int i = 0; i<Rls.count(); i++)
    {
        Lls[i].replace(0, Rls[i].count(), "");
        Lls[i] = Lls[i].trimmed();
    }

    for(int i = 0; i<Rls.count(); i++)
    {

        Rls[i].remove(":");
        int s = 0;
        for(int j = 0; j < Rls.count(); j++)
        {
            s = s + Lls[j].count(Rls[i]);
        }

        ui->label_NOC->setText(ui->label_NOC->text()+"\n"+ Rls[i]+" " + QString::number(s));
    }
}

void MainWindow::on_openFile_Button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open file"),"",tr("C++ files (*.cpp *.h)"));
    if(fileName!="")
    {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file!"));
            return;
        }
        QTextStream input(&file);
        ui->plainTextEdit->setPlainText(input.readAll());
        file.close();

        code = ui->plainTextEdit->toPlainText();
    }
}

void MainWindow::on_calculate_Button_clicked()
{
    ui->label_averNumMethLines->setText("Average number of method lines: " + QString::number(averNumMethLines(code)));
    ui->label_averNumModuleLines->setText("Average number of module lines: " + QString::number(averNumModuleLines(code)));
    ui->label_averNumClassLines->setText("Average number of class lines: " + QString::number(averNumClassLines(code)));
    ui->label_NORM->setText("Number Of Remote Methods: " + QString::number(NORM(code)));
    ui->label_RFC->setText("Response For Class: " + QString::number(RFC(code)));
    ui->label_WMC->setText("Class method complexity: " + QString::number(WMC(code)));
    MainWindow::NOC(code);
}
