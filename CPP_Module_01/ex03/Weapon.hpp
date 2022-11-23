#include <iostream>
#include <string>
#ifndef WEAPON_HPP
#define WEAPON_HPP

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

class Weapon{
	public:
		Weapon(void);
		~Weapon(void);
		std::string &getType(void);
		void setType(std::string type);
	private:
		std::string _type;
};

#endif