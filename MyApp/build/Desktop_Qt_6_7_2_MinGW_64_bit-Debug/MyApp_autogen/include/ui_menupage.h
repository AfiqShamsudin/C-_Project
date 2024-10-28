/********************************************************************************
** Form generated from reading UI file 'menupage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPAGE_H
#define UI_MENUPAGE_H

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

class Ui_MenuPage
{
public:
    QWidget *centralwidget;
    QLabel *lbl_hit_area;
    QLabel *bulletCount_lbl;
    QLabel *targetScorelbl;
    QLabel *targetScorelbl_2;
    QGraphicsView *graphicsView;
    QLineEdit *totalScoreDisplay;
    QLineEdit *line_bulletCount;
    QPushButton *btn_reset;
    QPushButton *btn_Start;
    QLabel *label_no1T;
    QLabel *label_2;
    QLabel *label_no2T;
    QLabel *label_no3T;
    QLabel *label_no4T;
    QLabel *label_no5T;
    QLabel *label_no6T;
    QLabel *label;
    QLabel *label_no1Left;
    QLabel *label_no3B;
    QLabel *label_no2B;
    QLabel *label_no6B;
    QLabel *label_no4B;
    QLabel *label_no1B;
    QLabel *label_no5B;
    QLabel *label_no1Left_2;
    QLabel *label_no1Left_3;
    QLabel *label_no1Left_4;
    QLabel *label_no1Left_5;
    QLabel *label_no1Left_6;
    QLabel *label_no2R;
    QLabel *label_no3R;
    QLabel *label_no4R;
    QLabel *label_no6R;
    QLabel *label_no5R;
    QLabel *label_no1R;
    QLabel *lbl_Mouse_Area;
    QLineEdit *line_mouse_pos;
    QLabel *coodLabel;
    QLabel *statusLabel;
    QLabel *bCountDisplay;
    QListWidget *lstLogs;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuPage)
    {
        if (MenuPage->objectName().isEmpty())
            MenuPage->setObjectName("MenuPage");
        MenuPage->setEnabled(true);
        MenuPage->resize(952, 643);
        MenuPage->setAcceptDrops(false);
        MenuPage->setDocumentMode(false);
        MenuPage->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MenuPage);
        centralwidget->setObjectName("centralwidget");
        lbl_hit_area = new QLabel(centralwidget);
        lbl_hit_area->setObjectName("lbl_hit_area");
        lbl_hit_area->setEnabled(true);
        lbl_hit_area->setGeometry(QRect(120, 70, 500, 500));
        QFont font;
        font.setPointSize(18);
        lbl_hit_area->setFont(font);
        lbl_hit_area->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        lbl_hit_area->setMouseTracking(true);
        lbl_hit_area->setTabletTracking(true);
        lbl_hit_area->setAcceptDrops(true);
        lbl_hit_area->setAutoFillBackground(false);
        lbl_hit_area->setFrameShape(QFrame::Shape::Box);
        lbl_hit_area->setLineWidth(2);
        lbl_hit_area->setAlignment(Qt::AlignmentFlag::AlignCenter);
        bulletCount_lbl = new QLabel(centralwidget);
        bulletCount_lbl->setObjectName("bulletCount_lbl");
        bulletCount_lbl->setGeometry(QRect(690, 90, 181, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        bulletCount_lbl->setFont(font1);
        bulletCount_lbl->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        targetScorelbl = new QLabel(centralwidget);
        targetScorelbl->setObjectName("targetScorelbl");
        targetScorelbl->setGeometry(QRect(690, 221, 181, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setKerning(true);
        targetScorelbl->setFont(font2);
        targetScorelbl->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        targetScorelbl->setScaledContents(false);
        targetScorelbl_2 = new QLabel(centralwidget);
        targetScorelbl_2->setObjectName("targetScorelbl_2");
        targetScorelbl_2->setGeometry(QRect(690, 288, 181, 31));
        targetScorelbl_2->setFont(font1);
        targetScorelbl_2->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(670, 70, 241, 501));
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
        totalScoreDisplay = new QLineEdit(centralwidget);
        totalScoreDisplay->setObjectName("totalScoreDisplay");
        totalScoreDisplay->setGeometry(QRect(690, 248, 201, 28));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(totalScoreDisplay->sizePolicy().hasHeightForWidth());
        totalScoreDisplay->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(true);
        totalScoreDisplay->setFont(font3);
        totalScoreDisplay->setAcceptDrops(false);
        totalScoreDisplay->setAutoFillBackground(false);
        totalScoreDisplay->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
" background-color: white;\n"
"color:black;\n"
"\n"
"}"));
        totalScoreDisplay->setReadOnly(true);
        line_bulletCount = new QLineEdit(centralwidget);
        line_bulletCount->setObjectName("line_bulletCount");
        line_bulletCount->setEnabled(false);
        line_bulletCount->setGeometry(QRect(690, 114, 201, 31));
        line_bulletCount->setAcceptDrops(false);
        line_bulletCount->setEchoMode(QLineEdit::EchoMode::Normal);
        line_bulletCount->setCursorPosition(0);
        line_bulletCount->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        line_bulletCount->setReadOnly(true);
        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName("btn_reset");
        btn_reset->setGeometry(QRect(20, 150, 83, 29));
        btn_reset->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_Start = new QPushButton(centralwidget);
        btn_Start->setObjectName("btn_Start");
        btn_Start->setGeometry(QRect(20, 110, 83, 29));
        btn_Start->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_no1T = new QLabel(centralwidget);
        label_no1T->setObjectName("label_no1T");
        label_no1T->setGeometry(QRect(365, 128, 16, 20));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        label_no1T->setFont(font4);
        label_no1T->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 10, 501, 41));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        label_2->setFont(font5);
        label_no2T = new QLabel(centralwidget);
        label_no2T->setObjectName("label_no2T");
        label_no2T->setGeometry(QRect(365, 148, 16, 20));
        label_no2T->setFont(font4);
        label_no2T->setStyleSheet(QString::fromUtf8(""));
        label_no3T = new QLabel(centralwidget);
        label_no3T->setObjectName("label_no3T");
        label_no3T->setGeometry(QRect(365, 168, 16, 20));
        label_no3T->setFont(font4);
        label_no3T->setStyleSheet(QString::fromUtf8(""));
        label_no4T = new QLabel(centralwidget);
        label_no4T->setObjectName("label_no4T");
        label_no4T->setGeometry(QRect(365, 188, 16, 20));
        label_no4T->setFont(font4);
        label_no4T->setStyleSheet(QString::fromUtf8(""));
        label_no5T = new QLabel(centralwidget);
        label_no5T->setObjectName("label_no5T");
        label_no5T->setGeometry(QRect(365, 208, 16, 20));
        label_no5T->setFont(font4);
        label_no5T->setStyleSheet(QString::fromUtf8(""));
        label_no6T = new QLabel(centralwidget);
        label_no6T->setObjectName("label_no6T");
        label_no6T->setGeometry(QRect(365, 228, 16, 20));
        label_no6T->setFont(font4);
        label_no6T->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 310, 21, 21));
        label->setFont(font5);
        label_no1Left = new QLabel(centralwidget);
        label_no1Left->setObjectName("label_no1Left");
        label_no1Left->setGeometry(QRect(175, 310, 16, 20));
        label_no1Left->setFont(font4);
        label_no1Left->setStyleSheet(QString::fromUtf8(""));
        label_no3B = new QLabel(centralwidget);
        label_no3B->setObjectName("label_no3B");
        label_no3B->setGeometry(QRect(365, 470, 16, 20));
        label_no3B->setFont(font4);
        label_no3B->setStyleSheet(QString::fromUtf8(""));
        label_no2B = new QLabel(centralwidget);
        label_no2B->setObjectName("label_no2B");
        label_no2B->setGeometry(QRect(365, 490, 16, 20));
        label_no2B->setFont(font4);
        label_no2B->setStyleSheet(QString::fromUtf8(""));
        label_no6B = new QLabel(centralwidget);
        label_no6B->setObjectName("label_no6B");
        label_no6B->setGeometry(QRect(365, 410, 16, 20));
        label_no6B->setFont(font4);
        label_no6B->setStyleSheet(QString::fromUtf8(""));
        label_no4B = new QLabel(centralwidget);
        label_no4B->setObjectName("label_no4B");
        label_no4B->setGeometry(QRect(365, 450, 16, 20));
        label_no4B->setFont(font4);
        label_no4B->setStyleSheet(QString::fromUtf8(""));
        label_no1B = new QLabel(centralwidget);
        label_no1B->setObjectName("label_no1B");
        label_no1B->setGeometry(QRect(365, 510, 16, 20));
        label_no1B->setFont(font4);
        label_no1B->setStyleSheet(QString::fromUtf8(""));
        label_no5B = new QLabel(centralwidget);
        label_no5B->setObjectName("label_no5B");
        label_no5B->setGeometry(QRect(365, 430, 16, 20));
        label_no5B->setFont(font4);
        label_no5B->setStyleSheet(QString::fromUtf8(""));
        label_no1Left_2 = new QLabel(centralwidget);
        label_no1Left_2->setObjectName("label_no1Left_2");
        label_no1Left_2->setGeometry(QRect(195, 310, 16, 20));
        label_no1Left_2->setFont(font4);
        label_no1Left_2->setStyleSheet(QString::fromUtf8(""));
        label_no1Left_3 = new QLabel(centralwidget);
        label_no1Left_3->setObjectName("label_no1Left_3");
        label_no1Left_3->setGeometry(QRect(215, 310, 16, 20));
        label_no1Left_3->setFont(font4);
        label_no1Left_3->setStyleSheet(QString::fromUtf8(""));
        label_no1Left_4 = new QLabel(centralwidget);
        label_no1Left_4->setObjectName("label_no1Left_4");
        label_no1Left_4->setGeometry(QRect(235, 310, 16, 20));
        label_no1Left_4->setFont(font4);
        label_no1Left_4->setStyleSheet(QString::fromUtf8(""));
        label_no1Left_5 = new QLabel(centralwidget);
        label_no1Left_5->setObjectName("label_no1Left_5");
        label_no1Left_5->setGeometry(QRect(255, 310, 16, 20));
        label_no1Left_5->setFont(font4);
        label_no1Left_5->setStyleSheet(QString::fromUtf8(""));
        label_no1Left_6 = new QLabel(centralwidget);
        label_no1Left_6->setObjectName("label_no1Left_6");
        label_no1Left_6->setGeometry(QRect(275, 310, 16, 20));
        label_no1Left_6->setFont(font4);
        label_no1Left_6->setStyleSheet(QString::fromUtf8(""));
        label_no2R = new QLabel(centralwidget);
        label_no2R->setObjectName("label_no2R");
        label_no2R->setGeometry(QRect(535, 310, 16, 20));
        label_no2R->setFont(font4);
        label_no2R->setStyleSheet(QString::fromUtf8(""));
        label_no3R = new QLabel(centralwidget);
        label_no3R->setObjectName("label_no3R");
        label_no3R->setGeometry(QRect(515, 310, 16, 20));
        label_no3R->setFont(font4);
        label_no3R->setStyleSheet(QString::fromUtf8(""));
        label_no4R = new QLabel(centralwidget);
        label_no4R->setObjectName("label_no4R");
        label_no4R->setGeometry(QRect(495, 310, 16, 20));
        label_no4R->setFont(font4);
        label_no4R->setStyleSheet(QString::fromUtf8(""));
        label_no6R = new QLabel(centralwidget);
        label_no6R->setObjectName("label_no6R");
        label_no6R->setGeometry(QRect(455, 310, 16, 20));
        label_no6R->setFont(font4);
        label_no6R->setStyleSheet(QString::fromUtf8(""));
        label_no5R = new QLabel(centralwidget);
        label_no5R->setObjectName("label_no5R");
        label_no5R->setGeometry(QRect(475, 310, 16, 20));
        label_no5R->setFont(font4);
        label_no5R->setStyleSheet(QString::fromUtf8(""));
        label_no1R = new QLabel(centralwidget);
        label_no1R->setObjectName("label_no1R");
        label_no1R->setGeometry(QRect(555, 310, 16, 20));
        label_no1R->setFont(font4);
        label_no1R->setStyleSheet(QString::fromUtf8(""));
        lbl_Mouse_Area = new QLabel(centralwidget);
        lbl_Mouse_Area->setObjectName("lbl_Mouse_Area");
        lbl_Mouse_Area->setGeometry(QRect(690, 151, 181, 31));
        lbl_Mouse_Area->setFont(font1);
        lbl_Mouse_Area->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"\n"
"color: black;\n"
"}"));
        line_mouse_pos = new QLineEdit(centralwidget);
        line_mouse_pos->setObjectName("line_mouse_pos");
        line_mouse_pos->setGeometry(QRect(690, 184, 201, 31));
        line_mouse_pos->setEchoMode(QLineEdit::EchoMode::Normal);
        line_mouse_pos->setCursorPosition(0);
        line_mouse_pos->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        line_mouse_pos->setReadOnly(true);
        coodLabel = new QLabel(centralwidget);
        coodLabel->setObjectName("coodLabel");
        coodLabel->setEnabled(false);
        coodLabel->setGeometry(QRect(694, 190, 151, 20));
        coodLabel->setFont(font3);
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(690, 540, 181, 20));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(true);
        statusLabel->setFont(font6);
        bCountDisplay = new QLabel(centralwidget);
        bCountDisplay->setObjectName("bCountDisplay");
        bCountDisplay->setGeometry(QRect(698, 120, 61, 20));
        bCountDisplay->setFont(font3);
        lstLogs = new QListWidget(centralwidget);
        lstLogs->setObjectName("lstLogs");
        lstLogs->setGeometry(QRect(690, 320, 201, 211));
        QFont font7;
        font7.setPointSize(10);
        lstLogs->setFont(font7);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 70, 83, 29));
        MenuPage->setCentralWidget(centralwidget);
        graphicsView->raise();
        lbl_hit_area->raise();
        bulletCount_lbl->raise();
        targetScorelbl->raise();
        targetScorelbl_2->raise();
        totalScoreDisplay->raise();
        line_bulletCount->raise();
        btn_reset->raise();
        btn_Start->raise();
        label_no1T->raise();
        label_2->raise();
        label_no2T->raise();
        label_no3T->raise();
        label_no4T->raise();
        label_no5T->raise();
        label_no6T->raise();
        label->raise();
        label_no1Left->raise();
        label_no3B->raise();
        label_no2B->raise();
        label_no6B->raise();
        label_no4B->raise();
        label_no1B->raise();
        label_no5B->raise();
        label_no1Left_2->raise();
        label_no1Left_3->raise();
        label_no1Left_4->raise();
        label_no1Left_5->raise();
        label_no1Left_6->raise();
        label_no2R->raise();
        label_no3R->raise();
        label_no4R->raise();
        label_no6R->raise();
        label_no5R->raise();
        label_no1R->raise();
        lbl_Mouse_Area->raise();
        line_mouse_pos->raise();
        coodLabel->raise();
        statusLabel->raise();
        bCountDisplay->raise();
        lstLogs->raise();
        pushButton->raise();
        menubar = new QMenuBar(MenuPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 952, 25));
        MenuPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuPage);
        statusbar->setObjectName("statusbar");
        MenuPage->setStatusBar(statusbar);

        retranslateUi(MenuPage);
        QObject::connect(btn_reset, &QPushButton::clicked, lstLogs, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(MenuPage);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPage)
    {
        MenuPage->setWindowTitle(QCoreApplication::translate("MenuPage", "Portable Electronic Target (P.E.T) - Main Page", nullptr));
        lbl_hit_area->setText(QString());
        bulletCount_lbl->setText(QCoreApplication::translate("MenuPage", "Bullet Count's", nullptr));
        targetScorelbl->setText(QCoreApplication::translate("MenuPage", "Hit scores: ", nullptr));
        targetScorelbl_2->setText(QCoreApplication::translate("MenuPage", "Bullet Hit Logs:", nullptr));
        totalScoreDisplay->setText(QCoreApplication::translate("MenuPage", "0", nullptr));
        line_bulletCount->setText(QString());
        btn_reset->setText(QCoreApplication::translate("MenuPage", "Reset", nullptr));
        btn_Start->setText(QCoreApplication::translate("MenuPage", "Start", nullptr));
        label_no1T->setText(QCoreApplication::translate("MenuPage", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MenuPage", "Welcome to Portable Electronic Training", nullptr));
        label_no2T->setText(QCoreApplication::translate("MenuPage", "2", nullptr));
        label_no3T->setText(QCoreApplication::translate("MenuPage", "3", nullptr));
        label_no4T->setText(QCoreApplication::translate("MenuPage", "4", nullptr));
        label_no5T->setText(QCoreApplication::translate("MenuPage", "5", nullptr));
        label_no6T->setText(QCoreApplication::translate("MenuPage", "6", nullptr));
        label->setText(QCoreApplication::translate("MenuPage", "*", nullptr));
        label_no1Left->setText(QCoreApplication::translate("MenuPage", "1", nullptr));
        label_no3B->setText(QCoreApplication::translate("MenuPage", "3", nullptr));
        label_no2B->setText(QCoreApplication::translate("MenuPage", "2", nullptr));
        label_no6B->setText(QCoreApplication::translate("MenuPage", "6", nullptr));
        label_no4B->setText(QCoreApplication::translate("MenuPage", "4", nullptr));
        label_no1B->setText(QCoreApplication::translate("MenuPage", "1", nullptr));
        label_no5B->setText(QCoreApplication::translate("MenuPage", "5", nullptr));
        label_no1Left_2->setText(QCoreApplication::translate("MenuPage", "2", nullptr));
        label_no1Left_3->setText(QCoreApplication::translate("MenuPage", "3", nullptr));
        label_no1Left_4->setText(QCoreApplication::translate("MenuPage", "4", nullptr));
        label_no1Left_5->setText(QCoreApplication::translate("MenuPage", "5", nullptr));
        label_no1Left_6->setText(QCoreApplication::translate("MenuPage", "6", nullptr));
        label_no2R->setText(QCoreApplication::translate("MenuPage", "2", nullptr));
        label_no3R->setText(QCoreApplication::translate("MenuPage", "3", nullptr));
        label_no4R->setText(QCoreApplication::translate("MenuPage", "4", nullptr));
        label_no6R->setText(QCoreApplication::translate("MenuPage", "6", nullptr));
        label_no5R->setText(QCoreApplication::translate("MenuPage", "5", nullptr));
        label_no1R->setText(QCoreApplication::translate("MenuPage", "1", nullptr));
        lbl_Mouse_Area->setText(QCoreApplication::translate("MenuPage", "Mouse Area ", nullptr));
        line_mouse_pos->setText(QString());
        coodLabel->setText(QCoreApplication::translate("MenuPage", "X = 0, Y = 0", nullptr));
        statusLabel->setText(QCoreApplication::translate("MenuPage", "Status: 0 Initial Start", nullptr));
        bCountDisplay->setText(QCoreApplication::translate("MenuPage", "0 / 20", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuPage", "TYPE B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPage: public Ui_MenuPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPAGE_H
