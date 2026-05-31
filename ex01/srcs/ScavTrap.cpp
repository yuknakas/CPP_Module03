/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 03:09:23 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 15:25:25 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->m_hp = 100;
	this->m_energy = 50;
	this->m_attack = 20;
	std::cout << YELLOW << "Default ScavTrap Constructor Called for " << name << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap Destructor Called for " << this->m_name << RESET << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	if (m_hp < 1)
	{
		std::cout << YELLOW << m_name << " is DEAD!"
		<< RESET << std::endl;
		return ;
	}
	if (m_energy < 1)
	{
		std::cout << YELLOW << m_name << " does not have enough energy to perform an attack!"
		<< RESET << std::endl;
		return ;
	}
	m_energy--;
	std::cout << YELLOW << "ScavTrap " << m_name << " attacks " << target << ", causing "
	<< m_attack << " amount of damage!" << RESET << std::endl;
	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout << YELLOW << "ScavTrap " << this->m_name << " is now in Gate Keeper Mode!" << RESET << std::endl;
}
