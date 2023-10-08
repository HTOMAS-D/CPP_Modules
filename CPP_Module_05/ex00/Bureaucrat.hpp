#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include <string>

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
        Bureaucrat();

    public:
        Bureaucrat(Bureaucrat const &copy); // done
        Bureaucrat(std::string name, int grade); // done
        
        ~Bureaucrat(); //done
        
        Bureaucrat&	operator=(const Bureaucrat& bur); // done

        
        const std::string getName() const; //done
        int getGrade() const; //done
        void incrementGrade(); //done
        void decrementGrade(); //done

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat); // donce

#endif