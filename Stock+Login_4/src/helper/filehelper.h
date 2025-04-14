#ifndef FILEHELPER_H
#define FILEHELPER_H

#include<QString>
#include<QFile>
class filehelper
{
public:
    filehelper();

    static QString readAllTxt(const QString &filePath);
};

#endif // FILEHELPER_H
