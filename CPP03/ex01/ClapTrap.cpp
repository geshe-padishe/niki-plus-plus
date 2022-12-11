#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
    std::cout << "ClapTrap created with name:" << name << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_pts > 0)
        std::cout << "ClapTrap " << _name << " takes " << amount << " of damage" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit_pts > 0 && _energy_pts > 0)
        std::cout << "ClapTrap " << _name << " attacks " << target
                    << " causing " << _atk_pts << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_pts > 0 && _energy_pts > 0)
    {
        std::cout << "ClapTrap " << _name << " is being repaired " << std::endl;
        _hit_pts = 10;
    }
}