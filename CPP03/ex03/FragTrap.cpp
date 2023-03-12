#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hit_pts = 100;
    _energy_pts = 100;
    _atk_pts = 30;
    max_hp = 100;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_pts = 100;
    _energy_pts = 100;
    _atk_pts = 30;
    max_hp = 100;
    std::cout << "FragTrap created with name:" << name << std::endl;
}

FragTrap::FragTrap( const FragTrap & trap)
{
    std::cout << "Fixed Copy constructor called" << std::endl;
    *this = trap;
}

FragTrap& FragTrap::operator=( const FragTrap& B)
{
    _name = B._name;
    _hit_pts = B._hit_pts;
    _energy_pts = B._energy_pts;
    _atk_pts = B._atk_pts;
    return *this;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " says " << "Tape m'en 5!" << std::endl;
}