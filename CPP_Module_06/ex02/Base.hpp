#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
// #include "A.hpp"
// #include "B.hpp"
// #include "C.hpp"

class A;
class B;
class C;

class Base{
    private:
    public:
        virtual ~Base();
};

class A : public Base {};
class B : public Base  {};
class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif