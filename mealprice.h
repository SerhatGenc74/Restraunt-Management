#ifndef MEALPRICE_H
#define MEALPRICE_H

class MealPrice
{
public:
    MealPrice();
    MealPrice(int mealId, int portionId, double price);

    // Getter ve Setter'lar
    int getMealPriceID() const;
    void setMealPriceID(int id);

    int getMealID() const;
    void setMealID(int mealId);

    int getPortionID() const;
    void setPortionID(int portionId);

    double getPrice() const;
    void setPrice(double price);
private:
    int m_mealPriceID;
    int m_mealID;
    int m_portionID;
    double m_price;
};

#endif // MEALPRICE_H
