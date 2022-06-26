#ifndef QPERSON_H
#define QPERSON_H

#include <QObject>

class Qperson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","Arxibye");
    Q_CLASSINFO("comany","NCHL");
    Q_CLASSINFO("version","1.0");
    Q_PROPERTY(unsigned int age READ name WRITE setName NOTIFY nameChanged);
    Q_PROPERTY(QString name MEMBER m_name);
    Q_PROPERTY(int score MEMBE  m_score);

private:
    unsigned  int m_age=10;
    QString m_name;
    int m_score=79;
public:
    explicit Qperson(QObject *parent = nullptr);
    unsigned int age();
signals:
    void ageChanged(unsigned int value);

public slots:
};

#endif // QPERSON_H
