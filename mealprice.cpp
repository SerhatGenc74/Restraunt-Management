#include "mealprice.h"

MealPrice::MealPrice() : m_mealPriceID(0), m_mealID(0), m_portionID(0), m_price(0.0) {}

MealPrice::MealPrice(int mealId, int portionId, double price)
    : m_mealPriceID(0), m_mealID(mealId), m_portionID(portionId), m_price(price) {}

int MealPrice::getMealPriceID() const {
    return m_mealPriceID;
}

void MealPrice::setMealPriceID(int MealPriceID) {
    this->m_mealPriceID = MealPriceID;
}

int MealPrice::getMealID() const {
    return m_mealID;
}

void MealPrice::setMealID(int mealID) {
    this->m_mealID = mealID;
}

int MealPrice::getPortionID() const {
    return m_portionID;
}

void MealPrice::setPortionID(int portionID) {
    this->m_portionID = portionID;
}

double MealPrice::getPrice() const {
    return m_price;
}

void MealPrice::setPrice(double Price) {
    this->m_price = Price;
}
