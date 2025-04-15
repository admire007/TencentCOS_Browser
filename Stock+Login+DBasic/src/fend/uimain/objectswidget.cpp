#include "objectswidget.h"
#include "ui_objectswidget.h"
#include "src/bend/man/manbuckets.h"
#include "src/fend/uidelegates/bucketdelegate.h"

ObjectsWidget::ObjectsWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ObjectsWidget)
{
    ui->setupUi(this);
    ui->tableView->setModel(MB->model());
    ui->tableView->setItemDelegate(new BucketDelegate());

    //设置标题内容
    QStandardItemModel* model = MB->model();
    QStringList lables;
    lables<<QString::fromUtf8("桶名称")
    <<QString::fromUtf8("地区")
    <<QString::fromUtf8("创建时间");

    model->setColumnCount(lables.size());
    model->setHorizontalHeaderLabels(lables);

    //设置宽度
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,120);

    ui->tableView->horizontalHeader()->setStretchLastSection(true);//设置最后一列占满整个表

    //隐藏垂直标题
    ui->tableView->verticalHeader()->setHidden(true);

    //设置鼠标标记点击排序
    ui->tableView->setSortingEnabled(true);


}

ObjectsWidget::~ObjectsWidget()
{
    delete ui;
}
