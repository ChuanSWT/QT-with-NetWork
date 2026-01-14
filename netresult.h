#ifndef NETRESULT_H
#define NETRESULT_H


#include <QByteArray>
#include <QString>
#include <QUrl>
#include <QDebug>

class NetResult
{
    Q_GADGET
    // ---- QML暴露 =======================================
    Q_PROPERTY(bool ok READ ok)
    Q_PROPERTY(int status READ status)
    Q_PROPERTY(QByteArray body READ body)
    Q_PROPERTY(QString error READ error)
    Q_PROPERTY(QUrl url READ url)

public:
    bool ok() const { return m_ok; }
    int status() const { return m_status; }
    QByteArray body() const { return m_body; }
    QString error() const { return m_error; }
    QUrl url() const { return m_url; }

    // ---- C++构造 ====================================
    NetResult() = default;
    static NetResult success(int status, QUrl url, QByteArray body)
    {
        NetResult r;
        r.m_ok = true;
        r.m_status = status;
        r.m_url = std::move(url);
        r.m_body = std::move(body);
        return r;
    }
    static NetResult failure(int status, QUrl url, QString error)
    {
        NetResult r;
        r.m_ok = false;
        r.m_status = status;
        r.m_url = std::move(url);
        r.m_error = std::move(error);
        return r;
    }
private:
    bool m_ok = false;
    int m_status = 0;
    QByteArray m_body;
    QString m_error;
    QUrl m_url;

};

    // ---- qDebug 输出支持=================================
inline QDebug operator<<(QDebug dbg, const NetResult& r)
{
    QDebugStateSaver saver(dbg);   // ⭐ 非常重要
    dbg.nospace();

    dbg << "NetResult("
        << "ok=" << r.ok() << ", "
        << "status=" << r.status() << ", "
        << "url=" << r.url() << ", "
        << "bodySize=" << r.body().size() << ", "
        << "error=\"" << r.error() << "\""
        << ")";

    return dbg;
}
#endif // NETRESULT_H
