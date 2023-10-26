#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137), _target(target) {
	std::cout << "Default Constructor called of Shrubbery Form" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy), _target(copy._target){
    std::cout << "Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy) 
{
    AForm::operator=(copy);
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & bur) const{
    std::ofstream ToCreate;
    std::string holder = this->getTarget() + "_shrubbery";

    if (checkperm(bur))
    {
        ToCreate.open(holder.c_str(), std::ofstream::out | std::ofstream::trunc);
        if (ToCreate.fail()){
            std::cout << "error opening file" << std::endl;
        }
        ToCreate << "               ,@@@@@@@,"  << std::endl;
        ToCreate << "       ,,,.   ,@@@@@@/@@,  .oo8888o."  << std::endl;
        ToCreate << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"  << std::endl;
        ToCreate << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"  << std::endl;
        ToCreate << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"  << std::endl;
        ToCreate << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"  << std::endl;
        ToCreate << "   `&%\\ ` /%&'    |.|        \\ '|8'"  << std::endl;
        ToCreate << "       |o|        | |         | |"  << std::endl;
        ToCreate << "       |.|        | |         | |"  << std::endl;
        ToCreate << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"  << std::endl;
        ToCreate.close();
        std::cout << "Shrubbery form executed" << std::endl;
    }
}


const char *ShrubberyCreationForm::CantSign::what() const throw(){
    return "Shrubbery exception: Cant Sign!!";
}