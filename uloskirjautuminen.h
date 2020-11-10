#ifndef ULOSKIRJAUTUMINEN_H
#define ULOSKIRJAUTUMINEN_H

#include <QDialog>
#include <QTimerEvent>
#include <QObject>

namespace Ui {
class uloskirjautuminen;
}

class uloskirjautuminen : public QDialog
{
    Q_OBJECT

public:
    explicit uloskirjautuminen(QWidget *parent = 0);
    ~uloskirjautuminen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::uloskirjautuminen *ui;
    int timerId;

protected:
    void timerEvent(QTimerEvent *event);

};

#endif // ULOSKIRJAUTUMINEN_H
