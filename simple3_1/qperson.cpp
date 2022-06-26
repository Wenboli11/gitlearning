#include "qperson.h"

Qperson::Qperson(QString fName, QObject *parent):QObject(parent)
{
    m_name=fName;
}

int Qperson::age()
{
    return m_age;
}

void Qperson::setAge(int value)
{
    m_age=value;
    emit(ageChanged(m_age));
}


void Qperson::incAge()
{
    m_age++;
    emit(ageChanged(m_age));
}
