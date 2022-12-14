#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    
    return (zombie);
}

void randomChump( std::string name )
{
    Zombie zombie;

    zombie.setName(name);
    zombie.announce();
}

Zombie::Zombie(std::string name)
{
    if (name.empty())
        std::cout << "Zombie name invalid" << std::endl;
    else
        this->name = name;
    std::cout << "Zombie construite\n" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Zombie consruite\n";
}

void Zombie::setName( std::string name)
{
    this->name = name;
}