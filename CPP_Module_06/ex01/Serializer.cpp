#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &copy) {
    *this = copy;
}

Serializer &Serializer::operator=(Serializer const &copy){
    if (this == &copy)
        return *this;
    return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data *ptr){
    uintptr_t raw;
    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* Serializer::deserialize(uintptr_t raw){
    Data * data;
    data = reinterpret_cast<Data*>(raw);
    return data;
}