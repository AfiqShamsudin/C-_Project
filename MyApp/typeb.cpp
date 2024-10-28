#include "typeb.h"
#include "ui_typeb.h"
#include "menupage.h"

#include <QPaintEvent>
#include <QPixmap>
#include <QEvent>
#include <QCursor>
#include <QDebug>
#include <QString>
#include <QLabel>
#include <QPainter>
#include <QMouseEvent>
#include <cmath>

typeB::typeB(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::typeB)
    , statusAmmo_TB(0)
    , statusStart_TB(0)   // Initialize statusAmmo and statusStart to 0
    , currentIndex_TB(0)
    , totalScore_TB(0)    // Initialize totalScore to 0
{
    ui->setupUi(this);
    setWindowTitle("Target Shooting - TYPE B");

    // Enable mouse tracking
    setMouseTracking(true);
    centralWidget()->setMouseTracking(true);
}

// void typeB::paintEvent(QPaintEvent *event){
//     QPainter painter (this);
//     painter.setRenderHint(QPainter::Antialiasing);  // Enable smooth rendering

//     drawTargetBoard_TypeB(painter);
//     drawMarks_TypeB(painter);
//     drawIndicators_TypeB(painter);

// }



typeB::~typeB()
{
    delete ui;
}

// void typeB::drawTargetBoard_TypeB(QPainter &painter)
// {

// }

// void typeB::drawMarks_TypeB(QPainter &painter)
// {

// }

// void typeB::drawIndicators_TypeB(QPainter &painter)
// {

// }


void typeB::mouseMoveEvent(QMouseEvent* event2)
{
    int x2 = event2->position().x();  // Use position() instead of x()
    int y2 = event2->position().y();  // Use position() instead of y()

    ui->coodLabel_TypeB->setText(QString("X = %1 , Y = %2").arg(x2).arg(y2));
}



void typeB::on_btn_TypeB_Reset_clicked()
{

}


void typeB::on_btn_TypeB_Start_clicked()
{

}


void typeB::on_btn2TypeA_clicked()
{
    this->hide();
    MenuPage *menupage = new MenuPage();
    menupage->show();
}

