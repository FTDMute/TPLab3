#include "NewReleasePrice.h"
#include "Movie.h"

int NewReleasePrice::GetPriceCode()
{
    return Movie::NEW_RELEASE;
}

double NewReleasePrice::getCharge(int daysRented)
{
	double result = 0;
	result += daysRented * 3;
	return result;
}

int NewReleasePrice::amountBonus(int daysRented) {
	int frequentRenterPoints = 1;

	// Бонус за двухдневный прокат новинки
	if (daysRented > 1) frequentRenterPoints++;
	return frequentRenterPoints;
}