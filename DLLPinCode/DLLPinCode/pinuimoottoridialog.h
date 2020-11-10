#ifndef PINUIMOOTTORIDIALOG_H
#define PINUIMOOTTORIDIALOG_H

#include <QDialog>


namespace Ui {
class PinUIMoottoriDialog;
}

class PinUIMoottoriDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PinUIMoottoriDialog(QWidget *parent = 0);
    ~PinUIMoottoriDialog();

private slots:
    void on_pinButtonClear_clicked(); void on_pinButtonClear_released(); void on_pinButtonClear_pressed();

    void on_pinButtonOk_clicked(); void on_pinButtonOk_released(); void on_pinButtonOk_pressed();

    void on_pinButton1_clicked(); void on_pinButton1_released(); void on_pinButton1_pressed();

    void on_pinButton2_clicked(); void on_pinButton2_released(); void on_pinButton2_pressed();

    void on_pinButton3_clicked(); void on_pinButton3_released(); void on_pinButton3_pressed();

    void on_pinButton4_clicked(); void on_pinButton4_released(); void on_pinButton4_pressed();

    void on_pinButton5_clicked(); void on_pinButton5_released(); void on_pinButton5_pressed();

    void on_pinButton6_clicked(); void on_pinButton6_released(); void on_pinButton6_pressed();

    void on_pinButton7_clicked(); void on_pinButton7_released(); void on_pinButton7_pressed();

    void on_pinButton8_clicked(); void on_pinButton8_released(); void on_pinButton8_pressed();

    void on_pinButton9_clicked(); void on_pinButton9_released(); void on_pinButton9_pressed();

    void on_pinButton0_clicked(); void on_pinButton0_released(); void on_pinButton0_pressed();


private:
    Ui::PinUIMoottoriDialog *ui;

    void addChar(char c);
    QString m_string;


};

#endif // PINUIMOOTTORIDIALOG_H
