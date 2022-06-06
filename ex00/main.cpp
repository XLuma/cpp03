//
// Created by Louis-gabriel Laplante on 2022-06-03.
//

#include "ClapTrap.h"

int main()
{
	ClapTrap a;
	ClapTrap b("Bob");
	ClapTrap c(b);
	ClapTrap d;

	a.setName("Alice");
	d = a;

	std::cout << a.getName() << std::endl;
	std::cout << b.getName() << std::endl;
	std::cout << c.getName() << std::endl;
	std::cout << d.getName() << std::endl;

	std::cout << a.getName() << " " << a.getEnergyPoints() << std::endl;
	a.attack("Bob");
	a.attack("Somebody");
	std::cout << a.getName() << " " << a.getEnergyPoints() << std::endl;

	std::cout << b.getName() << " " << b.getHitPoints() << std::endl;
	b.takeDamage(1);
	std::cout << b.getName() << " " << b.getHitPoints() << std::endl;
	b.takeDamage(3);
	std::cout << b.getName() << " " << b.getHitPoints() << std::endl;

	int i = 0;
	while (i < 10)
	{
		d.attack("Alice");
		i++;
	}
	std::cout << d.getName() << " " << d.getEnergyPoints() << std::endl;
	d.attack("Bob");
}
