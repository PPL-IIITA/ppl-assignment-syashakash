#ifndef LUXURYGIFT_H
#define LUXURYGIFT_H
/*
*	Definition of clas of luxury gifts
*/
class luxuryGift {
		int price;
		int value;
		int difficulty;
		int rating;
	public:
		int getPrice();
		int getValue();
		int getDifficulty();
		int getRating();
};

#endif
