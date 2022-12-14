#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon( std::string );
        std::string&    getType();
        void            setType(std::string);
};
#endif