#ifndef MENUPAGE_H
#define MENUPAGE_H

#include <QMainWindow>
#include <QPainter>
#include <QBrush>
#include <QRect>
#include <QMouseEvent>
#include <QPoint>
#include <QLabel>
#include <QEvent>
//Add for new page

namespace Ui {
class MenuPage;
}

class MenuPage : public QMainWindow
{
    Q_OBJECT   

public:
    explicit MenuPage(QWidget *parent = nullptr);
    ~MenuPage();
    virtual void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);


protected:
    void mousePressEvent(QMouseEvent *event);


private:
    Ui::MenuPage *ui;
    QVector<QPoint> points;
    //just added
    int statusAmmo; // Variable to hold status
    int statusStart;
    int currentIndex;
    int totalScore;

    //just added recently
    int calculateScore(int bullet_x, int bullet_y);


private slots:;
    //===Just Added -start here===
    void drawTargetBoard(QPainter &painter);
    void updateUI(const QPoint &pos, int score);
    void drawMarks(QPainter &painter);
    void drawIndicators(QPainter &painter);

    //===Just Added -end here===
    void on_btn_Start_clicked();
    void on_btn_reset_clicked();
    void endGame();
    void on_pushButton_clicked();
};



#endif // MENUPAGE_H
