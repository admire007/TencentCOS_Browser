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
#include <QCompleter>
#include <QMessageBox>
#include "src/bend/man/mandb.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);//隐藏原窗口标题栏

    ui->label_Title->setProperty("style","h3");
    ui->label_Name->setProperty("style","h4");
    ui->label_ID->setProperty("style","h4");
    ui->label_PassWord->setProperty("style","h4");
    ui->label_Remark->setProperty("style","h4");
    ui->pushButton_Close->setProperty("style","h4");
    ui->pushButton_LoginIn->setProperty("style","h4");

    //设置图标
    QPixmap pixmap("F:/8.17QT_data(SecondYear)/10.26_Qt_Stock(MY)/Stock+Login+DBasic/qt.png");
    ui->label_Logo->setPixmap(pixmap.scaled(ui->label_Logo->size()));

    ui->lineEdit_PassWord->installEventFilter(this);//当前 窗口安装事件过滤器
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::updateLoginInfo()
{
    QStringList words = MDB->loginNameList();
    QCompleter* completer = new QCompleter(words);
    ui->lineEdit_Name->setCompleter(completer);

    connect(completer, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated),
            [&](const QString& name){
                LoginInfo info = MDB->loginInfoByName(name);
        ui->lineEdit_ID->setText(info.secret_id);
                ui->lineEdit_PassWord->setText(info.secret_key);
        ui->lineEdit_Remark->setText(info.remark);
                ui->checkBox_Save->setChecked(true);
            });
}

void LoginDialog::mousePressEvent(QMouseEvent *event)
{
    //if (event->button() == Qt::LeftButton){
    if (event->button() & Qt::LeftButton){
        m_start = event->pos(); // 相对于父控件坐标原点的位置
    }
    QDialog::mousePressEvent(event);
}

void LoginDialog::mouseMoveEvent(QMouseEvent *event)
{
    //qDebug() << event->buttons() << Qt::LeftButton;
    /*event->pos() 返回鼠标事件的位置，
     * m_start 可能是一个成员变量，存储了鼠标按下时的初始位置。
     * pos() 方法返回当前窗口或控件的位置。*/
    if (event->buttons() & Qt::LeftButton){
        QPoint targetPos = event->pos()-m_start+pos();
        this->move(targetPos);
    }
    QDialog::mouseMoveEvent(event);
}

bool LoginDialog::eventFilter(QObject *watched, QEvent *event)
{
    // watched 表示需要关注的控件对象
    // event 表示传递给事件对象的事件
    if (watched == ui->lineEdit_PassWord)
    {
        if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent * keyEvent = static_cast<QKeyEvent*>(event);
            if (keyEvent->modifiers() == Qt::ControlModifier)
            {
                if (keyEvent->key() == Qt::Key_C || keyEvent->key() == Qt::Key_V)
                {
                    return true;  // true-事件已经被处理，不再往下传递；false-继续执行传递
                }
            }
        }
    }

    return QDialog::eventFilter(watched, event);
}

void LoginDialog::on_pushButton_Close_clicked()
{
    QDialog::reject();
    close();
}

void LoginDialog::on_pushButton_LoginIn_clicked()
{

    //进行登录验证
    if(ui->lineEdit_ID->text()=="小七"
        &&ui->lineEdit_PassWord->text().trimmed()=="1234")
    {
     accept();
        if(ui->checkBox_Save->isChecked())
     {
            //保存登录信息
            MDB->saveLoginInfo(
                ui->lineEdit_Name->text(),
                ui->lineEdit_ID->text(),
                ui->lineEdit_PassWord->text(),
                ui->lineEdit_Remark->text()
                );
     }else
        {
            //删除登录信息
         MDB->removeLoginInfo(ui->lineEdit_ID->text());
        }
     updateLoginInfo();
    }else{
        QMessageBox::warning(this,QString::fromUtf8("登录失败"),
                             QString::fromUtf8("请检查账号密码是否正确"));
    }

}


