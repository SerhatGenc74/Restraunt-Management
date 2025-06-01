#ifndef PORTION_H
#define PORTION_H

#include <QString>
class Portion
{
public:
    Portion();
    Portion(int& PortionID,QString& Portion_name,double& Multiplier);

    void getPortionID(int& PortionID);
    void setMultiplier(double& Multiplier);
    void setPortionName(QString& PortionName);

    int getPortionID() const;
    double getMultiplier() const;
    QString getPortionName() const;



private:
    int m_portionID;
    QString m_portionName;
    double m_multiplier;
};

#endif // PORTION_H
