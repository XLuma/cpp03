//
// Created by Louis-gabriel Laplante on 2022-06-06.
//

#ifndef PISCINE_CP_SCAVTRAP_H
#define PISCINE_CP_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {

private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap & operator = (const ScavTrap &rhs);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate();

};


#endif //PISCINE_CP_SCAVTRAP_H
