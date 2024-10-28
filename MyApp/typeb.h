#ifndef TYPEB_H
#define TYPEB_H

#include <QMainWindow>
#include <QPainter>
#include <QBrush>
#include <QRect>
#include <QMouseEvent>
#include <QPoint>
#include <QLabel>
#include <QEvent>
#include "typeb.h"
#include "ui_menupage.h"

namespace Ui {
class typeB;
}

class typeB : public QMainWindow
{
    Q_OBJECT

public:
    explicit typeB(QWidget *parent = nullptr);
    // virtual void paintEvent(QPaintEvent *event);
    ~typeB();
     //move the X and Y in type A


protected:
    void mouseMoveEvent(QMouseEvent *event2) override;
    // void mousePressEvent(QMouseEvent *event);



private slots:
    void on_btn_TypeB_Reset_clicked(); // Called for button Reset
    void on_btn_TypeB_Start_clicked(); // Called for button Start
    void on_btn2TypeA_clicked(); // Called for button To go Back to Type A

    // void drawTargetBoard_TypeB(QPainter &painter);
    // void drawMarks_TypeB(QPainter &painter);
    // void drawIndicators_TypeB (QPainter &painter);
    // void updateUI (const QPoint $pos, int score );

private:
    Ui::typeB *ui;
    QVector<QPoint> points; // Marking point's
    int statusAmmo_TB; // Variable to hold ammo status for TypeB
    int statusStart_TB; // Variable to hold ammo status for TypeB
    int currentIndex_TB; // Variable to hold ammo status for TypeB
    int totalScore_TB; // Variable to hold total score for TypeB
};

#endif // TYPEB_H


