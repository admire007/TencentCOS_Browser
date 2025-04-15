/*2024.11.6  Admire
*程序实现功能:向表中插入用户登录信息;;;;查询
*步骤：1.创建一个dbmodels(包含登录信息结构体)
*2.将mandb中的函数移动到DaoLoginInfo中
*3.dao文件夹中创建DaoLoginInfo类->dbsqlite中新增esists函数，判断是否sql存在
*4.ManDb（单例）中新增saveLoginInfo,removeLoginInfo等数据库操作函数
*5.loginDialog中实现保存登录信息，删除登录信息
*
*。。。。。。。。
*收获：报错：QString 参数不匹配
*最后更改时间：2024.11.6
*/

#include "uimain.h"
#include "ui_uimain.h"
#include "toolbarwidget.h"

#include <src/fend/uilogin/logindialog.h>

UiMain::UiMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiMain)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,1);//窗口一比例
    ui->splitter->setStretchFactor(1,4);

    qDebug() << typeid(ui->splitter).name();
    connect(ui->widgetToolBar, &ToolBarWidget::buttonClicked, this, &UiMain::onButtonClicked);

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
        m_loginDialog->updateLoginInfo();
        connect(m_loginDialog,&LoginDialog::accepted,this,&UiMain::show);
        connect(ui->widgetToolBar,&ToolBarWidget::quitLogin,this,&UiMain::showLoginDialog);

    }
    hide();//隐藏主窗口
    m_loginDialog->show();

}



void UiMain::onButtonClicked(const QString &text)
{
    qDebug() << text;
    if (text == QString::fromUtf8("上传"))
    {
        onUpload();
    }
    else if (text == QString::fromUtf8("退出登录"))
    {
        onUnLogin();
    }
}

void UiMain::onUpload()
{
    qDebug() << "onUpload";
}

void UiMain::onDownload()
{
    qDebug() << "onDownload";
}

void UiMain::onRefresh()
{
    qDebug() << "onRefresh";
}

void UiMain::onUnLogin()
{
    showLoginDialog();
}
