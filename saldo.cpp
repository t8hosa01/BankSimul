#include "saldo.h"
#include "ui_saldo.h"
#include "banksimul.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
}

saldo::~saldo()
{
    delete ui;
}

void saldo::on_palaaButton_clicked()
{
        this->close();
}
