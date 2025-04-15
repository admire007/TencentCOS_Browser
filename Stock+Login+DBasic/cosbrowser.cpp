
#include "cosbrowser.h"
#include "ui_cosbrowser.h"

CosBrowser::CosBrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CosBrowser)
{
    ui->setupUi(this);
}

CosBrowser::~CosBrowser()
{
    delete ui;
}
