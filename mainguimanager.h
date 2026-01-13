#ifndef MAINGUIMANAGER_H
#define MAINGUIMANAGER_H

#include <QObject>
#include <QVariant>
#include <QTimer>
#include "mynetworkmanager.h"

class MainGuiManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantList data READ data NOTIFY dataChanged)

public:
    Q_INVOKABLE void send(QVariant message);
    Q_INVOKABLE void get_messages();

    explicit MainGuiManager(QObject *parent = nullptr);

    //---property---///
    QVariantList data() const {
        return m_data;
    }
    //!--property--!///
signals:
    void dataChanged();
private:
    void processData(QByteArray data);
private:
    MyNetWorkManager* manager;
    QVariantList m_data;//所有的聊天记录
};

#endif // MAINGUIMANAGER_H
