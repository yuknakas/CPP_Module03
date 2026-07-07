/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:13:36 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main( void )
{
	FragTrap	f_andy("Andy");
	
	std::cout << "====================== TEST ======================" << std::endl;

	std::cout << std::endl;
	std::cout << "================= Test FragTrap ================" << std::endl;
	f_andy.attack("John");
	f_andy.highFiveGuys();
	std::cout << std::endl;
	std::cout << "================= After Death ================" << std::endl;
	f_andy.takeDamage(100000);
	f_andy.attack("John");
	f_andy.highFiveGuys();

	std::cout << std::endl;
	std::cout << "================= OCF ================" << std::endl;
	FragTrap nobody;
	FragTrap adam("adam");
	FragTrap adam2(adam);

	std::cout << std::endl;
	std::cout << "================= END TEST ================" << std::endl;

	return (0);
}
