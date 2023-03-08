#ifndef _SCAV_TRAP_HPP_
# define _SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
	    void attack(const std::string& target);
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};
#endif