#include "pinuimoottoridialog.h"
#include "ui_pinuimoottoridialog.h"

pinuimoottoridialog::pinuimoottoridialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinuimoottoridialog)
{
    ui->setupUi(this);
}

pinuimoottoridialog::~pinuimoottoridialog()
{
    delete ui;
}
