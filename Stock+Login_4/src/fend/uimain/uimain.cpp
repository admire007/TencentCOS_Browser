/*2024.11.4  Admire
*程序实现功能:美化登录窗口
*实现步骤：1.创建helper文件夹，创建qss文件读取类
*2.创建staic文件夹存储图片素材等
*3.编写qss文件->在对应界面设置属性
*4.资源文件：防止文件泄漏及通过通用路径访问
*收获：
*最后更改时间：2024.11.4
*/

#include "uimain.h"
#include "ui_uimain.h"

#include <src/fend/uilogin/logindialog.h>

UiMain::UiMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiMain)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,1);//窗口一比例
    ui->splitter->setStretchFactor(1,4);
}

UiMain::~UiMain()
{
    delete ui;
    if(m_loginDialog)
    {
        delete m_loginDialog;
    }

}

void UiMain::showLoginDialog()
{
    if(m_loginDialog== nullptr)
    {
        m_loginDialog = new LoginDialog();
        connect(m_loginDialog,&LoginDialog::accepted,this,&UiMain::show);
        connect(ui->widgetToolBar,&ToolBarWidget::quitLogin,this,&UiMain::showLoginDialog);

    }
    hide();//隐藏主窗口
    m_loginDialog->show();

}
