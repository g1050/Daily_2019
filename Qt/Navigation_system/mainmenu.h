#ifndef MAINMENU_H
#define MAINMENU_H

#include "ui_mainmenu.h"
#include "graph.h"
#include "database.h"
#include "manager.h"
#include "mylabel.h"
#include <QMainWindow>

class MainMenu : public QWidget
{
    Q_OBJECT
private:
    std::vector<Coordinate> vcoordinate;
    std::vector<AdjList> vadjlist;
    Ui::MainMenu ui;
    Manager *manager;
    int type;
    DataBase *nsdb;
    Graph *graph;
    MyLabel *label;
    QPixmap *mypix;
    void loadPixture();
public:

    explicit MainMenu(QWidget *parent = 0);
    MainMenu(int type,DataBase *nsdb);
    void mousePressEvent(QMouseEvent *event)
    {
       QString msg=QString("鼠标位置:%1,%2").arg(event->pos().x()).arg(event->pos().y());
//       QPoint point = event->pos();
//       qDebug() << point;
//       x1+=10;
//       y2+=10;
//       update();
      //this->ui.ln_mouse->setText(msg);
      //this->ui.lb_mouse2->setText(msg);
      //qDebug() << msg ;
       ui.lb_hello->setText(msg);
      update();
    }

private slots:
    void on_btn_findpath_clicked();

    void on_btn_manage_clicked();


    void on_btn_clear_clicked();
};

#endif // MAINMENU_H
