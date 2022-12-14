#ifndef _HUMAN_A_HPP_
# define _HUMAN_A_HPP_
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&     _weapon;
        std::string _name;
    
    public:
        HumanA( std::string, Weapon& );
        void attack();
        void setWeapon( Weapon& );
};
#endif