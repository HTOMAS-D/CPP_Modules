#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(){
	std::cout << "Constructor called" << std::endl;
	this->index = 0;
}

Phonebook::~Phonebook(){
	std::cout << "Destructor called" << std::endl;
}

void Phonebook::add_contact(void){
	std::string holder;
	std::cout << "First name: ";
	getline(std::cin, holder);
	this->_people[index].add_Fname(holder);
	std::cout << "Last name: ";
	getline(std::cin, holder);
	this->_people[index].add_Lname(holder);
	std::cout << "Phone number: ";
	getline(std::cin, holder);
	this->_people[index].add_Numb(holder);
	std::cout << "Enter nickname: ";
	getline(std::cin, holder);
	this->_people[index].add_Nick(holder);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, holder);
	this->_people[index].add_Dsecret(holder);
	if ((this->index + 1) >= 8)
		this->index = 0;
	else
		this->index++;

}
