/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/06 18:37:33 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main( void )
{
	ClapTrap	c_john("John");
	ScavTrap	s_bob("Bob");
	FragTrap	f_andy("Andy");
	
	std::cout << "====================== TEST ======================" << std::endl;
	std::cout << "================= Basic Functions ================" << std::endl;
	c_john.attack("Bob");
	c_john.takeDamage(2);
	c_john.beRepaired(1);
	std::cout << "================= More Tests ================" << std::endl;
	c_john.takeDamage(2);
	c_john.beRepaired(2);
	c_john.attack("Ali");
	c_john.takeDamage(5);
	c_john.attack("Bob");
	c_john.beRepaired(2);
	c_john.attack("Bob");
	std::cout << "================= After Death ================" << std::endl;
	c_john.takeDamage(10000);
	c_john.attack("Joe");
	c_john.beRepaired(10000);

	std::cout << "================= Test ScavTrap ================" << std::endl;
	s_bob.attack("Joe");
	s_bob.guardGate();
	s_bob.takeDamage(10);
	s_bob.beRepaired(3);
	std::cout << "================= After Death ================" << std::endl;
	s_bob.takeDamage(100000);
	s_bob.attack("John");

	std::cout << "================= Test FragTrap ================" << std::endl;
	f_andy.attack("John");
	f_andy.highFiveGuys();
	std::cout << "================= After Death ================" << std::endl;
	f_andy.takeDamage(100000);
	f_andy.attack("John");
	f_andy.highFiveGuys();
	std::cout << "================= END TEST ================" << std::endl;

	return (0);
}
