#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include "menupage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//Link to the method login and cancel button.
private slots:
    void on_loginbtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::MainWindow *ui;

// // event that I try to implement
// protected:
//    void  closeEvent( QCloseEvent *event) override;
// //Yupp this too...
// private:
//    bool windowShouldClose();

};
#endif // MAINWINDOW_H
