#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DefaultDiamond_clap_name")
{
    DiamondTrap::_name = "DefaultDiamond";
    _hit_pts = FragTrap::_hit_pts;
    _energy_pts = ScavTrap::_energy_pts;
    _atk_pts = FragTrap::_atk_pts;
    max_hp = 100; 
    std::cout << "Default DiamondTrap constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
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

DiamondTrap::DiamondTrap( const DiamondTrap & trap)
{
    std::cout << "Fixed Copy constructor called" << std::endl;
    *this = trap;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& B)
{
    _name = B._name;
    _hit_pts = B._hit_pts;
    _energy_pts = B._energy_pts;
    _atk_pts = B._atk_pts;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}