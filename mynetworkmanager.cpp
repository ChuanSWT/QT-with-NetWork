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

    //连接finished到处理函数，触发时reply已经填充完成
    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            NetResult r=r.success(true,reply->url(),reply->readAll());
            emit ReceivedGet(r);
        } else {
            NetResult r=r.failure(false,reply->url(),reply->readAll());
            emit ReceivedGet(r);
        }
        reply->deleteLater();
    });
}
void MyNetWorkManager::post(const QString &path,const QByteArray &data){
    //拼接url
    QUrl url(base_url+path);
    //得到请求体
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,
                      "application/json; charset=utf-8");
    //交给manager
    QNetworkReply *reply = manager->post(request,data);//将网络请求注册到事件循环

    //连接finished到处理函数，触发时reply已经填充完成
    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            NetResult r=r.success(true,reply->url(),reply->readAll());
            emit ReceivedPost(r);
        } else {
            NetResult r=r.failure(false,reply->url(),reply->readAll());
            emit ReceivedPost(r);
        }
        reply->deleteLater();
    });
}















