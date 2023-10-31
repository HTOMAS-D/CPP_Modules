#include "Base.hpp"

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr));

    Base *randomBase = generate();
    identify(randomBase);

    A a;
    B b;
    C c;
    identify(a);
    identify(b);
    identify(c);

    delete randomBase;

    return 0;
}