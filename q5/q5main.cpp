/*
* Question-5
*/
#include <iostream>
#include <string>
#include <fstream>
#include "boy.h"
#include "girl.h"

using namespace std;
/*
*	Pair boys and girls as per question
*/
void makecouple() 
{
	string a, b, ab, bb;
	int at, in, atb, inb;
	double paisa, paisab;
	ifstream inboy("boyrec.txt", ios::in); /*!< Has record of all boys */
	ifstream ingirl("girlrec.txt", ios::in); /*!< Has record of all girls */
	ofstream incop("couples2.txt", ios::out); /*< Will have record of all couples created */
	int flag = 0;
	Boy bo("NA", "Generous", 0, 0, 0); /*!< Create a Boy object */
	Girl g("NA", "Choosy", 0, 0, 0); /*!< Create a Girl object */
	while(true) {
		inboy>>a>>b>>at>>in>>paisa;
		if(inboy.eof()) break;
		bo.setData(a, b, at, in, paisa);
		if(!flag) {
			ingirl>>ab>>bb>>atb>>inb>>paisab;
			if(ingirl.eof()) break;
			g.setData(ab, bb, atb, inb, paisab);
		}
		/*
		*	Conditional pairing of boys and girls
		*/
		if(bo.getBudget() >= g.getMaintenanceCost()) {
			incop<<bo.getName()<<" "<<"dates"<<" "<<g.getName()<<endl;
 			flag = 0;
		} else {
			flag = 1;
		}
	}
	/*!<Close all opened files */
	ingirl.close();
	incop.close();
	inboy.close();
}
/*
*	Main Function
*/
int main() 
{
	makecouple();
	return 0;
}
