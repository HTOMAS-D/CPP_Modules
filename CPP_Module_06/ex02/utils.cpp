#include "Base.hpp"

Base *generate(void){
    Base *base;
    int choice = std::rand() % 3;
    switch (choice) {
        case 0: 
            base = new A;
            return base;
        case 1: 
            base = new B;
            return base;
        case 2: 
            base = new C;
            return base;
    }
    return NULL;
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