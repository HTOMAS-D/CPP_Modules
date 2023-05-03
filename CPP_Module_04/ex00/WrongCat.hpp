#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
// #include <cstring>
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	// protected:
	// 	std::string type;
	public:
		WrongCat();						//canonical
		~WrongCat();						//canonical
		WrongCat(WrongCat const &copy);		//canonical

		WrongCat &operator=(WrongCat const &other);		//canonical

		std::string getType() const;
		void makeSound() const;
};

#endif