/********************************************************************************
** Form generated from reading UI file 'typeb.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPEB_H
#define UI_TYPEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_typeB
{
public:
    QWidget *centralwidget;
    QLabel *lbl_Hit_AreatypeB;
    QPushButton *btn2TypeA;
    QPushButton *btn_TypeB_Start;
    QPushButton *btn_TypeB_Reset;
    QLineEdit *totalScoreDisplay_TypeB;
    QLabel *targetScorelbl;
    QGraphicsView *graphicsView;
    QLabel *bulletCount_lbl;
    QListWidget *lstLogs_TypeB;
    QLineEdit *line_bulletCount;
    QLabel *bCountDisplay_TypeB;
    QLabel *lbl_Mouse_Area;
    QLabel *statusLabel_TypeB;
    QLineEdit *line_mouse_pos;
    QLabel *coodLabel_TypeB;
    QLabel *targetScorelbl_2;
    QLabel *label_2;
    QLabel *label;
    QGraphicsView *graphicsView_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *typeB)
    {
        if (typeB->objectName().isEmpty())
            typeB->setObjectName("typeB");
        typeB->resize(1093, 700);
        typeB->setMouseTracking(true);
        typeB->setTabletTracking(true);
        centralwidget = new QWidget(typeB);
        centralwidget->setObjectName("centralwidget");
        lbl_Hit_AreatypeB = new QLabel(centralwidget);
        lbl_Hit_AreatypeB->setObjectName("lbl_Hit_AreatypeB");
        lbl_Hit_AreatypeB->setGeometry(QRect(110, 30, 691, 611));
        lbl_Hit_AreatypeB->setMouseTracking(true);
        lbl_Hit_AreatypeB->setTabletTracking(true);
        lbl_Hit_AreatypeB->setAcceptDrops(true);
        lbl_Hit_AreatypeB->setFrameShape(QFrame::Shape::Box);
        lbl_Hit_AreatypeB->setLineWidth(2);
        btn2TypeA = new QPushButton(centralwidget);
        btn2TypeA->setObjectName("btn2TypeA");
        btn2TypeA->setGeometry(QRect(10, 30, 83, 29));
        btn_TypeB_Start = new QPushButton(centralwidget);
        btn_TypeB_Start->setObjectName("btn_TypeB_Start");
        btn_TypeB_Start->setGeometry(QRect(10, 70, 83, 29));
        btn_TypeB_Start->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_TypeB_Reset = new QPushButton(centralwidget);
        btn_TypeB_Reset->setObjectName("btn_TypeB_Reset");
        btn_TypeB_Reset->setGeometry(QRect(10, 110, 83, 29));
        btn_TypeB_Reset->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        totalScoreDisplay_TypeB = new QLineEdit(centralwidget);
        totalScoreDisplay_TypeB->setObjectName("totalScoreDisplay_TypeB");
        totalScoreDisplay_TypeB->setGeometry(QRect(840, 250, 201, 28));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(totalScoreDisplay_TypeB->sizePolicy().hasHeightForWidth());
        totalScoreDisplay_TypeB->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        totalScoreDisplay_TypeB->setFont(font);
        totalScoreDisplay_TypeB->setAcceptDrops(false);
        totalScoreDisplay_TypeB->setAutoFillBackground(false);
        totalScoreDisplay_TypeB->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
" background-color: white;\n"
"color:black;\n"
"\n"
"}"));
        totalScoreDisplay_TypeB->setReadOnly(true);
        targetScorelbl = new QLabel(centralwidget);
        targetScorelbl->setObjectName("targetScorelbl");
        targetScorelbl->setGeometry(QRect(840, 223, 181, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setKerning(true);
        targetScorelbl->setFont(font1);
        targetScorelbl->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        targetScorelbl->setScaledContents(false);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(820, 80, 241, 561));
        graphicsView->setMouseTracking(false);
        graphicsView->setTabletTracking(false);
        graphicsView->setAcceptDrops(false);
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"Background: rgb(104, 125, 147);\n"
"\n"
"}"));
        graphicsView->setFrameShape(QFrame::Shape::Box);
        graphicsView->setFrameShadow(QFrame::Shadow::Raised);
        graphicsView->setLineWidth(2);
        graphicsView->setInteractive(true);
        bulletCount_lbl = new QLabel(centralwidget);
        bulletCount_lbl->setObjectName("bulletCount_lbl");
        bulletCount_lbl->setGeometry(QRect(840, 92, 181, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        bulletCount_lbl->setFont(font2);
        bulletCount_lbl->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        lstLogs_TypeB = new QListWidget(centralwidget);
        lstLogs_TypeB->setObjectName("lstLogs_TypeB");
        lstLogs_TypeB->setGeometry(QRect(840, 322, 201, 281));
        QFont font3;
        font3.setPointSize(10);
        lstLogs_TypeB->setFont(font3);
        line_bulletCount = new QLineEdit(centralwidget);
        line_bulletCount->setObjectName("line_bulletCount");
        line_bulletCount->setEnabled(false);
        line_bulletCount->setGeometry(QRect(840, 116, 201, 31));
        line_bulletCount->setAcceptDrops(false);
        line_bulletCount->setEchoMode(QLineEdit::EchoMode::Normal);
        line_bulletCount->setCursorPosition(0);
        line_bulletCount->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        line_bulletCount->setReadOnly(true);
        bCountDisplay_TypeB = new QLabel(centralwidget);
        bCountDisplay_TypeB->setObjectName("bCountDisplay_TypeB");
        bCountDisplay_TypeB->setGeometry(QRect(848, 122, 61, 20));
        bCountDisplay_TypeB->setFont(font);
        lbl_Mouse_Area = new QLabel(centralwidget);
        lbl_Mouse_Area->setObjectName("lbl_Mouse_Area");
        lbl_Mouse_Area->setGeometry(QRect(840, 153, 181, 31));
        lbl_Mouse_Area->setFont(font2);
        lbl_Mouse_Area->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        statusLabel_TypeB = new QLabel(centralwidget);
        statusLabel_TypeB->setObjectName("statusLabel_TypeB");
        statusLabel_TypeB->setGeometry(QRect(840, 610, 181, 20));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        statusLabel_TypeB->setFont(font4);
        line_mouse_pos = new QLineEdit(centralwidget);
        line_mouse_pos->setObjectName("line_mouse_pos");
        line_mouse_pos->setGeometry(QRect(840, 186, 201, 31));
        line_mouse_pos->setEchoMode(QLineEdit::EchoMode::Normal);
        line_mouse_pos->setCursorPosition(0);
        line_mouse_pos->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        line_mouse_pos->setReadOnly(true);
        coodLabel_TypeB = new QLabel(centralwidget);
        coodLabel_TypeB->setObjectName("coodLabel_TypeB");
        coodLabel_TypeB->setEnabled(false);
        coodLabel_TypeB->setGeometry(QRect(844, 192, 151, 20));
        coodLabel_TypeB->setFont(font);
        coodLabel_TypeB->setMouseTracking(true);
        coodLabel_TypeB->setTabletTracking(true);
        targetScorelbl_2 = new QLabel(centralwidget);
        targetScorelbl_2->setObjectName("targetScorelbl_2");
        targetScorelbl_2->setGeometry(QRect(840, 290, 181, 31));
        targetScorelbl_2->setFont(font2);
        targetScorelbl_2->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(820, 17, 231, 41));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        label_2->setFont(font5);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(820, 47, 261, 31));
        label->setFont(font5);
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(180, 50, 561, 571));
        typeB->setCentralWidget(centralwidget);
        graphicsView->raise();
        lbl_Hit_AreatypeB->raise();
        btn2TypeA->raise();
        btn_TypeB_Start->raise();
        btn_TypeB_Reset->raise();
        totalScoreDisplay_TypeB->raise();
        targetScorelbl->raise();
        bulletCount_lbl->raise();
        lstLogs_TypeB->raise();
        line_bulletCount->raise();
        bCountDisplay_TypeB->raise();
        lbl_Mouse_Area->raise();
        statusLabel_TypeB->raise();
        line_mouse_pos->raise();
        coodLabel_TypeB->raise();
        targetScorelbl_2->raise();
        label_2->raise();
        label->raise();
        graphicsView_2->raise();
        menubar = new QMenuBar(typeB);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1093, 25));
        typeB->setMenuBar(menubar);
        statusbar = new QStatusBar(typeB);
        statusbar->setObjectName("statusbar");
        typeB->setStatusBar(statusbar);

        retranslateUi(typeB);

        QMetaObject::connectSlotsByName(typeB);
    } // setupUi

    void retranslateUi(QMainWindow *typeB)
    {
        typeB->setWindowTitle(QCoreApplication::translate("typeB", "MainWindow", nullptr));
        lbl_Hit_AreatypeB->setText(QString());
        btn2TypeA->setText(QCoreApplication::translate("typeB", "TYPE A", nullptr));
        btn_TypeB_Start->setText(QCoreApplication::translate("typeB", "Start", nullptr));
        btn_TypeB_Reset->setText(QCoreApplication::translate("typeB", "Reset", nullptr));
        totalScoreDisplay_TypeB->setText(QCoreApplication::translate("typeB", "0", nullptr));
        targetScorelbl->setText(QCoreApplication::translate("typeB", "Hit scores: ", nullptr));
        bulletCount_lbl->setText(QCoreApplication::translate("typeB", "Bullet Count's", nullptr));
        line_bulletCount->setText(QString());
        bCountDisplay_TypeB->setText(QCoreApplication::translate("typeB", "0 / 20", nullptr));
        lbl_Mouse_Area->setText(QCoreApplication::translate("typeB", "Mouse Area ", nullptr));
        statusLabel_TypeB->setText(QCoreApplication::translate("typeB", "Status: 0 Initial Start", nullptr));
        line_mouse_pos->setText(QString());
        coodLabel_TypeB->setText(QCoreApplication::translate("typeB", "X = 0, Y = 0", nullptr));
        targetScorelbl_2->setText(QCoreApplication::translate("typeB", "Bullet Hit Logs:", nullptr));
        label_2->setText(QCoreApplication::translate("typeB", "Welcome to Portable ", nullptr));
        label->setText(QCoreApplication::translate("typeB", "Electronic Training -TYPE B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class typeB: public Ui_typeB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPEB_H
