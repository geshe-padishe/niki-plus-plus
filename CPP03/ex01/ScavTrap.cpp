#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit_pts = 100;
    this->_energy_pts = 50;
    this->_atk_pts = 20;
    std::cout << "ScavTrap created with name:" << name << "hit points " << _hit_pts << std::endl;
    // std::cout << "Health - " << this->getHealth() << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << "is in Gate Keeper mode" << std::endl;
}