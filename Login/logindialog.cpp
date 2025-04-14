/*2024.11.2  Admire
*程序实现功能：登录界面
*实现步骤：创建qt_widgets_application项目，ui界面设计更改控件名
*收获：
*最后更改时间：11.2
*/
#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
