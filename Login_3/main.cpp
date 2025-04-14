#include "logindialog.h"

#include <QApplication>
#include <QWidget>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //点击登录，弹出主窗口
    //点击关闭退出当前应用程序

    LoginDialog w;
    QWidget m;
    m.setWindowTitle(QString::fromLocal8Bit("主窗口"));
    int code = w.exec();
    // 根据返回值决定是否显示主窗口
    if(code==QDialog::Accepted)
    {
        m.show();
        return a.exec();

    }else{
        qDebug()<<QString::fromLocal8Bit("退出程序");
    }
}
