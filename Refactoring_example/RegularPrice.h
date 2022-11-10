#pragma once
#include "Price.h"
class RegularPrice :
    public Price
{
public:
    // Inherited via Price
    virtual int GetPriceCode() override;
    double getCharge(int daysRented);
};

