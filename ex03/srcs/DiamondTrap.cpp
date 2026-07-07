/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 16:39:37 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:18:47 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
: ClapTrap( "nobody_clap_name" ), ScavTrap(), FragTrap()
{
	this->m_name = "nobody";
	this->m_hp = 100;
	this->m_energy = 50;
	this->m_attack = 30;
	std::cout << "Default DiamondTrap Constructor Called (nobody)" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
: ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name )
{
	this->m_name = name;
	this->m_hp = 100;
	this->m_energy = 50;
	this->m_attack = 30;
	std::cout << "DiamondTrap Constructor Called for " << name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other )
: ClapTrap( other ), ScavTrap( other ), FragTrap( other )
{
	std::cout << "DiamondTrap copy operator called for" << other.getName() << std::endl;
	*this = other;
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
	return (*this);
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
