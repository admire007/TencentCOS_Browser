#include "filehelper.h"

filehelper::filehelper() {}

QString filehelper::readAllTxt(const QString &filePath)
{
    QFile file(filePath);
    if(file.exists() && file.open(QIODevice::ReadOnly))
    {
        QByteArray data = file.readAll();
        file.close();
        return QString::fromUtf8(data); // 将 QByteArray 转换为 QString
    }
    return QString(); // 如果文件不存在或无法打开，返回一个空的 QString
}
