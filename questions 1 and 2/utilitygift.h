#ifndef UTILITYGIFT_H
#define UTILITYGIFT_H
/*
*	Definition of class of utility gifts
*/
class utilityGift {
		int value;
		int price;
		int utilityValue;
		int utilityClass;
	public:
		int getPrice();
		int getValue();
		int getUtilityValue();
		int getUtilityClass();
};

#endif
