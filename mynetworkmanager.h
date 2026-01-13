#ifndef MYNETWORKMANAGER_H
#define MYNETWORKMANAGER_H

#include <QObject>
#include <QNetworkReply>
class MyNetWorkManager : public QObject
{
    Q_OBJECT
public:
    void get(const QString &path);
signals:
    void Received(QByteArray data);


public:
    explicit MyNetWorkManager(QObject *parent = nullptr);
private:
    QNetworkAccessManager *manager;
    QString base_url;
};

#endif // MYNETWORKMANAGER_H
