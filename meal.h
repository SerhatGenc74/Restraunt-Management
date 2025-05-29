#ifndef MEAL_H
#define MEAL_H
#pragma once
#include <QString>
class Meal
{

public:
    Meal();
    Meal(int& m_MealID,int& m_CategoryID,QString& m_Mealname,QString& m_FotoURL);

    int getMealID() const;
    int getCategoryID() const;
    QString getMealName() const;
    QString getFotoURl() const;

    void setMealID(int& m_MealID);
    void setCategoryID(int& m_CategoryID);
    void setMealName(QString& m_Mealname);
    void setFotoURL(QString& m_FotoURL);

private:

    int m_MealID;
    int m_CategoryID;
    QString m_Mealname;
    QString m_FotoURL;


    virtual ~Meal() = default;

};

#endif // MEAL_H
