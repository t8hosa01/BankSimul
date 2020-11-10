#include "banksimul.h"
#include "ui_banksimul.h"
#include <QPalette>
#include <QPushButton>
#include "tilitapahtumat.h"
#include "nostarahaa.h"
#include "saldo.h"
#include "uloskirjautuminen.h"
#include "banksimul.h"
#include "pinuimoottoridialog.h"
#include "login.h"
#include "donate.h"

BankSimul::BankSimul(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BankSimul)
{
    setStyleSheet(" .QFrame { background-color : rgb(200, 200, 200) } ");
    ui->setupUi(this);

    //timerId = startTimer(1250);
    //login dialog;
    //dialog.exec();
}

BankSimul::~BankSimul()
{
    delete ui;
}

void BankSimul::timerEvent(QTimerEvent *event)
{
    //BankSimul hide();
}


void BankSimul::on_uloskirjauduButton_clicked()
{
    uloskirjautuminen dialog;
    dialog.exec();

}

void BankSimul::on_tapahtumatButton_clicked()
{
    tilitapahtumat dialog;
    dialog.exec();
}

void BankSimul::on_saldoButton_clicked()
{
    saldo dialog;
    dialog.exec();
}

void BankSimul::on_nostaButton_clicked()
{
    nostaRahaa dialog;
    dialog.exec();
}


void BankSimul::on_donateButton_clicked()
{
    donate dialog;
    dialog.exec();
}



void BankSimul::on_pushButton_clicked()
{

}
