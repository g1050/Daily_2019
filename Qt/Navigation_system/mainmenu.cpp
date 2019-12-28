#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

MainMenu::MainMenu(int type,DataBase *nsdb)
{
    ui.setupUi(this);
    //label = new MyLabel(this);
    this->nsdb = nsdb;


    QWidget *widget = new QWidget();
    QPushButton *btn1 = new QPushButton();
//    QPushButton *btn2 = new QPushButton();
//    QPushButton *btn3 = new QPushButton();
    /*****************DrawBackGround***********************/
    QHBoxLayout* layout = new QHBoxLayout(widget);//水平布局
    QVBoxLayout* layout2 = new QVBoxLayout(this);//水平布局
//    layout2->addWidget(btn1);
//    layout2->addWidget(btn2);
//    layout->addWidget(btn3);
//    layout->addLayout(layout2);
    layout->addWidget(btn1);
    layout->addLayout(ui.verticalLayout_3);
    layout->setStretchFactor(btn1,5);
    layout->setStretchFactor(label,5);
    this->setCentralWidget(widget);
    /******************************************************/

    /*************Get Vertex to add item****************/
    this->nsdb->getVertex(vadjlist);
    //ui.cb_ed->disconnect();
    ui.cb_st->clear();
    for(int i = 0;i<vadjlist.size();i++){
        ui.cb_st->addItem(vadjlist[i].name);
        ui.cb_ed->addItem(vadjlist[i].name);
    }
    /*****************************/

    graph = new Graph(nsdb);

    this->type = type;
    if(this->type != 1){
       ui.btn_manage->hide();
    }

}

/*当点击按钮时获得起点和终点*/
void MainMenu::on_btn_findpath_clicked()
{
    QString st = ui.cb_st->currentText();
    QString ed = ui.cb_ed->currentText();

    int i = graph->local(st);
    int j = graph->local(ed);

    //qDebug() << "i = " << i << "j = " << j ;
    //调用寻找各点到源点的最短距离
    graph->Dijkstra(i);
    //寻找最短路的路径
    graph->getPath(j,vcoordinate);
    update();




    //qDebug() << st << " " <<ed;

}

void MainMenu::on_btn_manage_clicked()
{
    manager = new Manager(nsdb);
    //this->hide();
    manager->show();
    //this->show();
}
