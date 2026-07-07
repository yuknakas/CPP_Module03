/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:20:07 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap d_no;
	DiamondTrap	d_yuki("Yuki");
	
	std::cout << "====================== TEST ======================" << std::endl;
	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << "================= Test DiamondTrap ================" << std::endl;
	d_yuki.attack("John");
	d_yuki.guardGate();
	d_yuki.highFiveGuys();
	d_yuki.whoAmI();
	d_no.whoAmI();
	d_no.guardGate();
	std::cout << std::endl;
	std::cout << "================= After Death ================" << std::endl;
	d_yuki.takeDamage(100000);
	d_yuki.attack("John");
	d_yuki.guardGate();
	d_yuki.highFiveGuys();
	d_yuki.whoAmI();

	std::cout << std::endl;
	std::cout << "================= OCF ================" << std::endl;
	DiamondTrap nobody;
	DiamondTrap no2(nobody);
	DiamondTrap adam("adam");
	DiamondTrap adam2(adam);
	
	std::cout << std::endl;
	std::cout << "================= END TEST ================" << std::endl;

	return (0);
}
