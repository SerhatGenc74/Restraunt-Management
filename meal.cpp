#include "meal.h"

Meal::Meal() : m_categoryID(0),m_mealID(0),m_mealName(""),m_fotoURL("") {}

Meal::Meal(int& MealID,int& CategoryID,QString& Mealname,QString& FotoURL)
{
    this->m_mealName =  Mealname;
    this->m_mealID = MealID;
    this->m_categoryID = CategoryID;
    this->m_fotoURL = FotoURL;
}

int Meal::getCategoryID() const
{
    return this->m_categoryID;
}
void Meal::setCategoryID(int& CategoryID)
{
    this->m_categoryID = CategoryID;
}

int Meal::getMealID() const
{
    return this->m_mealID;
}
void Meal::setMealID(int& MealID)
{
    this->m_mealID = MealID;
}

QString Meal::getMealName() const
{
    return this->m_mealName;
}
void Meal::setMealName(QString& Mealname)
{
    this->m_mealName = Mealname;
}

QString Meal::getFotoURl() const
{
    return this->m_fotoURL;
}
void Meal::setFotoURL(QString& FotoURL)
{
    this->m_fotoURL = FotoURL;
}

