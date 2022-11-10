#pragma once
class Price
{
public:
	virtual int GetPriceCode() = 0;
	virtual double getCharge(int daysRented)=0;

};

