#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal   h;
    Animal *tab[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
        tab[i]->makeSound();
    for (int i = 0; i < 10; i++)
        delete tab[i];
    delete j;
    delete i;
    return 0;
}