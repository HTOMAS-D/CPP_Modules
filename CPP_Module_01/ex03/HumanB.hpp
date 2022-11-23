#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(void);
		~HumanB(void);
	private:
		std::string _nameB;
		Weapon _weaponB;
};