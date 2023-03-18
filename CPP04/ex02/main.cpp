#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "-----------ANIMAL CONSTRUCTORS------------" << std::endl;
    const Animal* j = new Dog();
    const Animal* y = new Cat();    
    Animal *tab[10];
    Animal test;

    std::cout << "-----------ANIMAL TAB CONSTRUCTORS------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "-----------" << std::endl;
        if (i % 2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    
    std::cout << "-----------ANIMAL TAB SOUNDS------------" << std::endl;
    for (int i = 0; i < 10; i++)
        tab[i]->makeSound();
    
    std::cout << "-----------ANIMAL SOUNDS------------" << std::endl;
    j->makeSound();
    y->makeSound();
    
    std::cout << "-----------ANIMAL TAB DESTRUCTORS------------" << std::endl;
    for (int i = 0; i < 10; i++)
        delete tab[i];
    
    std::cout << "-----------ANIMAL DESTRUCTORS------------" << std::endl;
    delete j;
    delete y;
    return 0;
}