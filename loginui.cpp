#include "loginui.h"
#include "ui_loginui.h"

loginUI::loginUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginUI)
{
    ui->setupUi(this);
}

loginUI::~loginUI()
{
    delete ui;
}

void loginUI::on_pushButton_clicked()
{
    banksimul dialog;
    dialog.exec(); // if you use show() which is non blocking, you should use secDialog *dialog = new secDialog;
}
