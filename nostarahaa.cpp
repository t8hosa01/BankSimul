#include "nostarahaa.h"
#include "banksimul.h"
#include "ui_nostarahaa.h"


nostaRahaa::nostaRahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostaRahaa)
{
    ui->setupUi(this);
}

nostaRahaa::~nostaRahaa()
{
    delete ui;
}

void nostaRahaa::on_palaaButton_clicked()
{
        this->close();
}

void nostaRahaa::on_tenButton_clicked()
{

}

void nostaRahaa::on_twentyButton_clicked()
{

}

void nostaRahaa::on_fiftyButton_clicked()
{

}

void nostaRahaa::on_hundredButton_clicked()
{

}

void nostaRahaa::on_twohundredButton_clicked()
{

}

void nostaRahaa::on_fivehundredButton_clicked()
{

}
