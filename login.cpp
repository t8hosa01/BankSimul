#include "login.h"
#include "banksimul.h"
#include "ui_login.h"


login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    //timerId = startTimer(1250);
}

login::~login()
{
    delete ui;
}

void login::on_betaLogin_clicked()
{
    this->close();
    //BankSimul dialog;
    //dialog.exec();
}
