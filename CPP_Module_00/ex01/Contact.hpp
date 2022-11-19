#include <iostream>
#ifndef CONTACT_H
#define CONTACT_H

class Contact{
	private:
		std::string _Fname;
		std::string _Lname;
		std::string _Numb;
		std::string _Nick;
		std::string _Dsecret;

	public:
		Contact(void);
		~Contact(void);
		void add_Fname(std::string fname);
		void add_Lname(std::string lname);
		void add_Numb(std::string Numb);
		void add_Dsecret(std::string Dsecret);
		void add_Nick(std::string Nick);
};

#endif /******* CONTACT_H ******/