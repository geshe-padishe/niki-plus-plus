#ifndef _FRAG_TRAP_HPP_
# define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
      FragTrap(std::string name);
      ~FragTrap();
      void highFivesGuys();
};
#endif