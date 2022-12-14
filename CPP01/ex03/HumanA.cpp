#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name) 
{}

void HumanA::setWeapon( Weapon& weapon )
{
    this->_weapon = weapon;
}