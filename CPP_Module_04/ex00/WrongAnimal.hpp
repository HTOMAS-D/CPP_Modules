#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
// #include <cstring>
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();						//canonical
		~WrongAnimal();						//canonical
		WrongAnimal(WrongAnimal const &copy);		//canonical

		WrongAnimal &operator=(WrongAnimal const &other);		//canonical

		std::string getType() const;
		void makeSound() const;
};

#endif