/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:40:06 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 15:26:58 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->m_hp = 100;
	this->m_energy = 100;
	this->m_attack = 30;
	std::cout << RED << "Default FragTrap Constructor Called for " << name
	<< RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap Destructor Called for " << this->m_name
	<< RESET << std::endl;
}

void	FragTrap::attack( const std::string &target )
{
	if (m_hp < 1)
	{
		std::cout << RED << m_name << " is DEAD!"
		<< RESET << std::endl;
		return ;
	}
	if (m_energy < 1)
	{
		std::cout << RED << m_name << " does not have enough energy to perform an attack!"
		<< RESET << std::endl;
		return ;
	}
	m_energy--;
	std::cout << RED << "FragTrap " << m_name << " attacks " << target << ", causing "
	<< m_attack << " amount of damage!" << RESET << std::endl;
	return ;
}

void	FragTrap::highFiveGuys( void )
{
	std::cout << RED << "FragTrap " << m_name << " says High Five Guys!!"
	<< RESET << std::endl;
}
