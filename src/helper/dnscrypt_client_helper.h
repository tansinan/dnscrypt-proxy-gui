#include <kauth.h>
using namespace KAuth;

class DNSCryptClientHelper : public QObject
{
    Q_OBJECT
public:
    explicit DNSCryptClientHelper(QObject *parent = nullptr);

public slots:
    ActionReply     create(const QVariantMap args) const;
    ActionReply     start(const QVariantMap args) const;
    ActionReply     stop(const QVariantMap args) const;

private:
    QString         get_key_varmap(const QVariantMap &args, const QString& key) const;
};