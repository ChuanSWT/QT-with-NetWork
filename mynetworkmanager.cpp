#include "mynetworkmanager.h"

MyNetWorkManager::MyNetWorkManager(QObject *parent)
    : QObject{parent}
{
    base_url="http://localhost:8080";
    manager = new QNetworkAccessManager(this);
}
void MyNetWorkManager::get(const QString &path){
    //拼接url
    QUrl url(base_url+path);
    //得到请求体
    QNetworkRequest request(url);
    //交给manager
    QNetworkReply *reply = manager->get(request);//将网络请求注册到事件循环
    //reply是一个未来值
    //我将这个指针发给其他人，在将信号发送时，我也已经完成了指针的数据传输

    //连接finished到处理函数，触发时reply已经填充完成
    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray data = reply->readAll();
            emit Received(data);
        } else {
            qDebug() << "Error:" << reply->errorString();
        }
        reply->deleteLater();
    });
}
