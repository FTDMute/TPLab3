#pragma once
#include "Price.h"
class NewReleasePrice :
    public Price
{
public:
    // Inherited via Price
    virtual int GetPriceCode() override;
    double getCharge(int daysRented);
    virtual int amountBonus(int daysRented);
};

