#ifndef CAT_HPP
#define CAT_HPP
// #include <cstring>
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	// protected:
	// 	std::string type;
	public:
		Cat();						//canonical
		~Cat();						//canonical
		Cat(Cat const &copy);		//canonical

		Cat &operator=(Cat const &other);		//canonical

		std::string getType() const;
		void makeSound() const;
};

#endif