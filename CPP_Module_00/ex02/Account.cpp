#include "Account.hpp"
#include <ctime>

Account::Account(int initial_deposit){

}

Account::~Account(void){}

static void Account::_displayTimestamp(void){
	time_t rawtime;
	char buffer[18];

	time (&rawtime);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localtime(&rawtime));
	std::cout << buffer << " ";
	return ;
}