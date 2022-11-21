#include "Phonebook.hpp"
#include <iostream>
#include <unistd.h>

Phonebook::Phonebook(){
	//std::cout << "Constructor called" << std::endl;
	this->_index = 0;
	this->_numb_contacts = 0;
}

Phonebook::~Phonebook(){
// 	std::cout << "Destructor called" << std::endl;
}

void	Phonebook::add_contact(void){
	std::string holder;
	std::cout << BLUE << "First name: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[_index].add_Fname(holder);
	std::cout << BLUE << "Last name: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[_index].add_Lname(holder);
	std::cout << BLUE << "Phone number: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[_index].add_Numb(holder);
	std::cout << BLUE << "Enter nickname: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[_index].add_Nick(holder);
	std::cout << BLUE << "Enter darkest secret: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[_index].add_Dsecret(holder);
	if (this->_numb_contacts < 8)
		this->_numb_contacts++;
	if ((this->_index + 1) >= 8)
		this->_index = 0;
	else
		this->_index++;
	std::cout << GREEN << "Contact Information Added 😁" << std::endl;
	sleep(2);
}

void	Phonebook::search_contact(void){
	int i = 0;
	std::string str;

	if (this->_numb_contacts == 0){
		std::cout << RED << "There are no contacts in your phonebook, please get some friends" << std::endl; 
		return ;
	}
	std::cout.width(12);
	std::cout << std::right << GREEN << "Index" << "|";
	std::cout.width(10);
	std::cout << std::right << "First Name" << "|";
	std::cout.width(10);
	std::cout << std::right << "Last Name" << "|";
	std::cout.width(10);
	std::cout << std::right << "Nickname" << DEFAULT << std::endl;
	while (i < _numb_contacts){
		std::cout.width(10);
		std::cout << std::right << i << "|";
		str = _people[i].get_Fname();
		if (str.size() >= 10){
			str.replace(9, 1, ".");
			str.erase(10);
		}
		std::cout.width(10);
		std::cout << std::right << str << "|";
		str = _people[i].get_Lname();
		if (str.size() >= 10){
			str.replace(9, 1, ".");
			str.erase(10);
		}
		std::cout.width(10);
		std::cout << std::right << str << "|";
		str = _people[i].get_Nick();
		if (str.size() >= 10){
			str.replace(9, 1, ".");
			str.erase(10);
		}
		std::cout.width(10);
		std::cout << std::right << str << std::endl;
		i++;
	}
}

void Phonebook::show_contact(int i){
	if(i > _numb_contacts){
		std::cout << "You've only added " << _numb_contacts << "people to your contact list";
		return;
	}
}
