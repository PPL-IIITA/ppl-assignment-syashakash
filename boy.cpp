#include "boy.h"
#include<string>

Boy::Boy(std::string Name, std::string Type, int attr, int intelli, double bud)
{
    name = Name;
    type = Type;
    attractiveness = attr;
    intelligence = intelli;
    budget = bud;
    commited = false;
    happiness = 0;
}

int Boy::getAttractiveness()
{
    return attractiveness;
}

int Boy::getIntelligence()
{
    return intelligence;
}

double Boy::getBudget()
{
    return budget;
}

double Boy::getHappiness()
{
    return happiness;
}

std::string Boy::getRelationshipStatus()
{
    if(commited)
        return "Commited";
    else
        return "Single";
}

std::string Boy::getName()
{
    return name;
}

std::string Boy::getType()
{
        return type;
}

int Boy::getMinAttraction()
{
	return minAttraction;
}

void Boy::setRelationshipStatus(bool x)
{
    commited = x;
}
void Boy::setData(std::string a, std::string b, int at, int in, double paisa)
{
	name = a;
	type = b;
	attractiveness = at;
	intelligence = in;
	budget = paisa;
}
