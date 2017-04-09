#ifndef GIRL_H
#define GIRL_H
#include<string>
/*
*	Definition of class Girl
*/
class Girl {
    int attractiveness;
    int intelligence;
    double maintenance_cost;
    double happiness;
    bool commited;
    std::string name;
    std::string type;
public :
    Girl(std::string, std::string, int, int, double);
    int getAttractiveness();
    int getIntelligence();
    double getMaintenanceCost();
    double getHappiness();
    std::string getRelationshipStatus();
    std::string getName();
    std::string getType();
    void setRelationshipStatus(bool);
    void setData(std::string, std::string, int, int, double);
};

#endif
