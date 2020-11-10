/********************************************************************************
** Form generated from reading UI file 'pintestermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINTESTERMAINWINDOW_H
#define UI_PINTESTERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PINtesterMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonAvaa;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PINtesterMainWindow)
    {
        if (PINtesterMainWindow->objectName().isEmpty())
            PINtesterMainWindow->setObjectName(QStringLiteral("PINtesterMainWindow"));
        PINtesterMainWindow->resize(400, 300);
        centralWidget = new QWidget(PINtesterMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonAvaa = new QPushButton(centralWidget);
        pushButtonAvaa->setObjectName(QStringLiteral("pushButtonAvaa"));
        pushButtonAvaa->setGeometry(QRect(150, 100, 93, 28));
        PINtesterMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PINtesterMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        PINtesterMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PINtesterMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PINtesterMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PINtesterMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PINtesterMainWindow->setStatusBar(statusBar);

        retranslateUi(PINtesterMainWindow);

        QMetaObject::connectSlotsByName(PINtesterMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PINtesterMainWindow)
    {
        PINtesterMainWindow->setWindowTitle(QApplication::translate("PINtesterMainWindow", "PINtesterMainWindow", Q_NULLPTR));
        pushButtonAvaa->setText(QApplication::translate("PINtesterMainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PINtesterMainWindow: public Ui_PINtesterMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINTESTERMAINWINDOW_H
