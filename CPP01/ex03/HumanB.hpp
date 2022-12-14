#ifndef _HUMAN_B_HPP_
# define _HUMAN_B_HPP_
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon*     _weapon;
        std::string _name;
    
    public:
        HumanB( std::string );
        void attack();
        void setWeapon( Weapon& );
};
#endif