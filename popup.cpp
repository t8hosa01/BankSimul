#include "popup.h"
#include "ui_popup.h"
#include <QTimerEvent>

popup::popup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popup)
{
    ui->setupUi(this);
    timerId = startTimer(1250);
}

popup::~popup()
{
    killTimer(timerId);
    delete ui;
}

void popup::timerEvent(QTimerEvent *eveent)
{
    this->close();
}
