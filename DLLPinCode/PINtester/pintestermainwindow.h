#ifndef PINTESTERMAINWINDOW_H
#define PINTESTERMAINWINDOW_H

#include <QMainWindow>
#include "C:\qt_dll\DLLPinCode\DLLPinCode\dllpincode.h"


namespace Ui {
class PINtesterMainWindow;
}

class PINtesterMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PINtesterMainWindow(QWidget *parent = 0);
    ~PINtesterMainWindow();

private slots:
    void on_pushButtonAvaa_clicked();

private:
    Ui::PINtesterMainWindow *ui;
    DLLPinCode *olioDLLPinCode;
};

#endif // PINTESTERMAINWINDOW_H
