#include "portion.h"

Portion::Portion() {}

Portion::Portion(int& PortionID,QString& Portion_name,double& Multiplier)
    : m_portionID(PortionID),m_portionName(Portion_name),m_multiplier(Multiplier)
        {}

void Portion::getPortionID(int& PortionID)
{
    m_portionID = PortionID;
}

void Portion::setMultiplier(double& Multiplier)
{
    m_multiplier = Multiplier;
}

void Portion::setPortionName(QString& PortionName)
{
    m_portionName = PortionName;
}

int Portion::getPortionID() const
{
    return m_portionID;
}

double Portion::getMultiplier() const
{
    return m_multiplier;
}

QString Portion::getPortionName() const
{
    return m_portionName;
}
