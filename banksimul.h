#ifndef BANKSIMUL_H
#define BANKSIMUL_H

#include <QMainWindow>
#include <QTimerEvent>
#include <QThread>
#include <QTouchEvent>

namespace Ui {
class BankSimul;
}

class BankSimul : public QMainWindow
{
    Q_OBJECT

public:
    explicit BankSimul(QWidget *parent = 0);
    ~BankSimul();
    static void sleep(unsigned long secs) { QThread::sleep(secs); }

private slots:
    void on_uloskirjauduButton_clicked();

    void on_tapahtumatButton_clicked();

    void on_saldoButton_clicked();

    void on_nostaButton_clicked();



    void on_donateButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::BankSimul *ui;
    int timerId;

protected:
    void timerEvent(QTimerEvent *event);
    void touchEvent(QTouchEvent *ev);
};

#endif // BANKSIMUL_H
