#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>
#include <QPalette>
#include <QPushButton>
#include <QTimerEvent>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    olioDLLPinCode = new DLLPinCode;
    ui->setupUi(this);
    //timerId2 = startTimer(20000);
    QWidget *firstPageWidget = new QWidget;
    QWidget *secondPageWidget = new QWidget;
    QWidget *thirdPageWidget = new QWidget;
    QWidget *fourthPageWidget = new QWidget;
    QWidget *fifthPageWidget = new QWidget;
    QWidget *sixthPageWidget = new QWidget;
    QWidget *seventhPageWidget = new QWidget;
    QWidget *eightPageWidget = new QWidget;


    QStackedWidget *stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(firstPageWidget);
    stackedWidget->addWidget(secondPageWidget);
    stackedWidget->addWidget(thirdPageWidget);
    stackedWidget->addWidget(fourthPageWidget);
    stackedWidget->addWidget(fifthPageWidget);
    stackedWidget->addWidget(sixthPageWidget);
    stackedWidget->addWidget(seventhPageWidget);
    stackedWidget->addWidget(eightPageWidget);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioDLLPinCode;
    //killTimer(timerId2);
}


void MainWindow::on_betaLogin_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    olioDLLPinCode->rajapintafunktioDLLOmaUIKomponentti();
}

void MainWindow::on_donateButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    //startTimer(timerId2);
}

void MainWindow::on_nostaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_saldoButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_tapahtumatButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_palaaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_palaaButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_palaaButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_palaaButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_uloskirjauduButton_clicked()
{
    popup dialog;
    dialog.exec();
    ui->stackedWidget->setCurrentIndex(0);
}

//void MainWindow::timerEvent(QTimerEvent *event)
//{
//    ui->stackedWidget->setCurrentIndex(0);

//}


