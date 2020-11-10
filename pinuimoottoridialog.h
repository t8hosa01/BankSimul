#ifndef PINUIMOOTTORIDIALOG_H
#define PINUIMOOTTORIDIALOG_H

#include <QDialog>

namespace Ui {
class pinuimoottoridialog;
}

class pinuimoottoridialog : public QDialog
{
    Q_OBJECT

public:
    explicit pinuimoottoridialog(QWidget *parent = 0);
    ~pinuimoottoridialog();

private:
    Ui::pinuimoottoridialog *ui;
};

#endif // PINUIMOOTTORIDIALOG_H
