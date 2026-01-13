#ifndef MYNETWORKMANAGER_H
#define MYNETWORKMANAGER_H

#include <QObject>

class MyNetWorkManager : public QObject
{
    Q_OBJECT
public:
    explicit MyNetWorkManager(QObject *parent = nullptr);

signals:
};

#endif // MYNETWORKMANAGER_H
