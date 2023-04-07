#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <iomanip>
#include <cmath>

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

class ClapTrap{
	private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;

	public:
		// CONSTRUCTORS AND DECONSTRUCTORS
		ClapTrap(void); 							//Canonical
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);				//Canonical
		~ClapTrap(void); 							//Canonical

		//ASSIGNEMENT OPERATOR
		ClapTrap&	operator=(ClapTrap const &rhs); 	//Canonical

		//METHODS
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif