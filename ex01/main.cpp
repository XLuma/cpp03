//
// Created by Louis-gabriel Laplante on 2022-06-03.
//

#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
	ScavTrap	a;
		ScavTrap	b("Bob");
	ClapTrap	c("Clippy");

	b.takeDamage(3);
	b.takeDamage(20);
	b.beRepaired(3);
	b.attack("Eric");
	b.attack("Eric");
	b.attack("Eric");
	b.beRepaired(6);
	b.attack("Eric");
	std::cout << b.getName() << " " << b.getEnergyPoints() << std::endl;
	std::cout << b.getName() << " " << b.getHitPoints() << std::endl;

	b.guardGate();
}
