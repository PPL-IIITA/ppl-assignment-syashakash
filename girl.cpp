#include "girl.h"
#include <string>

Girl::Girl(std::string Name, std::string Type, int attr, int intelli, double m_c)
{
	name = Name;
	type = Type;
	attractiveness = attr;
	intelligence = intelli;
	maintenance_cost = m_c;
	commited = false;
	happiness = 0;
}

int Girl::getAttractiveness() {
    return attractiveness;
}

int Girl::getIntelligence() {
    return intelligence;
}

double Girl::getMaintenanceCost() {
    return maintenance_cost;
}

double Girl::getHappiness() {
    return happiness;
}

std::string Girl::getRelationshipStatus() {
    if(commited)
        return "Commited";
    else
        return "Single";
}

std::string Girl::getName() {
    return name;
}

std::string Girl::getType() {
        return type;
}

void Girl::setRelationshipStatus(bool x)
{
    commited = x;
}
void Girl::setData(std::string a, std::string b, int at, int in, double paisa)
{
	name = a;
	type = b;
	attractiveness = at;
	intelligence = in;
	maintenance_cost = paisa;
}
