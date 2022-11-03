#include "Customer.h"

string Customer::statement() {
	double totalAmount = 0;
	int frequentRenterPoints = 0;
	string result = "������ " + getName() + "\n";

	for (auto& each : _rentals) {
		double thisAmount = each.getCharge();
		

		// ���������� �������� �����
		frequentRenterPoints += amountBonus(each);

		// ����� ����������� ��� ������� �������
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(thisAmount) + "\n";
		totalAmount += thisAmount;
	}

	// ���������� �����������
	result += "����� �������������: " +
		to_string(totalAmount) + "\n";
	result += "�� ���������� " + to_string(frequentRenterPoints) +
		" �������� �����";
	return result;
}

int Customer::amountBonus(Rental& each)
{
	int frequentRenterPoints = 1;

	// ����� �� ����������� ������ �������
	if ((each.getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		each.getDaysRented() > 1)
		frequentRenterPoints++;
	return frequentRenterPoints;
}
