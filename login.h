#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_betaLogin_clicked();

private:
    Ui::login *ui;
   //int timerId;

protected:
//    void timerEvent(QTimerEvent *event);
};

#endif // LOGIN_H
