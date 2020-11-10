#include "pinuimoottoridialog.h"
#include "ui_pinuimoottoridialog.h"


PinUIMoottoriDialog::PinUIMoottoriDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PinUIMoottoriDialog)
{
    ui->setupUi(this);
}

PinUIMoottoriDialog::~PinUIMoottoriDialog()
{
    delete ui;
}

void PinUIMoottoriDialog::addChar(char c)
{
    m_string.append( c );
    ui->PINsymbol_lineEdit->setText(m_string);
}


//_________________________________________________________________________________________
//CLEAR
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButtonClear_clicked()
{
    ui->PINsymbol_lineEdit->setText(m_string = "");
}

void PinUIMoottoriDialog::on_pinButtonClear_released()
{
    ui->pinButtonClear->setAutoFillBackground(true);
    ui->pinButtonClear->setStyleSheet("background-color: rgb(255, 30, 30);"
                                  "font: 18pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButtonClear_pressed()
{
    ui->pinButtonClear->setAutoFillBackground(true);
    ui->pinButtonClear->setStyleSheet("background-color: rgb(240, 15, 15);"
                                  "font: 18pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//OK
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButtonOk_clicked()
{

    this->close();
}

void PinUIMoottoriDialog::on_pinButtonOk_released()
{
    ui->pinButtonOk->setAutoFillBackground(true);
    ui->pinButtonOk->setStyleSheet("background-color: rgb(63, 170, 63);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButtonOk_pressed()
{
    ui->pinButtonOk->setAutoFillBackground(true);
    ui->pinButtonOk->setStyleSheet("background-color: rgb(47, 155, 47);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}



//numerot
//_________________________________________________________________________________________
//1
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton1_clicked()
{
    addChar('1');
}

void PinUIMoottoriDialog::on_pinButton1_released()
{
    ui->pinButton1->setAutoFillBackground(true);
    ui->pinButton1->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton1_pressed()
{
    ui->pinButton1->setAutoFillBackground(true);
    ui->pinButton1->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//2
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton2_clicked()
{
    addChar('2');
}

void PinUIMoottoriDialog::on_pinButton2_released()
{
    ui->pinButton2->setAutoFillBackground(true);
    ui->pinButton2->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton2_pressed()
{
    ui->pinButton2->setAutoFillBackground(true);
    ui->pinButton2->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//3
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton3_clicked()
{
    addChar('3');
}

void PinUIMoottoriDialog::on_pinButton3_released()
{
    ui->pinButton3->setAutoFillBackground(true);
    ui->pinButton3->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton3_pressed()
{
    ui->pinButton3->setAutoFillBackground(true);
    ui->pinButton3->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//4
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton4_clicked()
{
    addChar('4');
}

void PinUIMoottoriDialog::on_pinButton4_released()
{
    ui->pinButton4->setAutoFillBackground(true);
    ui->pinButton4->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton4_pressed()
{
    ui->pinButton4->setAutoFillBackground(true);
    ui->pinButton4->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//5
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton5_clicked()
{
    addChar('5');
}

void PinUIMoottoriDialog::on_pinButton5_released()
{
    ui->pinButton5->setAutoFillBackground(true);
    ui->pinButton5->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton5_pressed()
{
    ui->pinButton5->setAutoFillBackground(true);
    ui->pinButton5->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//6
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton6_clicked()
{
    addChar('6');
}

void PinUIMoottoriDialog::on_pinButton6_released()
{
    ui->pinButton6->setAutoFillBackground(true);
    ui->pinButton6->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton6_pressed()
{
    ui->pinButton6->setAutoFillBackground(true);
    ui->pinButton6->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//7
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton7_clicked()
{
    addChar('7');
}

void PinUIMoottoriDialog::on_pinButton7_released()
{
    ui->pinButton7->setAutoFillBackground(true);
    ui->pinButton7->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton7_pressed()
{
    ui->pinButton7->setAutoFillBackground(true);
    ui->pinButton7->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//8
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton8_clicked()
{
    addChar('8');
}

void PinUIMoottoriDialog::on_pinButton8_released()
{
    ui->pinButton8->setAutoFillBackground(true);
    ui->pinButton8->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton8_pressed()
{
    ui->pinButton8->setAutoFillBackground(true);
    ui->pinButton8->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//9
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton9_clicked()
{
    addChar('9');
}

void PinUIMoottoriDialog::on_pinButton9_released()
{
    ui->pinButton9->setAutoFillBackground(true);
    ui->pinButton9->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton9_pressed()
{
    ui->pinButton9->setAutoFillBackground(true);
    ui->pinButton9->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

//_________________________________________________________________________________________
//0
//_________________________________________________________________________________________

void PinUIMoottoriDialog::on_pinButton0_clicked()
{
    addChar('0');
}

void PinUIMoottoriDialog::on_pinButton0_released()
{
    ui->pinButton0->setAutoFillBackground(true);
    ui->pinButton0->setStyleSheet("background-color: rgb(221, 221, 221);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}

void PinUIMoottoriDialog::on_pinButton0_pressed()
{
    ui->pinButton0->setAutoFillBackground(true);
    ui->pinButton0->setStyleSheet("background-color: rgb(200, 200, 200);"
                                  "font: 26pt 'Arial';"
                                  "border: 2px solid;"
                                  "border-color: rgb(97, 97, 97);"
                                  "border-radius: 8px;");
}
