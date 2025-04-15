#include "filehelper.h"
#include<QDir>

filehelper::filehelper() {}

// QString filehelper::readAllTxt(const QString &filePath)
// {
//      QFile file(filePath);
//     if(file.exists() && file.open(QIODevice::ReadOnly))
//     {
//         QByteArray data = file.readAll();
//         file.close();
//         return QString::fromUtf8(data); // 将 QByteArray 转换为 QString
//     }
//     return QString(); // 如果文件不存在或无法打开，返回一个空的 QString
// }

QString filehelper::readAllTxt(const QString &filePath)
{
    QFile file(filePath);
    if (!file.exists()) {
        qWarning() << "文件不存在:" << filePath;
        return QString();
    }

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << "无法打开文件:" << filePath;
        return QString();
    }

    QByteArray data = file.readAll();
    file.close();

    if (data.isEmpty()) {
        qWarning() << "读取文件内容为空:" << filePath;
        return QString();
    }

    QString content = QString::fromUtf8(data);
    if (content.isEmpty()) {
        qWarning() << "从字节数组转换字符串失败:" << filePath;
        return QString();
    }

    return content;
}

QVariant filehelper::readAllJson(const QString &filePath)
{
    QString data=filehelper::readAllTxt(filePath);
    QJsonDocument doc= QJsonDocument::fromJson(data.toLocal8Bit());
    return doc.toVariant();
}

QString filehelper::joinPath(const QString &path1, const QString &path2)
{
    QString path = path1+"/"+path2;
    QStringList pathList=path.split(QRegExp("[/\\\\]"),Qt::SkipEmptyParts);
    path = pathList.join("/") ;
    return QDir::cleanPath(path);

}

bool filehelper::mkPath(const QString &path)
{
    QDir dir;
    return dir.mkpath(path);

}
