#include "Animal.h"

Animal::Animal()
{
}

Animal::~Animal()
{
    std::cout << "Animal tuhoutuu." << std::endl;
}

void Animal::callOut() const
{
    std::cout << "Eläin ääntelee." << std::endl;
}
