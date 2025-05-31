#include "portion.h"

Portion::Portion() {}

Portion::Portion(int& PortionID,QString& Portion_name,double& Multiplier)
    : m_PortionID(PortionID),m_Portion_name(Portion_name),m_Multiplier(Multiplier)
        {}

void Portion::getPortionID(int& PortionID)
{
    m_PortionID = PortionID;
}

void Portion::setMultiplier(double& Multiplier)
{
    m_Multiplier = Multiplier;
}

void Portion::setPortionName(QString& PortionName)
{
    m_Portion_name = PortionName;
}

int Portion::getPortionID() const
{
    return m_PortionID;
}

double Portion::getMultiplier() const
{
    return m_Multiplier;
}

QString Portion::getPortionName() const
{
    return m_Portion_name;
}
