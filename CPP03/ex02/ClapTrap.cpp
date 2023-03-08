#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10), _energy_pts(10), _atk_pts(0)
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
    {
        if ((int)amount > _hit_pts)
            this->setHealth(0);
        else
            this->setHealth(_hit_pts - amount);
        std::cout << "Trap " << _name << " takes " << amount << " of damage" << std::endl;
    }
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit_pts <= 0 || _energy_pts <= 0)
        return ;
    std::cout << "Trap " << _name << " attacks " << target
                << " causing " << _atk_pts << " points of damage!" << std::endl;
    this->setEnergy(_energy_pts - 1);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_pts <= 0 || _energy_pts <= 0)
        return ;
    std::cout << "Trap " << _name << " is being repaired " << std::endl;
    if (_hit_pts + (long)amount > max_hp)
    {
        std::cout << "repaired to max_hp = " << max_hp << std::endl;
        this->setHealth(max_hp);
    }
    else
    {
        std::cout << "repaired to hp = " << (_hit_pts + amount) << std::endl;
        this->setHealth(_hit_pts + amount); 
    }
    this->setEnergy(_energy_pts - 1);
}

void ClapTrap::setHealth(unsigned int health)
{
    _hit_pts = health;
}

void ClapTrap::setEnergy(unsigned int energy)
{   
    _energy_pts = energy;
}

void ClapTrap::setAttack(unsigned int attack)
{   
    _atk_pts = attack;
}

int ClapTrap::getHealth()
{
    return (_hit_pts);
}

int ClapTrap::getEnergy()
{
    return (_energy_pts);
}

int ClapTrap::getAttack()
{   
    return (_atk_pts);
}