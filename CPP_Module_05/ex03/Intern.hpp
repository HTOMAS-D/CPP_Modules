#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class Intern {
    private:
    public:
        Intern();
        ~Intern();
        Intern(Intern const &copy);
        Intern &operator=(Intern const &copy);

        AForm *makeForm(std::string formName, std::string formTarget);

        class NoSuchForm: public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif