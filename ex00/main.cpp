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

	
}
