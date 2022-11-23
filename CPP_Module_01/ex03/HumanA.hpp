#include <iostream>
#include <string>
#include "Weapon.hpp"
#ifndef HUMAN_A
#define HUMAN_A

class Human_A{
	public:
		Human_A(std::string name, Weapon _weapA);
		~Human_A(void);
		void attack(void);
	private:
		std::string _nameA;
		Weapon _weaponA;
};

#endif