/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:40:06 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 14:50:01 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->m_hp = 100;
	this->m_energy = 100;
	this->m_attack = 30;
	std::cout << "Default FragTrap Constructor Called for " << name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called for " << this->m_name << std::endl;
}

void	FragTrap::attack( const std::string &target )
{
	if (m_hp < 1)
	{
		std::cout << m_name << " is DEAD!"
		<< std::endl;
		return ;
	}
	if (m_energy < 1)
	{
		std::cout << m_name << " does not have enough energy to perform an attack!"
		<< std::endl;
		return ;
	}
	m_energy--;
	std::cout << "FragTrap " << m_name << " attacks " << target << ", causing "
	<< m_attack << " amount of damage!" << std::endl;
	return ;
}

void	FragTrap::highFiveGuys( void )
{
	std::cout << YELLOW << "FragTrap " << m_name << " says High Five Guys!!"
	<< RESET << std::endl;
}
