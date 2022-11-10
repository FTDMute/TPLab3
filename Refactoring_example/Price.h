#pragma once
class Price
{
public:
	virtual int GetPriceCode() = 0;
	double getCharge(int daysRented);

};

