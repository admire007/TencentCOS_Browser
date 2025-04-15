//数据json字段数据模型类
#ifndef MYBUCKET_H
#define MYBUCKET_H

#include <QString>


struct MyBucket
{
    MyBucket();
    QString name;
    QString location;
    QString createData;
};

#endif // MYBUCKET_H
