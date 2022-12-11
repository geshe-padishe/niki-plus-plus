#ifndef _CLAP_TRAP_HPP_
# define _CLAP_TRAP_HPP_

#include <iostream>
#include <cmath>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hit_pts = 10;
		int			_energy_pts = 10;
		int			_atk_pts = 0;

	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
