#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private:
        const std::string _target;
    public:
        RobotomyRequestForm(const std::string &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & copy);
        RobotomyRequestForm(const RobotomyRequestForm& copy);

        void execute(Bureaucrat const &bur) const;

        std::string getTarget(void) const;
        
        class CantSign : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif