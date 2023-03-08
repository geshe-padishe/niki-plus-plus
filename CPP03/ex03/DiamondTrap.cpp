#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    DiamondTrap::_name = name;
    _hit_pts = FragTrap::_hit_pts;
    _energy_pts = ScavTrap::_energy_pts;
    _atk_pts = FragTrap::_atk_pts;
    max_hp = 100;
    std::cout << "DiamondTrap created with name: " << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and parent clap_trap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}