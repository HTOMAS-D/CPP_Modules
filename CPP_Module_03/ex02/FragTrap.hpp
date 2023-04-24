#ifndef FRAGTRAP_H
#include FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap() : ClapTrap()
{
	private:

	public:
		Fragtrap();
		~FragTrap();
		FragTrap(Fragtrap const &copy);
		
		Fragtrap& operator=(FragTrap const &other);

		void highFiveGuys(void);

};

#endif