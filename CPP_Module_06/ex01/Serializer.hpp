#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <cstdint>
#include <string>
#include <iostream>

struct Data{
    std::string dataString;
    int dataInt;
};


class Serializer{
    private:
    public:
        Serializer();
        ~Serializer();
        Serializer(Serializer const & copy);
        Serializer &operator=(Serializer const & copy);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif