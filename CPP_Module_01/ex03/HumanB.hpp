#include <iostream>
#include <string>
#include "Weapon.hpp"
#ifndef HUMAN_B
#define HUMAN_B

class HumanB{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon whatever);
	private:
		std::string _nameB;
		Weapon _weaponB;
};

#endif