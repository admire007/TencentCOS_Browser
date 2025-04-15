#include "src/fend/uimain/uimain.h"
#include "src/helper/filehelper.h"
// #include "src/bend/dao/daobuckets.h"
#include "src/bend/man/manbuckets.h"
#include"src/bend/man/mandb.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // DaoBuckets buckets;
    // buckets.bucketsFromMock("F:/10.26_Qt_Stock/Stock+Login+DB/static/testing/buckets1.json");

    //1.读取文件中的qss
    QString qssStr = filehelper::readAllTxt("F:/8.17QT_data(SecondYear)/10.26_Qt_Stock(MY)/Stock+Login+DBasic/static/qss/default.qss");
    //2.QApplication加载qss内容
    a.setStyleSheet(qssStr);

    MDB->init();

    UiMain w;
    w.showLoginDialog();
    //w.show();

    MB->setBuckets();
    return a.exec();
}
