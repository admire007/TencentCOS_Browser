#include "src/fend/uimain/uimain.h"
#include "src/helper/filehelper.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //1.读取文件中的qss
    QString qssStr = filehelper::readAllTxt(":/static/qss/default.qss");
    //2.QApplication加载qss内容
    a.setStyleSheet(qssStr);

    UiMain w;
    w.showLoginDialog();
    //w.show();
    return a.exec();
}
