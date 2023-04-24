#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const &copy);
		
		FragTrap& operator=(FragTrap const &other);

		void highFiveGuys(void);

};

#endif