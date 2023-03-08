#ifndef _DIAMOND_TRAP_HPP_
# define _DIAMOND_TRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
      DiamondTrap(std::string name);
      ~DiamondTrap();
      void attack(const std::string& target);
      void whoAmI();
    private:
      std::string _name;
};
#endif