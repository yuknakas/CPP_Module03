/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 16:39:37 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/06 19:10:47 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name )
: ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name )
{
	this->m_name = name;
	this->m_hp = 100;
	this->m_energy = 50;
	this->m_attack = 30;
	std::cout << "Default DiamondTrap Constructor Called for " << name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other )
: ClapTrap( other ), ScavTrap( other ), FragTrap( other )
{
	*this = other;
	std::cout << "DiamondTrap copy operator called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called for " << this->m_name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &other )
{
	if (this != &other)
	{
		ClapTrap::operator=( other );
		this->m_name = other.getName();
	}
	std::cout << "DiamondTrap Copy Assignment Operator Called" << std::endl;
}

void	DiamondTrap::attack( const std::string &name )
{
	ScavTrap::attack( name );
}

void	DiamondTrap::whoAmI( void )
{
	if (m_hp < 1)
	{
		std::cout << m_name << " is DEAD!" << std::endl;
		return ;
	}
	std::cout << "I am " << m_name << "! Also known as <" << ClapTrap::m_name << ">" << std::endl;
}
