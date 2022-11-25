#include <iostream>
#include <string>
#include "Weapon.hpp"
#ifndef HUMAN_A
#define HUMAN_A

class HumanA{
	public:
		HumanA();
		HumanA(std::string name, Weapon &_weapA);
		~HumanA(void);
		void attack(void);
	private:
		std::string _nameA;
		Weapon *_weaponA;
};

#endif