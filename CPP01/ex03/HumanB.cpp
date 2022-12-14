#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks with their hands" << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::setWeapon( Weapon& weapon )
{
    this->_weapon = &weapon;
}