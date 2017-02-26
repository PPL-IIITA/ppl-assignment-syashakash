#ifndef BOY_H
#define BOY_H
#include<string>

class Boy {
    int attractiveness;
    int intelligence;
    double budget;
    double happiness;
    bool commited;
    std::string name;
    std::string type;
    int minAttraction;
public :
    Boy(std::string, std::string, int, int, double);
    int getAttractiveness();
    int getIntelligence();
    double getBudget();
    double getHappiness();
    std::string getRelationshipStatus();
    std::string getName();
    std::string getType();
    void setRelationshipStatus(bool);
    int getMinAttraction();
    void setData(std::string, std::string, int, int, double);
};

#endif
