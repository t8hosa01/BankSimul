/********************************************************************************
** Form generated from reading UI file 'pinuimoottoridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINUIMOOTTORIDIALOG_H
#define UI_PINUIMOOTTORIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PinUIMoottoriDialog
{
public:
    QLineEdit *PINsymbol_lineEdit;
    QGroupBox *KeyPad;
    QPushButton *pinButtonOk;
    QPushButton *pinButton8;
    QPushButton *pinButton6;
    QPushButton *pinButton7;
    QPushButton *pinButton3;
    QPushButton *pinButton9;
    QPushButton *pinButton5;
    QPushButton *pinButton1;
    QPushButton *pinButtonClear;
    QPushButton *pinButton2;
    QPushButton *pinButton4;
    QPushButton *pinButton0;
    QLabel *Syota_label;

    void setupUi(QDialog *PinUIMoottoriDialog)
    {
        if (PinUIMoottoriDialog->objectName().isEmpty())
            PinUIMoottoriDialog->setObjectName(QStringLiteral("PinUIMoottoriDialog"));
        PinUIMoottoriDialog->resize(1280, 720);
        PINsymbol_lineEdit = new QLineEdit(PinUIMoottoriDialog);
        PINsymbol_lineEdit->setObjectName(QStringLiteral("PINsymbol_lineEdit"));
        PINsymbol_lineEdit->setGeometry(QRect(530, 80, 170, 60));
        PINsymbol_lineEdit->setMinimumSize(QSize(170, 60));
        PINsymbol_lineEdit->setMaximumSize(QSize(170, 60));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(36);
        PINsymbol_lineEdit->setFont(font);
        PINsymbol_lineEdit->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(0, 0, 0);"));
        PINsymbol_lineEdit->setMaxLength(4);
        PINsymbol_lineEdit->setEchoMode(QLineEdit::Password);
        PINsymbol_lineEdit->setAlignment(Qt::AlignCenter);
        KeyPad = new QGroupBox(PinUIMoottoriDialog);
        KeyPad->setObjectName(QStringLiteral("KeyPad"));
        KeyPad->setGeometry(QRect(330, 160, 571, 551));
        KeyPad->setStyleSheet(QLatin1String("background-color: rgb(132, 132, 132);\n"
"border: 2px solid;\n"
"border-color: rgb(97, 97, 97);"));
        pinButtonOk = new QPushButton(KeyPad);
        pinButtonOk->setObjectName(QStringLiteral("pinButtonOk"));
        pinButtonOk->setGeometry(QRect(371, 401, 130, 90));
        pinButtonOk->setMinimumSize(QSize(130, 90));
        pinButtonOk->setMaximumSize(QSize(130, 90));
        pinButtonOk->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(63, 170, 63);\n"
"font: 26pt \"Arial\";"));
        pinButton8 = new QPushButton(KeyPad);
        pinButton8->setObjectName(QStringLiteral("pinButton8"));
        pinButton8->setGeometry(QRect(221, 291, 130, 90));
        pinButton8->setMinimumSize(QSize(130, 90));
        pinButton8->setMaximumSize(QSize(130, 90));
        pinButton8->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 6px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton6 = new QPushButton(KeyPad);
        pinButton6->setObjectName(QStringLiteral("pinButton6"));
        pinButton6->setGeometry(QRect(371, 181, 130, 90));
        pinButton6->setMinimumSize(QSize(130, 90));
        pinButton6->setMaximumSize(QSize(130, 90));
        pinButton6->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton7 = new QPushButton(KeyPad);
        pinButton7->setObjectName(QStringLiteral("pinButton7"));
        pinButton7->setGeometry(QRect(71, 291, 130, 90));
        pinButton7->setMinimumSize(QSize(130, 90));
        pinButton7->setMaximumSize(QSize(130, 90));
        pinButton7->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton3 = new QPushButton(KeyPad);
        pinButton3->setObjectName(QStringLiteral("pinButton3"));
        pinButton3->setGeometry(QRect(371, 71, 130, 90));
        pinButton3->setMinimumSize(QSize(130, 90));
        pinButton3->setMaximumSize(QSize(130, 90));
        pinButton3->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton9 = new QPushButton(KeyPad);
        pinButton9->setObjectName(QStringLiteral("pinButton9"));
        pinButton9->setGeometry(QRect(371, 291, 130, 90));
        pinButton9->setMinimumSize(QSize(130, 90));
        pinButton9->setMaximumSize(QSize(130, 90));
        pinButton9->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton5 = new QPushButton(KeyPad);
        pinButton5->setObjectName(QStringLiteral("pinButton5"));
        pinButton5->setGeometry(QRect(221, 181, 130, 90));
        pinButton5->setMinimumSize(QSize(130, 90));
        pinButton5->setMaximumSize(QSize(130, 90));
        pinButton5->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton1 = new QPushButton(KeyPad);
        pinButton1->setObjectName(QStringLiteral("pinButton1"));
        pinButton1->setGeometry(QRect(71, 71, 130, 90));
        pinButton1->setMinimumSize(QSize(130, 90));
        pinButton1->setMaximumSize(QSize(130, 90));
        pinButton1->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButtonClear = new QPushButton(KeyPad);
        pinButtonClear->setObjectName(QStringLiteral("pinButtonClear"));
        pinButtonClear->setGeometry(QRect(71, 401, 130, 90));
        pinButtonClear->setMinimumSize(QSize(130, 90));
        pinButtonClear->setMaximumSize(QSize(130, 90));
        pinButtonClear->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(255, 30, 30);\n"
"font: 18pt \"Arial\";"));
        pinButton2 = new QPushButton(KeyPad);
        pinButton2->setObjectName(QStringLiteral("pinButton2"));
        pinButton2->setGeometry(QRect(221, 71, 130, 90));
        pinButton2->setMinimumSize(QSize(130, 90));
        pinButton2->setMaximumSize(QSize(130, 90));
        pinButton2->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton4 = new QPushButton(KeyPad);
        pinButton4->setObjectName(QStringLiteral("pinButton4"));
        pinButton4->setGeometry(QRect(71, 181, 130, 90));
        pinButton4->setMinimumSize(QSize(130, 90));
        pinButton4->setMaximumSize(QSize(130, 90));
        pinButton4->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        pinButton0 = new QPushButton(KeyPad);
        pinButton0->setObjectName(QStringLiteral("pinButton0"));
        pinButton0->setGeometry(QRect(221, 401, 130, 90));
        pinButton0->setMinimumSize(QSize(130, 90));
        pinButton0->setMaximumSize(QSize(130, 90));
        pinButton0->setStyleSheet(QLatin1String("border: 2px solid;\n"
"border-color: rgb(97, 97, 97);\n"
"border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"font: 26pt \"Arial\";"));
        Syota_label = new QLabel(PinUIMoottoriDialog);
        Syota_label->setObjectName(QStringLiteral("Syota_label"));
        Syota_label->setGeometry(QRect(470, 20, 290, 50));
        Syota_label->setMinimumSize(QSize(290, 50));
        Syota_label->setMaximumSize(QSize(290, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(26);
        Syota_label->setFont(font1);
        Syota_label->setAlignment(Qt::AlignCenter);

        retranslateUi(PinUIMoottoriDialog);

        QMetaObject::connectSlotsByName(PinUIMoottoriDialog);
    } // setupUi

    void retranslateUi(QDialog *PinUIMoottoriDialog)
    {
        PinUIMoottoriDialog->setWindowTitle(QApplication::translate("PinUIMoottoriDialog", "Dialog", Q_NULLPTR));
        PINsymbol_lineEdit->setText(QString());
        KeyPad->setTitle(QString());
        pinButtonOk->setText(QApplication::translate("PinUIMoottoriDialog", "OK", Q_NULLPTR));
        pinButton8->setText(QApplication::translate("PinUIMoottoriDialog", "8", Q_NULLPTR));
        pinButton6->setText(QApplication::translate("PinUIMoottoriDialog", "6", Q_NULLPTR));
        pinButton7->setText(QApplication::translate("PinUIMoottoriDialog", "7", Q_NULLPTR));
        pinButton3->setText(QApplication::translate("PinUIMoottoriDialog", "3", Q_NULLPTR));
        pinButton9->setText(QApplication::translate("PinUIMoottoriDialog", "9", Q_NULLPTR));
        pinButton5->setText(QApplication::translate("PinUIMoottoriDialog", "5", Q_NULLPTR));
        pinButton1->setText(QApplication::translate("PinUIMoottoriDialog", "1", Q_NULLPTR));
        pinButtonClear->setText(QApplication::translate("PinUIMoottoriDialog", "CLEAR", Q_NULLPTR));
        pinButton2->setText(QApplication::translate("PinUIMoottoriDialog", "2", Q_NULLPTR));
        pinButton4->setText(QApplication::translate("PinUIMoottoriDialog", "4", Q_NULLPTR));
        pinButton0->setText(QApplication::translate("PinUIMoottoriDialog", "0", Q_NULLPTR));
        Syota_label->setText(QApplication::translate("PinUIMoottoriDialog", "Sy\303\266t\303\244 PIN-koodi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PinUIMoottoriDialog: public Ui_PinUIMoottoriDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINUIMOOTTORIDIALOG_H
