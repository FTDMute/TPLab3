#include "Rental.h"
double Rental::getCharge()
{
	return _movie.getCharge(_daysRented);
}
int Rental::amountBonus()
{
	int frequentRenterPoints = 1;

	// ����� �� ����������� ������ �������
	if ((this->getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		this->getDaysRented() > 1)
		frequentRenterPoints++;
	return frequentRenterPoints;
}
