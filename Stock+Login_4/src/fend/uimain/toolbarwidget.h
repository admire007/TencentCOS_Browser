#ifndef TOOLBARWIDGET_H
#define TOOLBARWIDGET_H

#include <QWidget>
#include <qfiledialog.h>
#include <QDebug>

namespace Ui {
class ToolBarWidget;
}

class ToolBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ToolBarWidget(QWidget *parent = nullptr);
    ~ToolBarWidget();

signals:
    void quitLogin();

private slots:
    void on_pushButton_UpLoad_clicked();
    void on_pushButton_DownLoad_clicked();


private:
    Ui::ToolBarWidget *ui;
};

#endif // TOOLBARWIDGET_H
