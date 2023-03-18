#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{

    std::cout << "-----------ANIMAL CONSTRUCTORS------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "-----------ANIMAL SOUNDS------------" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "-----------WRONG ANIMAL CONSTRUCTORS------------" << std::endl;
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* y = new WrongCat();

    std::cout << "-----------WRONG SOUNDS------------" << std::endl;
    y->makeSound();
    meta2->makeSound();

    std::cout << "-----------DESTRUCTORS------------" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete meta2;
    delete y;
    return (0);
}