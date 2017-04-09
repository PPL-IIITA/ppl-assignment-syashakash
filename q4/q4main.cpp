/*
*	Question-4
*/

#include <iostream>
#include <string>
#include <fstream>
#include "couple.h"
#include "essentialgift.h" /*!< Detailed description after the member */
#include "luxurygift.h"
#include "utilitygift.h"

using namespace std;

/*
*	This function finds the k most compatible couples in college
*/
void findbreakCompatible()
{
	Couple covec[100]; /*!< Stores the couples in college */
	string bname, gname, gtype, btype;
	int batr, gatr, bintelli, gintelli;
	double bpaise, gpaise;
	ifstream incop("couplerec.txt", ios::in);
	int i = 0;
	/*
	* Generate an array of couples in college
	*/
	while(true) {
		incop>>bname>>btype>>batr>>bintelli>>bpaise;
		incop>>gname>>gtype>>gatr>>gintelli>>gpaise;
		if(incop.eof()) break;
		covec[i].setBoyName(bname);
		covec[i].setBoyType(btype);
		covec[i].setBoyAttraction(batr);
		covec[i].setBoyIntelligence(bintelli);
		covec[i].setBoyBudget(bpaise);
		covec[i].setGirlName(gname);
		covec[i].setGirlType(gtype);
		covec[i].setGirlAttraction(gatr);
		covec[i].setGirlIntelligence(gintelli);
		covec[i].setGirlCost(gpaise);
		covec[i].setCompatibility(batr, bintelli, bpaise, gatr, gintelli, gpaise);
		i++;
	}
	
	int n = i;
	/*
	*  Sorting of couples by Binary Search
	*/ 
	for(int k = 0; k < i - 1; k++) {
		for(int j = 0; j < n - k - 1; j++) {
			if((int)covec[j].getCompatibility() > (int)covec[j + 1].getCompatibility()) {
				Couple c = covec[j];
				covec[j] = covec[j + 1];
				covec[j + 1] = c;
			}
		}
	}
	ofstream comp("leastcompatible.txt", ios::out); /*!< Stores names of most compatible couples */
	for(i = 0; i < n; i++) {
		if(i < 6) continue;
		comp<<covec[i].getBoyName()<<" "<<covec[i].getGirlName()<<endl;
	}
	comp.close();
}

/*
* Main Function
*/
int main()
{
	//exchangeGifts(); /*!< Create log of gifts exchanged */
	findbreakCompatible(); /*!< Finds the most compatible ones */
	//findHappiest();	/*!< Finds the happiest couples */
	return 0;
}
