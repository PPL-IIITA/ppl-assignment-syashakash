#ifndef COUPLE_H
#define COUPLE_H
#include<string>
/*
*	Definition of class Couple
*/
class Couple {
		std::string boy_name; /*!< Name of the commited boy */
		std::string girl_name; /*!< Name of the commited girl */
		std::string boy_type; /*!< Type of boy */
		std::string girl_type; /*!< Type of girl */
		double boy_budget; /*!< Boy's budget */
		double girl_cost; /*!< Maintenance cost of girl */
		int boy_intelligence; /*!< Boy's intelligence */
		int girl_intelligence; /*!< Girl's intelligence */
		int boy_happiness; /*!< Boy's happiness level */
		int girl_happiness; /*!< Girl's happiness level */
		double boy_attractiveness; /*!< Boy's attractiveness level */
		double girl_attractiveness; /*!< Girl's attractiveness level */
		double compatibility; /*!< Couple's compatibility */
	public:
		/*
		*	Setters
		*/
		void setBoyName(std::string);
		void setGirlName(std::string);
		void setBoyType(std::string);
		void setGirlType(std::string);
		void setBoyAttraction(int);
		void setGirlAttraction(int);
		void setBoyIntelligence(int);
		void setGirlIntelligence(int);
		void setBoyBudget(double);
		void setGirlCost(double);
		void setCompatibility(int, int, double, int, int, double);
		void setHappiness(std::string, std::string, int, int, int, double, double);
		/*
		*	Getters
		*/
		std::string getBoyName();
		std::string getGirlName();
		double getBoyBudget();
		double getGirlCost();
		int getBoyIntelligence();
		int getGirlIntelligence();
		double getCompatibility();
		int getHappiness();
		void display();
};

#endif

