#ifndef MYNETWORKMANAGER_H
#define MYNETWORKMANAGER_H

#include <QObject>
#include <QNetworkReply>
class MyNetWorkManager : public QObject
{
    Q_OBJECT
public:
    explicit MyNetWorkManager(QObject *parent = nullptr);
    void get(const QString &path);
private:
    QNetworkAccessManager *manager;
    QString base_url;

signals:
    void Received(QByteArray data);
};

#endif // MYNETWORKMANAGER_H
