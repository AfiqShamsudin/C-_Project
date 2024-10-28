/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *mainLabel;
    QLabel *UsernameLbl;
    QLabel *PasswordLbl;
    QLineEdit *Editbx_Username;
    QLineEdit *Editbx_Password;
    QPushButton *loginbtn;
    QPushButton *cancelBtn;
    QLabel *label_pic;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(466, 297);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLabel = new QLabel(centralwidget);
        mainLabel->setObjectName("mainLabel");
        mainLabel->setGeometry(QRect(40, 0, 371, 50));
        mainLabel->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"	font: 20pt \"Segoe UI\";\n"
"	color: Blue;\n"
"	alignment: Center;\n"
"}"));
        UsernameLbl = new QLabel(centralwidget);
        UsernameLbl->setObjectName("UsernameLbl");
        UsernameLbl->setGeometry(QRect(40, 70, 91, 20));
        QFont font;
        font.setPointSize(11);
        UsernameLbl->setFont(font);
        UsernameLbl->setScaledContents(false);
        PasswordLbl = new QLabel(centralwidget);
        PasswordLbl->setObjectName("PasswordLbl");
        PasswordLbl->setGeometry(QRect(40, 120, 91, 20));
        PasswordLbl->setFont(font);
        PasswordLbl->setScaledContents(false);
        Editbx_Username = new QLineEdit(centralwidget);
        Editbx_Username->setObjectName("Editbx_Username");
        Editbx_Username->setGeometry(QRect(150, 70, 261, 28));
        QFont font1;
        font1.setPointSize(10);
        Editbx_Username->setFont(font1);
        Editbx_Username->setDragEnabled(false);
        Editbx_Username->setPlaceholderText(QString::fromUtf8("Please enter your username."));
        Editbx_Password = new QLineEdit(centralwidget);
        Editbx_Password->setObjectName("Editbx_Password");
        Editbx_Password->setGeometry(QRect(150, 120, 261, 28));
        Editbx_Password->setFont(font1);
        Editbx_Password->setEchoMode(QLineEdit::EchoMode::Password);
        loginbtn = new QPushButton(centralwidget);
        loginbtn->setObjectName("loginbtn");
        loginbtn->setGeometry(QRect(230, 190, 83, 29));
        loginbtn->setFont(font1);
        loginbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancelBtn = new QPushButton(centralwidget);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setGeometry(QRect(330, 190, 83, 29));
        cancelBtn->setFont(font1);
        cancelBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(50, 170, 61, 61));
        label_pic->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 466, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Portable Electronic Target - PET", nullptr));
        mainLabel->setText(QCoreApplication::translate("MainWindow", "Sign In ", nullptr));
        UsernameLbl->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        PasswordLbl->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        Editbx_Username->setText(QString());
        Editbx_Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter your password.", nullptr));
        loginbtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        cancelBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
