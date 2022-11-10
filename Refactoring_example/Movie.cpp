#include "Movie.h"

void Movie::setPriceCode(int arg) {
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
