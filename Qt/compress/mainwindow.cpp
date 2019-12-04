#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

void MainWindow::on_toolButton_clicked()
{
    path_src = QFileDialog::getOpenFileName(this,"请选择要压缩的文件...","/home/gxk/","source(*.cpp *.h .txt *.txt);Text(*.txt);zip(*.xzip)");
    qDebug() << "path_src"<<  path_src << endl;
    ui.ln_src->setText(path_src);
}

void MainWindow::on_toolButton_2_clicked()
{
    if(path_src != ""){
        int index;
        path_des = QFileDialog::getExistingDirectory(this,"请选择保存压缩文件位置...","./");

        for(int  i = path_src.size()-1;i>=0;i--){
            if(path_src[i] == '/'){
                index = i;
                break;
            }
        }

        path_des.append(path_src.mid(index,path_src.size()-index));

        for(int i = path_des.size()-1;i>=0;i--){
            if(path_des[i] == '.'){
                index = i;
                break;
            }
        }

        path_des.replace(index,path_des.size()-index,".xzip");
        ui.ln_des->setText(path_des);
        //qDebug() << "path_des" <<path_des << endl;
    }

}

void MainWindow::on_btn_in_clicked()
{
    File file;
    string s1 = path_src.toStdString();
    string s2 = path_des.toStdString();
    cout << s1 << endl;
    cout << s2 << endl;
    file.encoded(s1,s2);

}

void MainWindow::on_btn_de_clicked()
{
    File file;
    string s1 = path_src.toStdString();
    string s2 = path_des.toStdString();
    cout << s1 << endl;
    cout << s2 << endl;
    file.decoding(s1,s2);
}
