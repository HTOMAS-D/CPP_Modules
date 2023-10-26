#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat henrique ("Cansign", 20);
    Bureaucrat rafa ("Nosign", 90);
    Form cub3d("cub3d", 45, 1);
    std::cout << "to sign: " << cub3d.getToSign() << std::endl;
    std::cout << "henrique grade: " << henrique.getGrade() << std::endl;
    std::cout << "rafa grade: " << rafa.getGrade() << std::endl;
    rafa.signForm(cub3d);
    henrique.signForm(cub3d);

}