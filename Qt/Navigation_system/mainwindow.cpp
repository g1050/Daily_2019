#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);

    account = new Account();

    /***********LineEdit****************/
    ui.ln_usr->setClearButtonEnabled(true);
    ui.ln_usr->setPlaceholderText("账号");
    ui.ln_pwd->setEchoMode(QLineEdit::Password);
    ui.ln_pwd->setPlaceholderText("密码");
    /***********LineEdit****************/

//    QMovie* movie = new QMovie("/home/gxk/图片/视频/星空.gif");

//    ui.label_2->setMovie(movie);
//    movie->start();

}

void MainWindow::on_login_clicked()
{
    QString username = ui.ln_usr->text();
    QString passwd   = ui.ln_pwd->text();
//    qDebug() << username ;
//    qDebug() << passwd   ;
    if(account->verify(username,passwd)){
        qDebug() << "Yes" ;
    }else{
        qDebug() << "Wrong password";
    }
}

void MainWindow::on_link_reg_clicked()
{
    Register reg;
    reg.exec();
}

void MainWindow::on_link_find_clicked()
{
    Find find;
    find.exec();
}