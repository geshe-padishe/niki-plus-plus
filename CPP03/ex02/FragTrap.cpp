#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_pts = 100;
    _energy_pts = 100;
    _atk_pts = 30;
    max_hp = 100;
    std::cout << "FragTrap created with name:" << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << _name << " says " << "Tape m'en 5!" << std::endl;
}