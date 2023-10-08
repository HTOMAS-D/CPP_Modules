#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat * Ricky = new Bureaucrat("Ricky", 1);
    std::cout << * Ricky << std::endl;
    Ricky->incrementGrade();
    std::cout << * Ricky << std::endl;
    Ricky->decrementGrade();
    std::cout << * Ricky << std::endl;
    delete Ricky;

    std::cout << std::endl << std::endl << std::endl << std::endl;


    Ricky = new Bureaucrat("Ricky", 150);
    std::cout << * Ricky << std::endl;
    Ricky->decrementGrade();
    std::cout << * Ricky << std::endl;
    Ricky->incrementGrade();
    std::cout << * Ricky << std::endl;
    delete Ricky;


    std::cout << std::endl << std::endl << std::endl << std::endl;

    // Ricky = new Bureaucrat("Ricky", 1);
    // std::cout << * Ricky << std::endl;
    // delete Ricky;
    // Ricky = new Bureaucrat("Ricky", 24);
    // std::cout << * Ricky << std::endl;
    // delete Ricky;
    Ricky = new Bureaucrat("Ricky", 160);
    std::cout << Ricky->getGrade() << std::endl;
    delete Ricky;
    // Ricky = new Bureaucrat("Ricky", 72);
    // std::cout << * Ricky << std::endl;
    // delete Ricky;
    
}