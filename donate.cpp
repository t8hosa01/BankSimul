#include "donate.h"
#include "banksimul.h"
#include "ui_donate.h"


donate::donate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donate)
{
    ui->setupUi(this);
}

donate::~donate()
{
    delete ui;
}

//void donate::on_donateTen_toggled(bool checked)
//{

//}
