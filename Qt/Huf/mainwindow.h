#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "File.h"

class MainWindow : public QMainWindow,public File
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    void on_btn_decode_clicked();

private:
    Ui::MainWindow ui;
};

#endif // MAINWINDOW_H
