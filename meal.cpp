#include "meal.h"

Meal::Meal() : m_CategoryID(0),m_MealID(0),m_Mealname(""),m_FotoURL("") {}

Meal::Meal(int& m_MealID,int& m_CategoryID,QString& m_Mealname,QString& m_FotoURL)
{
    this->m_Mealname =  m_Mealname;
    this->m_MealID = m_MealID;
    this->m_CategoryID = m_CategoryID;
    this->m_FotoURL = m_FotoURL;
}

int Meal::getCategoryID() const
{
    return this->m_CategoryID;
}
void Meal::setCategoryID(int& m_CategoryID)
{
    this->m_CategoryID = m_CategoryID;
}

int Meal::getMealID() const
{
    return this->m_MealID;
}
void Meal::setMealID(int& m_MealID)
{
    this->m_MealID = m_MealID;
}

QString Meal::getMealName() const
{
    return this->m_Mealname;
}
void Meal::setMealName(QString& m_Mealname)
{
    this->m_Mealname = m_Mealname;
}

QString Meal::getFotoURl() const
{
    return this->m_FotoURL;
}
void Meal::setFotoURL(QString& m_FotoURL)
{
    this->m_FotoURL = m_FotoURL;
}

