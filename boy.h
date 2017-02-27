#ifndef BOY_H
#define BOY_H
#include<string>

class Boy {
    int attractiveness; /*!< Boy's attractiveness level */
    int intelligence; /*!< Boy's intelligence */
    double budget; /*!< Boy's budget */
    double happiness; /*!< Boy's happiness level */
    bool commited; /*!< Is he commited ? */
    std::string name; /*!< Name of the boy */
    std::string type;  /*!< Type of boy */
    int min_attraction; /*!< MInimum attraction requirements */
public :
	/*!< Constructor */
    Boy(std::string, std::string, int, int, double);
    /*!< Getters */
    int getAttractiveness();
    int getIntelligence();
    double getBudget();
    double getHappiness();
    std::string getRelationshipStatus();
    std::string getName();
    std::string getType();
    void setRelationshipStatus(bool);
    int getMinAttraction();
    /*!< Setters */
    void setData(std::string, std::string, int, int, double);
};

#endif
