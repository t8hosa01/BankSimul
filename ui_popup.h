/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_popup
{
public:
    QLabel *label_9;

    void setupUi(QDialog *popup)
    {
        if (popup->objectName().isEmpty())
            popup->setObjectName(QStringLiteral("popup"));
        popup->resize(1280, 720);
        label_9 = new QLabel(popup);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(215, 200, 850, 320));
        QFont font;
        font.setPointSize(30);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        retranslateUi(popup);

        QMetaObject::connectSlotsByName(popup);
    } // setupUi

    void retranslateUi(QDialog *popup)
    {
        popup->setWindowTitle(QApplication::translate("popup", "Dialog", Q_NULLPTR));
        label_9->setText(QApplication::translate("popup", "Kirjauduitte onnistuneesti ulos!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class popup: public Ui_popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
