#ifndef DONATE_H
#define DONATE_H

#include <QDialog>

namespace Ui {
class donate;
}

class donate : public QDialog
{
    Q_OBJECT

public:
    explicit donate(QWidget *parent = 0);
    ~donate();

private slots:
    void on_donateTen_toggled(bool checked);

private:
    Ui::donate *ui;
};

#endif // DONATE_H
