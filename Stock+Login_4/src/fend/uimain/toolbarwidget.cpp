#include "toolbarwidget.h"
#include "ui_toolbarwidget.h"

ToolBarWidget::ToolBarWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ToolBarWidget)
{
    ui->setupUi(this);
    connect(ui->pushButton_QuitLogin,&QPushButton::clicked,this,&ToolBarWidget::quitLogin);
}

ToolBarWidget::~ToolBarWidget()
{
    delete ui;
}

void ToolBarWidget::on_pushButton_UpLoad_clicked()
{
    //上传单个文件
    // QString path=QFileDialog::getOpenFileName(this,QString::fromLocal8Bit("上传"),"./");
    // if(path!="")
    // {
    //     qDebug(path.toLocal8Bit().data());
    // }

    //上传多个文件
    // QStringList pathList=QFileDialog::getOpenFileNames(this,QString::fromLocal8Bit("上传"),"./");
    //     qDebug()<<pathList;

    //上传多个文件,指定类型
    // QStringList pathList=QFileDialog::getOpenFileNames(this,
    //                                                      QString::fromLocal8Bit("上传"),
    //                                                      "./",
    //                                                      "hpp(*.h*.cpp);;MakeFile(*.Release*.Debug))"
    //                                                      );
    // qDebug()<<pathList;

    //上传文件夹
    QString path = QFileDialog::getExistingDirectory(
        this,
        QString::fromLocal8Bit("上传"),
        "./"
        );

}

void ToolBarWidget::on_pushButton_DownLoad_clicked()
{
    QFileDialog::getSaveFileName(this,
                                 QString::fromLocal8Bit("下载"),
                                 "./"
                                 );

}
