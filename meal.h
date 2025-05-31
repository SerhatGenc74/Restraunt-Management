#ifndef MEAL_H
#define MEAL_H
#pragma once
#include <QString>
class Meal
{

public:
    Meal();
    Meal(int& MealID,int& CategoryID,QString& Mealname,QString& FotoURL);

    int getMealID() const;
    int getCategoryID() const;
    QString getMealName() const;
    QString getFotoURl() const;

    void setMealID(int& MealID);
    void setCategoryID(int& CategoryID);
    void setMealName(QString& Mealname);
    void setFotoURL(QString& FotoURL);

private:

    int m_MealID;
    int m_CategoryID;
    QString m_Mealname;
    QString m_FotoURL;


    virtual ~Meal() = default;

};

#endif // MEAL_H
