/*
*	Question-2 
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
* This function creates log of gift exchanges
*/

void exchangeGifts()
{
	ifstream gp("giftlist.txt", ios::in); /*!< giftlist stores the gifts and their price */
	ifstream incop("couplerec.txt", ios::in); /*!< this is record file of all couples in collge */
	ofstream gf("giftlog.txt", ios::out);/*!< Stores the events of gift exchange */
	string a, ag, b, type, type2;
	int at, in;
	double bud, p, comp;
	int flag = 0;
	/*
	* This loop helps write on the log file 
	*/
	while(flag == 0) {
		incop>>a>>type>>at>>in>>bud>>b;
		incop>>type2>>at>>in>>bud;
		if(incop.eof()) break;
		if(type == "Geek") {
				while(true) {
					gp>>ag>>p;
					if(gp.eof()) { 
						flag = 1;
						break;
					}
					bud = bud - p;
					if(bud < 0) break;
					gf<<a<<" "<<b<<" "<<ag<<" "<<p<<endl;
				}
		} else {
			while(true) {
					gp>>ag>>p;
					if(gp.eof()) { 
						flag = 1;
						break;
					}
					bud = bud - p;
					gf<<a<<" "<<b<<" "<<ag<<" "<<p<<endl;
			}
		}
	}		
}

/*
*	This function finds the k most compatible couples in college
*/
void findCompatible()
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
	*  Sorting of coiuples by Binary Search
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
	ofstream comp("mostcompatible.txt", ios::out); /*!< Stores names of most compatible couples */
	for(i = 0; i < 6; i++) {
		comp<<covec[i].getBoyName()<<" "<<covec[i].getGirlName()<<endl;
	}
	comp.close();
}

/*
*	Find the happiest couples in college
*/
void findHappiest()
{
	ifstream fo("giftlog1.txt", ios::in); 
	Couple covec[10];
	string bname, btype, gname, gtype;
	int ess, lux, uti, i =0;
	double bpaise, gpaise;
	while(true) {
		fo>>bname>>btype>>bpaise>>gname>>gtype>>gpaise>>ess>>lux>>uti;
		if(fo.eof()) break;
		covec[i].setBoyName(bname);
		covec[i].setBoyType(btype);
		covec[i].setBoyBudget(bpaise);
		covec[i].setGirlName(gname);
		covec[i].setGirlType(gtype);
		covec[i].setGirlCost(gpaise);
		covec[i].setHappiness(btype, gtype, ess, lux, uti, bpaise, gpaise); /*!< Calculate happiness */
		i++;
	}
	fo.close();
	int n = i;
	for(int k = 0; k < i - 1; k++) {
		for(int j = 0; j < n - k - 1; j++) {
			if(covec[j].getHappiness() > covec[j + 1].getHappiness()) {
				Couple c = covec[j];
				covec[j] = covec[j + 1];
				covec[j + 1] = c;
			}
		}
	}
	/*
	* Write to file the happiest of the couples in college
	*/
	ofstream comp("happiest.txt", ios::out);
	for(i = 0; i < 2; i++) {
		comp<<covec[i].getBoyName()<<" "<<covec[i].getGirlName()<<endl;
	}
	comp.close();
}
/*
* Main Function
*/
int main()
{
	exchangeGifts(); /*!< Create log of gifts exchanged */
	findCompatible(); /*!< Finds the most compatible ones */
	findHappiest();	/*!< Finds the happiest couples */
	return 0;
}
