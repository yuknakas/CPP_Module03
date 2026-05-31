/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 16:51:39 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main( void )
{
	ClapTrap	c_john("John");
	ScavTrap	s_bob("Bob");
	FragTrap	f_andy("Andy");
	DiamondTrap	d_yuki("Yuki");
	
	c_john.attack("Bob");
	c_john.takeDamage(2);
	c_john.beRepaired(1);
	c_john.takeDamage(2);
	c_john.beRepaired(2);
	c_john.attack("Ali");
	c_john.takeDamage(5);
	c_john.attack("Bob");
	c_john.beRepaired(2);
	c_john.attack("Bob");
	c_john.takeDamage(10000);
	c_john.attack("Joe");
	c_john.beRepaired(10000);

	s_bob.attack("Joe");
	s_bob.guardGate();
	s_bob.takeDamage(10);
	s_bob.beRepaired(3);
	s_bob.takeDamage(100000);
	s_bob.attack("John");

	f_andy.attack("John");
	f_andy.highFiveGuys();

	d_yuki.attack("Joe");
	d_yuki.guardGate();
	d_yuki.takeDamage(20);
	d_yuki.highFiveGuys();
	d_yuki.whoAmI();

	return (0);
}
