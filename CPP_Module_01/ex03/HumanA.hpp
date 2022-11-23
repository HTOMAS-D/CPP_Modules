#include <iostream>
#include <string>
#include "Weapon.hpp"
#ifndef HUMAN_A
#define HUMAN_A

class Human_A{
	public:
		Human_A(void);
		~Human_A(void);
		
	private:
		std::string _name;
		Weapon _weaponA;
};

#endif