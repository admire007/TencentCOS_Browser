/*2024.11.3  Admire
*程序实现功能：登录窗口升级为模态对话框
*实现步骤：main.cpp中实现模态，判断返回值执行相关操作
*->在登录界面项目中绑定QDialog::accept与reject
*收获：连接信号槽:6-3
*已有的信号无需头文件声明
*例子：在该界面cpp构造函数中:connect(ui->spinBox,SIGNAL(valueChanged(int),this,SLOT(onSpinBoxValueChanged(int))));
*自己定义的信号
*发出信号的对象发生变化，，自定义信号需要通过在函数emit发出
*
*最后更改时间：11.3
*/
#include "logindialog.h"
#include "ui_logindialog.h"
#include <QDebug>
#include <QString>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);//隐藏原窗口标题栏

    //设置图标
    QPixmap pixmap("F:/8.17QT_data(SecondYear)/10.26_Qt_Stock(MY)/Login_3/qt.png");
    ui->label_Logo->setPixmap(pixmap.scaled(ui->label_Logo->size()));

    // 连接信号与槽
    connect(ui->pushButton_LoginIn, &QPushButton::clicked, this, &LoginDialog::on_pushButton_LoginIn_clicked);
    connect(ui->pushButton_Close, &QPushButton::clicked, this, &LoginDialog::on_pushButton_Close_clicked);

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_Close_clicked()
{
    qDebug()<<QString::fromLocal8Bit("登录按钮被点击");
    accept();

}

void LoginDialog::on_pushButton_LoginIn_clicked()
{
    reject();

}






