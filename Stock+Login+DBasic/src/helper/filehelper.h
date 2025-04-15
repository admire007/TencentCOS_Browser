#ifndef FILEHELPER_H
#define FILEHELPER_H

#include<QString>
#include<QFile>
#include<QVariant>
#include<QJsonDocument>

class filehelper
{
public:
    filehelper();

    //main函数读取qss时使用
    static QString readAllTxt(const QString &filePath);

    //DaoBuckets读取Json时使用
    static QVariant readAllJson(const QString &filePath);

    //配置文件使用--;;;;创建路径
    static QString joinPath(const QString&path1,const QString &path2);
    static bool mkPath(const QString &path);


};

#endif // FILEHELPER_H
