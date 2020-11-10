#include "tilitapahtumat.h"
#include "banksimul.h"
#include "ui_tilitapahtumat.h"


tilitapahtumat::tilitapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tilitapahtumat)
{
    ui->setupUi(this);
}

tilitapahtumat::~tilitapahtumat()
{
    delete ui;
}

void tilitapahtumat::on_palaaButton_clicked()
{
    this->close();
}
