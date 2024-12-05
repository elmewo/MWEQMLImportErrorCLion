#pragma once
#include <QObject>
#include <QString>
#include <QtQmlIntegration/qqmlintegration.h>

class PropertyType : public QObject {
    Q_OBJECT

public:
    Q_PROPERTY(int intProp READ intProp WRITE setIntProp NOTIFY intPropChanged)
    Q_PROPERTY(QString stringProp READ stringProp WRITE setStringProp NOTIFY
        stringPropChanged)
    Q_PROPERTY(
        bool boolProp READ boolProp WRITE setBoolProp NOTIFY boolPropChanged)
    Q_PROPERTY(double doubleProp READ doubleProp WRITE setDoubleProp NOTIFY
        doublePropChanged)

    int intProp() const { return m_intProp; }
    void setIntProp(int m_int_prop) { m_intProp = m_int_prop; }
    QString stringProp() const { return m_stringProp; }

    void setStringProp(const QString& m_string_prop) {
        m_stringProp = m_string_prop;
    }

    bool boolProp() const { return m_boolProp; }
    void setBoolProp(bool m_bool_prop) { m_boolProp = m_bool_prop; }
    double doubleProp() const { return m_doubleProp; }
    void setDoubleProp(double m_double_prop) { m_doubleProp = m_double_prop; }

signals:
    void intPropChanged();
    void stringPropChanged();
    void boolPropChanged();
    void doublePropChanged();

private:
    int m_intProp = 0;
    QString m_stringProp = "";
    bool m_boolProp = false;
    double m_doubleProp = 0.0;
};
