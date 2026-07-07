/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 17:19:06 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main( void )
{
	ClapTrap john("John");
	ScavTrap bob("Bob");
	
	std::cout << "====================== TEST ======================" << std::endl;
	std::cout << std::endl;
	std::cout << "================= Basic Functions ================" << std::endl;
	john.attack("Bob");
	john.takeDamage(2);
	john.beRepaired(1);
	std::cout << std::endl;
	std::cout << "================= More Tests ================" << std::endl;
	john.takeDamage(2);
	john.beRepaired(2);
	john.attack("Ali");
	john.takeDamage(5);
	john.attack("Bob");
	john.beRepaired(2);
	john.attack("Bob");
	std::cout << std::endl;
	std::cout << "================= After Death ================" << std::endl;
	john.takeDamage(10000);
	john.attack("Joe");
	john.beRepaired(10000);

	std::cout << std::endl;
	std::cout << "================= Test ScavTrap ================" << std::endl;
	bob.attack("Joe");
	bob.guardGate();
	bob.takeDamage(10);
	bob.beRepaired(3);
	std::cout << std::endl;
	std::cout << "================= After Death ================" << std::endl;
	bob.takeDamage(100000);
	bob.attack("John");

	std::cout << std::endl;
	std::cout << "================= OCF ================" << std::endl;
	ScavTrap adam("adam");
	ScavTrap adam2(adam);
	
	std::cout << std::endl;
	std::cout << "================= END TEST ================" << std::endl;

	return (0);
}
