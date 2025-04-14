/*2024.11.2  Admire
*程序实现功能：登录界面优化控件随窗口变化；窗口标题栏消失
*实现步骤：添加自定义窗口标题栏,细节处理
*收获：1.栅栏布局与水平垂直布局区别，栅栏布局有利于手动添加控件编写
*2.利用Frame将各控件包含，在整体对各Frame布局；Frame内利用弹簧，各Frame间也可使用弹簧
*3,layloutStretch调整组件布局比例
*4.点击对应Frame进行边距设置
*5.控件最大最小size设置
*6.字体设置：Font  大小，粗体。。。
*7.伙伴关系：设置快捷键（只能QLabel与其他控件设置）
*
*最后更改时间：11.2
*/

#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);//隐藏原窗口标题栏

    //设置图标
    QPixmap pixmap("F:/10.26_Qt_Stock/Login_2/qt.png");
    ui->label_Logo->setPixmap(pixmap.scaled(ui->label_Logo->size()));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}




