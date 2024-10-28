#include "menupage.h"
#include "ui_menupage.h"
#include <QPaintEvent>
#include <QPixmap>
#include <QEvent>
#include <QCursor>
#include <QDebug>
#include <QString>
#include <QLabel>
#include <QMouseEvent>
#include <cmath>
#include "typeb.h"

MenuPage::MenuPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuPage)
    , statusAmmo(0)
    , statusStart(0)   // Initialize statusAmmo and statusStart to 0
    , currentIndex(0)
    , totalScore(0)    // Initialize totalScore to 0
{
    ui->setupUi(this);

    QCursor customCursor(QPixmap(":/assets/assets/target_24.png"));

    // Set custom cursor for the hit area and all labels
    ui->lbl_hit_area->setCursor(customCursor);

    QLabel* labels[] = {
        ui->label_no1T, ui->label_no2T, ui->label_no3T, ui->label_no4T, ui->label_no5T, ui->label_no6T,
        ui->label_no1Left, ui->label_no1Left_2, ui->label_no1Left_3, ui->label_no1Left_4, ui->label_no1Left_5, ui->label_no1Left_6,
        ui->label_no1R, ui->label_no2R, ui->label_no3R, ui->label_no4R, ui->label_no5R, ui->label_no6R,
        ui->label_no1B, ui->label_no2B, ui->label_no3B, ui->label_no4B, ui->label_no5B, ui->label_no6B
    };

    for(QLabel* label : labels) {
        label->setCursor(customCursor);
    }

    // Enable mouse tracking
    setMouseTracking(true);
    centralWidget()->setMouseTracking(true);
}

MenuPage::~MenuPage() {
    delete ui;
}

// Paint event for drawing the target board and marks
void MenuPage::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // Enable smooth rendering

    drawTargetBoard(painter);   // Draw the target board
    drawMarks(painter);         // Draw blue marks on the board
    drawIndicators(painter);    // Draw red and blue indicator ellipses
}

// Function to draw the target board
void MenuPage::drawTargetBoard(QPainter &painter) {
    QPen pen(Qt::black, 2);
    painter.setPen(pen);

    // Draw outer and inner circles
    for (int i = 0; i < 7; ++i) {
        int size = 400 - (i * 40);  // Decreasing size for inner circles
        painter.drawEllipse(QRect(170 + (i * 20), 130 + (i * 20), size, size));
    }

    // Draw smaller red circles
    painter.setPen(QPen(Qt::red, 2));
    for (int i = 0; i < 3; ++i) {
        int size = 160 - (i * 40);
        painter.drawEllipse(QRect(290 + (i * 20), 250 + (i * 20), size, size));
    }

    // Draw the bullseye
    painter.drawEllipse(QRect(350, 310, 40, 40));
}

// Function to draw the blue marks
void MenuPage::drawMarks(QPainter &painter) {
    painter.setBrush(Qt::blue);
    for (const QPoint &point : points) {
        painter.drawEllipse(point, 5, 5);  // Draw each point with a radius of 5
    }
}

// Function to draw red and blue indicator ellipses
void MenuPage::drawIndicators(QPainter &painter) {
    struct Indicator {
        int x, y, radius;
        QColor color;
    };

    Indicator indicators[] = {
        {368, 326, 5, Qt::red}, {120, 70, 5, Qt::red}, {617, 70, 5, Qt::red},
        {120, 565, 5, Qt::red}, {617, 565, 5, Qt::red}, {369, 125, 5, Qt::blue},
        {369, 530, 5, Qt::blue}, {166, 326, 5, Qt::blue}
    };

    for (const Indicator &ind : indicators) {
        painter.setPen(QPen(ind.color, 2));
        painter.drawEllipse(QRect(ind.x, ind.y, ind.radius, ind.radius));
    }
}

// Mouse press event for placing marks and calculating the score
void MenuPage::mousePressEvent(QMouseEvent *event) {
    QRect targetArea(120, 70, 500, 500);  // Define target area for valid hits

    if (targetArea.contains(event->pos()) && event->button() == Qt::LeftButton && statusStart == 1) {
        if (statusAmmo < 20) {
            // Register the hit
            points.append(event->pos());
            statusAmmo++;

            // Update the score
            int score = calculateScore(event->position().x(), event->position().y());  // Use position() instead of x() and y()
            totalScore += score;  // Add the current shot's score to totalScore
            updateUI(event->pos(), score);
        } else {
            endGame();  // End game when ammo is depleted
        }
        update();  // Repaint the widget
    } else {
        qDebug() << "Out of shooting board";
    }
}


// Update UI after each shot
void MenuPage::updateUI(const QPoint &pos, int score) {
    ui->bCountDisplay->setText(QString::number(statusAmmo) + " / 20");
    ui->statusLabel->setText("Status: Aim target and shoot!");
    ui->lstLogs->addItem("Bullet " + QString::number(statusAmmo) + " hit at (" + QString::number(pos.x()) + ", " + QString::number(pos.y()) + ")");
    ui->lstLogs->addItem("Score for this shot: " + QString::number(score));

    // Update the total score in the QLineEdit
    ui->totalScoreDisplay->setText(QString::number(totalScore));
}

// Calculate score based on distance from the center
int MenuPage::calculateScore(int bullet_x, int bullet_y) {
    // Calculate distance using the new position method
    double distance = std::sqrt(std::pow(bullet_x - 368, 2) + std::pow(bullet_y - 326, 2));

    if (distance <= 20) return 10;  // Bullseye
    if (distance <= 40) return 9;
    if (distance <= 60) return 8;
    if (distance <= 80) return 7;
    if (distance <= 100) return 6;
    if (distance <= 120) return 5;
    if (distance <= 140) return 4;
    if (distance <= 160) return 3;
    if (distance <= 180) return 2;
    if (distance <= 200) return 1;
    return 0;  // Hit outside of the target board will get 0 mark
}


// End the game when ammo is depleted
void MenuPage::endGame() {
    ui->statusLabel->setText("Out of Ammo. Game Over.");
    ui->lstLogs->addItem("Game Over. Out of Ammo.");
}

// Mouse move event to display coordinates
void MenuPage::mouseMoveEvent(QMouseEvent *event) {
    int x = event->position().x();  // Use position() instead of x()
    int y = event->position().y();  // Use position() instead of y()
    ui->coodLabel->setText(QString("X = %1 , Y = %2").arg(x).arg(y));
}
// Start button clicked to begin the game
void MenuPage::on_btn_Start_clicked() {
    qDebug() << "Simulation is starting!";
    statusAmmo = 0;
    statusStart = 1;
    totalScore = 0;  // Reset the total score at the start of the game
    ui->statusLabel->setText("Status: Game Start");
    ui->totalScoreDisplay->setText("0");  // Reset the total score display
}

// Reset button clicked to reset the game
void MenuPage::on_btn_reset_clicked() {
    statusAmmo = 0;
    statusStart = 0;
    totalScore = 0;  // Reset the total score on reset
    points.clear();
    ui->bCountDisplay->setText("0 / 20");
    ui->statusLabel->setText("Status: Initial Start");
    ui->lstLogs->clear();
    ui->totalScoreDisplay->setText("0");
    update();
}

void MenuPage::on_pushButton_clicked()
{
    this->hide();
    typeB *typeb = new typeB();
    typeb->show();
}

