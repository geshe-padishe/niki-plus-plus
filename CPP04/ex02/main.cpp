#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include <iostream>

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    const AAnimal animal;
    j->makeSound();
    i->makeSound();
    return 0;
}