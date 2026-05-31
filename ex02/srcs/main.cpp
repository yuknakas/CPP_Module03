/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/04/15 01:00:01 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main( void )
{
	ClapTrap john("John");
	ScavTrap bob("Bob");
	
	john.attack("Bob");
	john.takeDamage(2);
	john.beRepaired(1);
	john.takeDamage(2);
	john.beRepaired(2);
	john.attack("Ali");
	john.takeDamage(5);
	john.attack("Bob");
	john.beRepaired(2);
	john.attack("Bob");
	john.takeDamage(10000);
	john.attack("Joe");
	john.beRepaired(10000);

	bob.attack("Joe");
	bob.guardGate();
	bob.takeDamage(10);
	bob.beRepaired(3);
	bob.takeDamage(100000);
	bob.attack("John");

	return (0);
}
