#include "Rental.h"
double Rental::getCharge()
{
	return _movie.getCharge(_daysRented);
}
int Rental::amountBonus()
{
	return _movie.amountBonus(_daysRented);
}
