#include "mainguimanager.h"
#include <QDebug>
MainGuiManager::MainGuiManager(QObject *parent)
    : QObject{parent}
{
    manager=new MyNetWorkManager(this);
    QTimer *timer = new QTimer(this);//创建计时器
    timer->setInterval(50);//设置timeout信号触发的间隔

    //将timeout信号连接到处理函数
    connect(timer, &QTimer::timeout, this, [this, timer]() {
        get_messages();
    });
    //开始运行
    timer->start();


    connect(manager,&MyNetWorkManager::Received,this,&MainGuiManager::processData);
}
//直接接收qml
Q_INVOKABLE void MainGuiManager::send(QVariant message){

}
//向manager请求发送
void MainGuiManager::get_messages(){
    manager->get("/api/test");
}
//manager接收到http数据通知进行操作
void MainGuiManager::processData(QByteArray data){
    qDebug()<<data;
}
