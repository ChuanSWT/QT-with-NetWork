#ifndef MYNETWORKMANAGER_H
#define MYNETWORKMANAGER_H

#include <QObject>
#include <QNetworkReply>
#include "netresult.h"
class MyNetWorkManager : public QObject
{
    Q_OBJECT
public:
    void get(const QString &path);
    void post(const QString &path,const QByteArray &data);
signals:
    void ReceivedGet(NetResult res);
    void ReceivedPost(NetResult res);

public:
    explicit MyNetWorkManager(QObject *parent = nullptr);
private:
    QNetworkAccessManager *manager;
    QString base_url;
};

#endif // MYNETWORKMANAGER_H
