#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "common.h"
#include "account.h"
#include "register.h"
#include "find.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:

public:
    explicit MainWindow(QWidget *parent = 0);
    Account *account;
private slots:
    void on_login_clicked();

    void on_link_reg_clicked();

    void on_link_find_clicked();

private:
    Ui::MainWindow ui;
};

#endif // MAINWINDOW_H