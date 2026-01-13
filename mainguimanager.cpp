#include "mainguimanager.h"
#include <QDebug>

MainGuiManager::MainGuiManager(QObject *parent)
    : QObject{parent}
{
    //**网络管理部分**//
    manager=new MyNetWorkManager(this);
    //*!*网络管理部分*!*//

    //**计时器部分**//
    getMessageTimer = new QTimer(this);
    getMessageTimer->setInterval(50);
    connect(getMessageTimer, &QTimer::timeout, this,&MainGuiManager::getMessages);
    getMessageTimer->start();
    //*!*计时器部分*!*//

    //**数据处理部分**//
    connect(manager,&MyNetWorkManager::ReceivedGet,this,&MainGuiManager::onGetData);
    connect(manager,&MyNetWorkManager::ReceivedPost,this,&MainGuiManager::onPostData);
    //*!*数据处理部分*!*//
}
Q_INVOKABLE void MainGuiManager::send(QVariant message){
    //TODOTODO:处理QML的send函数调用
    QJsonValue jsonValueMsg = QJsonValue::fromVariant(message);

    QVariantMap data;//准备Map,向其中装填数据，最后转化为json
    data["message"]=jsonValueMsg;

    QJsonDocument doc(
        (QJsonObject::fromVariantMap(data))
    );
    QByteArray body = doc.toJson();
    manager->post("/api/test",body);
}
//向manager请求发送
void MainGuiManager::getMessages(){
    manager->get("/api/test");
}
//manager接收到http数据通知进行操作
void MainGuiManager::onGetData(QByteArray data){
    qDebug(data);
    //TODOTODO：加入get结果后逻辑
}
void MainGuiManager::onPostData(QByteArray data){
    qDebug(data);
    //TODOTODO：加入post结果后逻辑
}
