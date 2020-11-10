#include "uloskirjautuminen.h"
#include "ui_uloskirjautuminen.h"
#include "banksimul.h"
#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QMainWindow>
#include "login.h"
#include <QTimerEvent>



uloskirjautuminen::uloskirjautuminen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uloskirjautuminen)
{
    ui->setupUi(this);
    timerId = startTimer(1250);
}

uloskirjautuminen::~uloskirjautuminen()
{
    killTimer(timerId);
    delete ui;
}

void uloskirjautuminen::timerEvent(QTimerEvent *event)
{
    this->close();
    login dialog;
    dialog.exec();
}
