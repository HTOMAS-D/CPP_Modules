#include "Contact.hpp"
#include <cstdlib>
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

class Phonebook{
	
	public:
		Phonebook(void);
		~Phonebook(void);

		void add_contact(void);
		void search_contact(void);
	private:
		int _index;
		int _numb_contacts;
		Contact _people[8];
};

#endif /***    PHONEBOOK_H */