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
    int m_PortionID;
    QString m_Portion_name;
    double m_Multiplier;
};

#endif // PORTION_H
