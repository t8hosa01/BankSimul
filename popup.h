#ifndef POPUP_H
#define POPUP_H

#include <QDialog>
#include <QTimerEvent>
#include <QObject>

namespace Ui {
class popup;
}

class popup : public QDialog
{
    Q_OBJECT

public:
    explicit popup(QWidget *parent = 0);
    ~popup();

private:
    Ui::popup *ui;
    int timerId;

protected:
    void timerEvent(QTimerEvent *eveent);
};

#endif // POPUP_H
