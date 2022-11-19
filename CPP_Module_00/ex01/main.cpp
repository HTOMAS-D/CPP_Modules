#include <iostream>
#include "Phonebook.hpp"
#include <cstdlib>

void ask_input(void){
	std::cout << "\033[0;32mADD \033[0;33m-> if you want to add a new contact" << std::endl;
	std::cout << "\033[0;32mSEARCH \033[0;33m-> if you want to see contacts and info" << std::endl;
	std::cout << "\033[0;32mEXIT \033[0;33m-> if you want to quit the program\033[0m" << std::endl;
	
}

int main(){
	std::string command;
	Phonebook phone;
	while (1){
		system("clear");
		ask_input();
		getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (command == "ADD"){
			system("clear");
			phone.add_contact();
		}
	// else if (command == "SEARCH")
		else{
			system("clear");
			std::cout << "\033[0;31mPlease enter a valid command\033[0m" << std::endl;
		}
	}
	system("clear");
}