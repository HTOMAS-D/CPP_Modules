#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        const std::string _target;
    public:
        PresidentialPardonForm(const std::string &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & copy);
        PresidentialPardonForm(const PresidentialPardonForm& copy);

        void execute(Bureaucrat const &bur) const;

        std::string getTarget(void) const;
        
        class CantSign : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif