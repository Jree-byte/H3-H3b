#include "Dog.h"

Dog::Dog()
{
}

Dog::~Dog()
{
    std::cout << "Dog tuhoutuu." << std::endl;
}

void Dog::callOut() const
{
    std::cout << "Koira haukkuu!" << std::endl;
}
