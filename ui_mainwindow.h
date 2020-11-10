/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QPushButton *betaLogin;
    QLabel *label;
    QWidget *page_2;
    QFrame *frame;
    QPushButton *saldoButton;
    QPushButton *tapahtumatButton;
    QPushButton *nostaButton;
    QPushButton *uloskirjauduButton;
    QPushButton *donateButton;
    QLabel *label_3;
    QWidget *page_3;
    QPushButton *palaaButton;
    QLabel *label_4;
    QPushButton *twentyButton;
    QPushButton *twohundredButton;
    QPushButton *fivehundredButton;
    QPushButton *fiftyButton;
    QPushButton *hundredButton;
    QPushButton *tenButton;
    QLabel *label_5;
    QWidget *page_4;
    QPushButton *donateFifty;
    QPushButton *donateTwo;
    QLabel *label_6;
    QPushButton *donateTen;
    QPushButton *palaaButton_2;
    QPushButton *donateThree;
    QPushButton *donateHundred;
    QPushButton *donateOne;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *page_5;
    QPushButton *palaaButton_3;
    QLabel *label_7;
    QLabel *label_19;
    QWidget *page_6;
    QPushButton *palaaButton_4;
    QLabel *label_8;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_17;
    QWidget *page_7;
    QLabel *label_9;
    QPushButton *pushButton;
    QWidget *page_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 1280, 720));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(255, 300, 770, 130));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift Light"));
        font.setPointSize(25);
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        betaLogin = new QPushButton(page);
        betaLogin->setObjectName(QStringLiteral("betaLogin"));
        betaLogin->setGeometry(QRect(360, 460, 560, 180));
        QFont font1;
        font1.setPointSize(20);
        betaLogin->setFont(font1);
        betaLogin->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 20, 480, 91));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift Light"));
        font2.setPointSize(35);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        label->setFont(font2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame = new QFrame(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(258, 220, 844, 400));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 147, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(67, 139, 227, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(44, 49, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(61, 43, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(40, 2, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(61, 61, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        QBrush brush8(QColor(16, 78, 248, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        QBrush brush9(QColor(80, 97, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush9);
        QBrush brush10(QColor(30, 150, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush11(QColor(27, 31, 105, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        QBrush brush12(QColor(5, 54, 215, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush7);
        QBrush brush13(QColor(27, 115, 246, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        QBrush brush14(QColor(32, 84, 180, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush14);
        QBrush brush15(QColor(26, 129, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush15);
        QBrush brush16(QColor(13, 42, 138, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
        QBrush brush17(QColor(0, 120, 215, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush16);
        frame->setPalette(palette);
        frame->setStyleSheet(QLatin1String("border-radius: 8px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        saldoButton = new QPushButton(frame);
        saldoButton->setObjectName(QStringLiteral("saldoButton"));
        saldoButton->setGeometry(QRect(1, 1, 410, 190));
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift Light"));
        font3.setPointSize(26);
        saldoButton->setFont(font3);
        saldoButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        tapahtumatButton = new QPushButton(frame);
        tapahtumatButton->setObjectName(QStringLiteral("tapahtumatButton"));
        tapahtumatButton->setGeometry(QRect(434, 0, 410, 190));
        tapahtumatButton->setFont(font3);
        tapahtumatButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        nostaButton = new QPushButton(frame);
        nostaButton->setObjectName(QStringLiteral("nostaButton"));
        nostaButton->setGeometry(QRect(1, 210, 410, 190));
        nostaButton->setFont(font3);
        nostaButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        uloskirjauduButton = new QPushButton(frame);
        uloskirjauduButton->setObjectName(QStringLiteral("uloskirjauduButton"));
        uloskirjauduButton->setGeometry(QRect(434, 210, 410, 190));
        uloskirjauduButton->setFont(font3);
        uloskirjauduButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        donateButton = new QPushButton(page_2);
        donateButton->setObjectName(QStringLiteral("donateButton"));
        donateButton->setGeometry(QRect(80, 220, 161, 400));
        donateButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 30, 501, 91));
        QFont font4;
        font4.setPointSize(30);
        label_3->setFont(font4);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        palaaButton = new QPushButton(page_3);
        palaaButton->setObjectName(QStringLiteral("palaaButton"));
        palaaButton->setGeometry(QRect(1060, 10, 221, 101));
        palaaButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(204, 80, 791, 61));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        twentyButton = new QPushButton(page_3);
        twentyButton->setObjectName(QStringLiteral("twentyButton"));
        twentyButton->setGeometry(QRect(647, 190, 166, 100));
        QFont font5;
        font5.setPointSize(15);
        twentyButton->setFont(font5);
        twentyButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        twohundredButton = new QPushButton(page_3);
        twohundredButton->setObjectName(QStringLiteral("twohundredButton"));
        twohundredButton->setGeometry(QRect(387, 490, 166, 100));
        twohundredButton->setFont(font5);
        twohundredButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        fivehundredButton = new QPushButton(page_3);
        fivehundredButton->setObjectName(QStringLiteral("fivehundredButton"));
        fivehundredButton->setGeometry(QRect(647, 490, 166, 100));
        fivehundredButton->setFont(font5);
        fivehundredButton->setLayoutDirection(Qt::LeftToRight);
        fivehundredButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        fiftyButton = new QPushButton(page_3);
        fiftyButton->setObjectName(QStringLiteral("fiftyButton"));
        fiftyButton->setGeometry(QRect(387, 340, 166, 100));
        fiftyButton->setFont(font5);
        fiftyButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        hundredButton = new QPushButton(page_3);
        hundredButton->setObjectName(QStringLiteral("hundredButton"));
        hundredButton->setGeometry(QRect(647, 340, 166, 100));
        hundredButton->setFont(font5);
        hundredButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        tenButton = new QPushButton(page_3);
        tenButton->setObjectName(QStringLiteral("tenButton"));
        tenButton->setGeometry(QRect(387, 190, 166, 100));
        tenButton->setFont(font5);
        tenButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(530, 20, 140, 51));
        label_5->setFont(font4);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        donateFifty = new QPushButton(page_4);
        donateFifty->setObjectName(QStringLiteral("donateFifty"));
        donateFifty->setGeometry(QRect(826, 400, 166, 100));
        donateFifty->setFont(font5);
        donateFifty->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        donateTwo = new QPushButton(page_4);
        donateTwo->setObjectName(QStringLiteral("donateTwo"));
        donateTwo->setGeometry(QRect(289, 400, 166, 100));
        QFont font6;
        font6.setPointSize(10);
        donateTwo->setFont(font6);
        donateTwo->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 10, 1281, 61));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        donateTen = new QPushButton(page_4);
        donateTen->setObjectName(QStringLiteral("donateTen"));
        donateTen->setGeometry(QRect(826, 240, 166, 100));
        donateTen->setFont(font5);
        donateTen->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        palaaButton_2 = new QPushButton(page_4);
        palaaButton_2->setObjectName(QStringLiteral("palaaButton_2"));
        palaaButton_2->setGeometry(QRect(1060, 10, 221, 101));
        palaaButton_2->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        donateThree = new QPushButton(page_4);
        donateThree->setObjectName(QStringLiteral("donateThree"));
        donateThree->setGeometry(QRect(289, 560, 166, 100));
        donateThree->setFont(font6);
        donateThree->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        donateHundred = new QPushButton(page_4);
        donateHundred->setObjectName(QStringLiteral("donateHundred"));
        donateHundred->setGeometry(QRect(826, 560, 166, 100));
        donateHundred->setFont(font5);
        donateHundred->setLayoutDirection(Qt::LeftToRight);
        donateHundred->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        donateOne = new QPushButton(page_4);
        donateOne->setObjectName(QStringLiteral("donateOne"));
        donateOne->setGeometry(QRect(289, 240, 166, 100));
        donateOne->setFont(font6);
        donateOne->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(207, 120, 330, 70));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(744, 120, 330, 70));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        palaaButton_3 = new QPushButton(page_5);
        palaaButton_3->setObjectName(QStringLiteral("palaaButton_3"));
        palaaButton_3->setGeometry(QRect(1060, 10, 221, 101));
        palaaButton_3->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_7 = new QLabel(page_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 70, 701, 141));
        label_7->setFont(font4);
        label_7->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(page_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(240, 280, 701, 102));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        palaaButton_4 = new QPushButton(page_6);
        palaaButton_4->setObjectName(QStringLiteral("palaaButton_4"));
        palaaButton_4->setGeometry(QRect(1060, 10, 221, 101));
        palaaButton_4->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        label_8 = new QLabel(page_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(395, 85, 490, 160));
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(page_6);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(230, 240, 801, 341));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFont(font5);
        frame_2->setLayoutDirection(Qt::LeftToRight);
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(1);
        frame_2->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 9, -1, -1);
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font5);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_13);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_16);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_18);

        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_17);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_9 = new QLabel(page_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(215, 90, 850, 320));
        label_9->setFont(font4);
        label_9->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(page_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 430, 640, 150));
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(221, 221, 221);\n"
"border: 1px solid;\n"
"border-color: rgb(173, 173, 173);"));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        stackedWidget->addWidget(page_8);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Lue RFID-kortti kortinlukijassa", Q_NULLPTR));
        betaLogin->setText(QApplication::translate("MainWindow", "Kehitysvaiheen sis\303\244\303\244nkirjautuminen", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "PankkiSimulaatio1200", Q_NULLPTR));
        saldoButton->setText(QApplication::translate("MainWindow", "Saldo", Q_NULLPTR));
        tapahtumatButton->setText(QApplication::translate("MainWindow", "Tilitapahtumat", Q_NULLPTR));
        nostaButton->setText(QApplication::translate("MainWindow", "Nosta rahaa", Q_NULLPTR));
        uloskirjauduButton->setText(QApplication::translate("MainWindow", "Kirjaudu ulos", Q_NULLPTR));
        donateButton->setText(QApplication::translate("MainWindow", "Lahjoita \n"
"viinaa\n"
"suunnistukseen", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PankkiAutomaatti1200", Q_NULLPTR));
        palaaButton->setText(QApplication::translate("MainWindow", "Palaa p\303\244\303\244valikkoon", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Kuinka paljon haluat nostaa rahaa?", Q_NULLPTR));
        twentyButton->setText(QApplication::translate("MainWindow", "20\342\202\254", Q_NULLPTR));
        twohundredButton->setText(QApplication::translate("MainWindow", "200\342\202\254", Q_NULLPTR));
        fivehundredButton->setText(QApplication::translate("MainWindow", "500\342\202\254", Q_NULLPTR));
        fiftyButton->setText(QApplication::translate("MainWindow", "50\342\202\254", Q_NULLPTR));
        hundredButton->setText(QApplication::translate("MainWindow", "100\342\202\254", Q_NULLPTR));
        tenButton->setText(QApplication::translate("MainWindow", "10\342\202\254", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nosto", Q_NULLPTR));
        donateFifty->setText(QApplication::translate("MainWindow", "20\342\202\254", Q_NULLPTR));
        donateTwo->setText(QApplication::translate("MainWindow", "Kissanminttuker\303\244ys", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Lahjoitus", Q_NULLPTR));
        donateTen->setText(QApplication::translate("MainWindow", "5\342\202\254", Q_NULLPTR));
        palaaButton_2->setText(QApplication::translate("MainWindow", "Palaa p\303\244\303\244valikkoon", Q_NULLPTR));
        donateThree->setText(QApplication::translate("MainWindow", "Casperin Viinarahasto", Q_NULLPTR));
        donateHundred->setText(QApplication::translate("MainWindow", "50\342\202\254", Q_NULLPTR));
        donateOne->setText(QApplication::translate("MainWindow", "Virvokkeita Suunnistukseen", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Valitse Lahjoituskohde", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Valitse summa", Q_NULLPTR));
        palaaButton_3->setText(QApplication::translate("MainWindow", "Palaa p\303\244\303\244valikkoon", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Tilin saldo", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "T\303\244h\303\244n saldo:", Q_NULLPTR));
        palaaButton_4->setText(QApplication::translate("MainWindow", "Palaa p\303\244\303\244valikkoon", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Tilitapahtumat", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "1. nosto/lahjoitus", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "2. nosto/lahjoitus", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "3. nosto/lahjoitus", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "4. nosto/lahjoitus", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "5. nosto/lahjoitus", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Kirjauduitte onnistuneesti ulos!", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Kirjaudu sis\303\244\303\244n", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
