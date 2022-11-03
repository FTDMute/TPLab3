#include "Customer.h"

string Customer::statement() {
	double totalAmount = 0;
	int frequentRenterPoints = 0;
	string result = "Прокат " + getName() + "\n";

	for (auto& each : _rentals) {
		double thisAmount = each.getCharge();
		

		// Начисление бонусных очков
		frequentRenterPoints += amountBonus(each);

		// Вывод результатов для каждого проката
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(thisAmount) + "\n";
		totalAmount += thisAmount;
	}

	// Добавление колонтитула
	result += "Сумма задолженности: " +
		to_string(totalAmount) + "\n";
	result += "Вы заработали " + to_string(frequentRenterPoints) +
		" бонусных очков";
	return result;
}

int Customer::amountBonus(Rental& each)
{
	int frequentRenterPoints = 1;

	// Бонус за двухдневный прокат новинки
	if ((each.getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		each.getDaysRented() > 1)
		frequentRenterPoints++;
	return frequentRenterPoints;
}
