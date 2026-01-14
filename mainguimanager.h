#ifndef MAINGUIMANAGER_H
#define MAINGUIMANAGER_H

#include <QObject>
#include <QVariant>
#include <QTimer>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>
#include "mynetworkmanager.h"
#include "netresult.h"
class MainGuiManager : public QObject
{
    Q_OBJECT
//***QML逻辑***//
    Q_PROPERTY(QVariantList data READ data NOTIFY dataChanged)

public:
    Q_INVOKABLE void send(QVariant message);
    Q_INVOKABLE void getMessages();

    QVariantList data() const {
        return m_data;
    }

signals:
    void dataChanged();//提醒qml的
//**!*QML逻辑*!**//

//***内部逻辑***//
public:
    explicit MainGuiManager(QObject *parent = nullptr);
private:
    QTimer* getMessageTimer;
    MyNetWorkManager* manager;
    QVariantList m_data;//所有的聊天记录
private slots:
    void onGetData(NetResult res);
    void onPostData(NetResult res);
//**!*内部逻辑*!**//
};

#endif // MAINGUIMANAGER_H
