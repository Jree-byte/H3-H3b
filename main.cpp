#include <iostream>
#include <memory>
#include "Animal.h"
#include "Dog.h"

int main()
{
    std::cout << "--- Suorat oliot ---" << std::endl;
    Animal a;
    Dog d;

    a.callOut();  // "Eläin ääntelee."
    d.callOut();  // "Koira haukkuu!"

    std::cout << "\n--- Polymorfinen olio ---" << std::endl;
    std::unique_ptr<Animal> polyDog = std::make_unique<Dog>();
    polyDog->callOut(); // "Koira haukkuu!"

    std::cout << "\nOhjelman loppu, oliot tuhoutuvat automaattisesti." << std::endl;
    return 0;
}
