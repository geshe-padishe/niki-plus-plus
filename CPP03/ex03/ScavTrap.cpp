#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_pts = 100;
    _energy_pts = 50;
    _atk_pts = 20;
    max_hp = 100;
    std::cout << "ScavTrap created with name: " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << _name << " is in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit_pts <= 0 || _energy_pts <= 0)
        return ;
    std::cout << "Trap " << _name << " attacks " << target
                << " causing " << _atk_pts << " points of damage!" << std::endl;
    this->setEnergy(_energy_pts - 1);
}