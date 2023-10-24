#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        const std::string _target;
        // std::strind _signed;
    public:
        ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & copy);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);

        void execute(Bureaucrat const &bur) const;

        const std::string getTarget(void);
        
        class CantSign : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif