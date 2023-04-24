#include <iostream>
#include "Phonebook.hpp"
#include <cstdlib>
#include <stdlib.h>
#include <unistd.h>

void ask_input(void){
	std::cout << "\033[0;32mADD \033[0;33m-> if you want to add a new contact" << std::endl;
	std::cout << "\033[0;32mSEARCH \033[0;33m-> if you want to see contacts and info" << std::endl;
	std::cout << "\033[0;32mEXIT \033[0;33m-> if you want to quit the program\033[0m" << std::endl;
	
}

int main(){
	std::string command;
	Phonebook phone;
	char index;
	while (1){
		system("clear");
		ask_input();
		std::cout << BLUE << "COMMMAND: " << DEFAULT;
		getline(std::cin, command);
		if (command == "EXIT")
			exit(0);
		else if (command == "ADD"){
			system("clear");
			phone.add_contact();
		}
		else if (command == "SEARCH"){
			system("clear");
			phone.search_contact();
			std::cout << BLUE << "*FOR MORE INFO PLEASE ENTER THE INDEX DESIRED*" << DEFAULT << std::endl;
			std::cout << BLUE << "Index: " << DEFAULT;
			std::cin >> index;
			// std::cout << index << std::endl;
			// sleep(4);
			phone.show_contact(index);
		}
		else{
			system("clear");
			std::cout << "\033[0;31mPlease enter a valid command\033[0m" << std::endl;
			// sleep(2);
		}
	}
	system("clear");
}