//数据访问类
#ifndef DAOBUCKETS_H
#define DAOBUCKETS_H

#include "src/bend/models/mybucket.h"
#include <QList>
#include<QJsonArray>
#include<QDebug>
class DaoBuckets
{
public:
    DaoBuckets();

    //接口
    QList<MyBucket> bucketsFromMock(const QString &path);

};

#endif // DAOBUCKETS_H
