#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimerEvent>
#include <QTimer>
#include <QThread>
#include <QTouchEvent>
#include <QComboBox>
#include "C:\temp5\BankSimul\DLLPinCode\DLLPinCode\dllpincode.h"
#include "popup.h"





namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_betaLogin_clicked();

    void on_donateButton_clicked();

    void on_nostaButton_clicked();

    void on_saldoButton_clicked();

    void on_tapahtumatButton_clicked();

    void on_uloskirjauduButton_clicked();

    void on_palaaButton_clicked();

    void on_palaaButton_2_clicked();

    void on_palaaButton_3_clicked();

    void on_palaaButton_4_clicked();


private:
    Ui::MainWindow *ui;
    DLLPinCode *olioDLLPinCode;
    int timerId;
    //int timerId2;


protected:
    //void timerEvent(QTimerEvent *event);

};

#endif // MAINWINDOW_H
