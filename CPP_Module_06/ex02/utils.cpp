#include "Base.hpp"

Base *generate(void){
    int choice = std::rand() % 3;
    switch (choice) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
}

void identify(Base *p){
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
            std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr) 
            std::cout << "C" << std::endl; 
}

void identify(Base &p){
    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::exception&) {std::cout << "Couldn't cast A\n";};
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::exception&) {std::cout << "Couldn't cast B\n";};
    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (std::exception&) {std::cout << "Couldn't cast C\n";};   
}