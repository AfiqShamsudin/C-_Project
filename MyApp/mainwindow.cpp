#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "menupage.h"
#include"QPushButton"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setWindowIcon(QIcon(''));
    QPixmap  pix (":/assets/assets/target_icon.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}


MainWindow::~MainWindow()
{
    delete ui;
}

// when the button login is clicked
void MainWindow::on_loginbtn_clicked()
{

    QString UserName = ui ->Editbx_Username -> text();
    QString Password = ui ->Editbx_Password -> text();

    if (UserName == "a" && Password == "a")
    {
        QMessageBox::information(this," Success - P.E.T Application ","Login Successfully");
        this->hide();
        MenuPage *menupage = new MenuPage();
        menupage->show();

    }
    else
    {
        QMessageBox:: warning(this,"Error - P.E.T Application","Please enter a valid username or password");

    }
}

// when the button cancel is clicked
void MainWindow::on_cancelBtn_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox:: question(this,"QT Tutorial","Are you sure want to close this application?",QMessageBox::Yes |QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
        QApplication::quit();
        }
}

