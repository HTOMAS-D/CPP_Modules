#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// meta->makeSound();
	i->makeSound(); 
	j->makeSound();
	// delete meta;
	delete j;
	delete i;
	return 0;

	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();
	// std::cout << i->getType() << " " << std::endl; //will output the cat sound!
	// i->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete i;
	// return 0;	
}