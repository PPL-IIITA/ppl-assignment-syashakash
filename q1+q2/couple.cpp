#include<string>
#include<iostream>
#include<cmath>
#include "couple.h"

/*
*	Declaration of all Couple member functions
*/
void Couple::setBoyName(std::string bname)
{
	boy_name = bname;
}
		
void Couple::setGirlName(std::string gname)
{
	girl_name = gname;
}
	
void Couple::setBoyType(std::string btype)
{
	boy_type = btype;
}

void Couple::setGirlType(std::string gtype)
{
	girl_type = gtype;
}

void Couple::setBoyAttraction(int batr)
{
	boy_attractiveness = batr;
}
		
		
void Couple::setGirlAttraction(int gatr)
{
	girl_intelligence = gatr;
}
		
		
void Couple::setBoyIntelligence(int bintelli)
{
	boy_intelligence = bintelli;
}
		
void Couple::setGirlIntelligence(int gintelli)
{
	girl_intelligence = gintelli;
}
		
void Couple::setBoyBudget(double bpaise)
{
	boy_budget  = bpaise;
}
		
void Couple::setGirlCost(double gpaise)
{
	girl_cost = gpaise;
}

std::string Couple::getBoyName() 
{
	return boy_name;
}

std::string Couple::getGirlName() 
{
	return girl_name;
}

double Couple::getBoyBudget()
{
	return boy_budget;
}

double Couple::getGirlCost()
{
	return girl_cost;
}

int Couple::getBoyIntelligence()
{
	return boy_intelligence;
}

int Couple::getGirlIntelligence()
{
	return girl_intelligence;
}
 
double Couple::getCompatibility()
{
	return compatibility;
}

void Couple::setCompatibility(int batr, int bintelli, double bpaise, int gatr, int gintelli, double gpaise)
{
	compatibility = std::abs(bpaise - gpaise) + std::abs(gatr - batr) + std::abs(bintelli - gintelli);
}
/*!< Find happiness of couples */
void Couple::setHappiness(std::string btype, std::string gtype, int ess, int lux, int uti, double bpaise, double gpaise)
{
	if(gtype == "Choosy") {
		girl_happiness = (int)std::log10((ess + 2 * lux + uti) / (int)gpaise);	
	} else if(gtype == "Normal") {
		girl_happiness = (int)(ess + lux + uti) /(int)gpaise ;
	} else if(gtype == "Desperate") {
		girl_happiness = (int)exp((ess + lux + uti) / (int)gpaise);
	}
	
	if(btype == "Miser") {
		boy_happiness = (int)bpaise - (ess + lux + uti);
	} else if(btype == "Generous") {
		boy_happiness = girl_happiness;
	} else if(btype == "Geek") {
		boy_happiness = girl_intelligence;
	}
	
}

int Couple::getHappiness()
{
	return girl_happiness + boy_happiness;
}

void Couple::display() 
{
	std::cout<<boy_name<<" "<<boy_type<<" "<<boy_attractiveness<<" "<<boy_intelligence<<" "<<boy_budget<<std::endl;
	std::cout<<girl_name<<" "<<girl_type<<" "<<girl_attractiveness<<" "<<girl_intelligence<<" "<<girl_cost<<" "<<compatibility<<std::endl;
}

