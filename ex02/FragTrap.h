//
// Created by Louis-gabriel Laplante on 2022-06-06.
//

#ifndef PISCINE_CP_FRAGTRAP_H
#define PISCINE_CP_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {

private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap & operator = (const FragTrap &rhs);
	~FragTrap();

	void attack(std::string &target);
	void highFivesGuys();
};


#endif //PISCINE_CP_FRAGTRAP_H
