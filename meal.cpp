#include "meal.h"

Meal::Meal() : m_CategoryID(0),m_MealID(0),m_Mealname(""),m_FotoURL("") {}

Meal::Meal(int& MealID,int& CategoryID,QString& Mealname,QString& FotoURL)
{
    this->m_Mealname =  Mealname;
    this->m_MealID = MealID;
    this->m_CategoryID = CategoryID;
    this->m_FotoURL = FotoURL;
}

int Meal::getCategoryID() const
{
    return this->m_CategoryID;
}
void Meal::setCategoryID(int& CategoryID)
{
    this->m_CategoryID = CategoryID;
}

int Meal::getMealID() const
{
    return this->m_MealID;
}
void Meal::setMealID(int& MealID)
{
    this->m_MealID = MealID;
}

QString Meal::getMealName() const
{
    return this->m_Mealname;
}
void Meal::setMealName(QString& Mealname)
{
    this->m_Mealname = Mealname;
}

QString Meal::getFotoURl() const
{
    return this->m_FotoURL;
}
void Meal::setFotoURL(QString& FotoURL)
{
    this->m_FotoURL = FotoURL;
}

