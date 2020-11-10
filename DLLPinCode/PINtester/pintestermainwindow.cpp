#include "pintestermainwindow.h"
#include "ui_pintestermainwindow.h"

PINtesterMainWindow::PINtesterMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PINtesterMainWindow)
{
    olioDLLPinCode = new DLLPinCode;
    ui->setupUi(this);
}

PINtesterMainWindow::~PINtesterMainWindow()
{
    delete ui;
    delete olioDLLPinCode;
}

void PINtesterMainWindow::on_pushButtonAvaa_clicked()
{
    olioDLLPinCode->rajapintafunktioDLLOmaUIKomponentti();
}
