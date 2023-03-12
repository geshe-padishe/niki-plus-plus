#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Default ScavTrap";
    _hit_pts = 100;
    _energy_pts = 50;
    _atk_pts = 20;
    max_hp = 100;
    std::cout << "Default ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_pts = 100;
    _energy_pts = 50;
    _atk_pts = 20;
    max_hp = 100;
    std::cout << "ScavTrap created with name:" << name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & trap)
{
    std::cout << "ScavTrap Fixed Copy constructor called" << std::endl;
    *this = trap;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is in Gate Keeper mode" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& B)
{
    _name = B._name;
    _hit_pts = B._hit_pts;
    _energy_pts = B._energy_pts;
    _atk_pts = B._atk_pts;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit_pts <= 0 || _energy_pts <= 0)
        return;
    std::cout << "ScavTrap " << _name << " attacks " << target
               << " causing " << _atk_pts << " points of damage!" << std::endl;
    this->setEnergy(_energy_pts - 1);
}