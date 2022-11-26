#include <iostream>
#include <string>

#ifndef HARL_H
#define HARL_H

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

class Harl{
	public:
		Harl(void);
		~Harl(void);
		
		Harl(std::string level);
		void complain(std::string level);
	
	private:
		std::string _level[4];
		void(Harl::*f[4])(void);

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif