
#include "daobuckets.h"
#include"src/helper/filehelper.h"

DaoBuckets::DaoBuckets()
{}

QList<MyBucket>DaoBuckets::bucketsFromMock(const QString &path)
{
    QList<MyBucket>res;

    QVariant var=filehelper::readAllJson(path);
    QJsonArray arr=var.toJsonArray();
    for(int i=0;i<arr.count();i++)
    {
        QJsonValue v= arr[i];
        MyBucket bucket;
        bucket.name=v["name"].toString();
        bucket.location=v["location"].toString();
        bucket.createData=v["create_date"].toString();

        res.append(bucket);
        qDebug()<<bucket.name<<bucket.location<<bucket.createData;

    }
    return res;
}
