/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/06 18:37:40 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main( void )
{
	ClapTrap john("John");

	std::cout << "====================== TEST ======================" << std::endl;
	std::cout << "================= Basic Functions ================" << std::endl;
	john.attack("Bob");
	john.takeDamage(2);
	john.beRepaired(1);
	std::cout << "================= More Tests ================" << std::endl;
	john.takeDamage(2);
	john.beRepaired(2);
	john.attack("Ali");
	john.takeDamage(5);
	john.attack("Bob");
	john.beRepaired(2);
	john.beRepaired(2);
	john.attack("Bob");
	std::cout << "================= After Death ================" << std::endl;
	john.takeDamage(10000);
	john.attack("Joe");
	john.beRepaired(10000);
	std::cout << "================= END TEST ================" << std::endl;

	return (0);
}
