#pragma once
#include <string>
#include "Price.h"
#include "RegularPrice.h"
#include "ChildrenPrice.h"
#include "NewReleasePrice.h"
#include <stdexcept>
using namespace std;


class Movie
{
public:
	static const int CHILDREN = 2;
	static const int REGULAR = 0;
	static const int NEW_RELEASE = 1;
private:
	string _title;
	Price* _price;

public:
	Movie() {
		_title = "";
		setPriceCode(0);
	}

	Movie(string title, int priceCode){
		_title = title;
		setPriceCode (priceCode);
	}

	int getPriceCode() {
		return _price-> GetPriceCode();
	}

	void setPriceCode(int arg) {
		//_priceCode = arg;
		switch (arg)
		{
		case REGULAR:
			_price = new RegularPrice;
			break;
		case NEW_RELEASE:
			_price = new NewReleasePrice;
			break;
		case CHILDREN:
			_price = new ChildrenPrice;
			break;
		default:
			throw invalid_argument("incorrect Price code");
		}
	}

	double getCharge(int daysRented) {
		return _price->getCharge(daysRented);
	}

	int amountBonus (int daysRented) {
		return _price->amountBonus(daysRented);
	}

	string getTitle() {
		return _title;
	}
};

