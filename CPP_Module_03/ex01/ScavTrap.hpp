#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:

	
	public:
		ScavTrap(void); 							//Canonical
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);				//Canonical
		~ScavTrap(void); 							//Canonical
		
		ScavTrap&	operator=(ScavTrap const &rhs);
};

#endif