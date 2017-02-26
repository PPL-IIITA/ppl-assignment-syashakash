#include <iostream>
#include <string>
#include <fstream>
#include "boy.h"
#include "girl.h"

using namespace std;

void jodibangayi() 
{
	string a, b, ab, bb;
	int at, in, atb, inb;
	double paisa, paisab;
	ifstream inboy("boyrec.txt", ios::in);
	ifstream ingirl("girlrec.txt", ios::in);
	ofstream incop("couples.txt", ios::out);
	int flag = 0;
	Boy bo("NA", "Geek", 0, 0, 0);
	Girl g("NA", "Normal", 0, 0, 0);
	while(true) {
		inboy>>a>>b>>at>>in>>paisa;
		if(inboy.eof()) break;
		bo.setData(a, b, at, in, paisa);
		if(!flag) {
			ingirl>>ab>>bb>>atb>>inb>>paisab;
			if(ingirl.eof()) break;
			g.setData(ab, bb, atb, inb, paisab);
		}
		if(bo.getBudget() >= g.getMaintenanceCost()) {
			incop<<bo.getName()<<" "<<"dates"<<" "<<g.getName()<<endl;
 			flag = 0;
		} else {
			flag = 1;
		}
	}
	ingirl.close();
	incop.close();
	inboy.close();
}

int main() 
{
	jodibangayi();
	return 0;
}
