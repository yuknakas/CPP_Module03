/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:04:22 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 16:43:42 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
:m_name(name),
m_hp(10),
m_energy(10),
m_attack(0)
{
	std::cout << GREEN << "Default Constructor Called for " << name << RESET << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "Destructor Called for " << this->m_name << RESET << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &other )
{
	this->m_name = other.getName();
	this->m_hp = other.getHP();
	this->m_energy = other.getEnergy();
}

std::string	ClapTrap::getName( void ) const
{
	return (m_name);
}

unsigned int	ClapTrap::getHP( void )
{
	return (m_hp);
}

unsigned int	ClapTrap::getEnergy( void )
{
	return (m_energy);
}

unsigned int	ClapTrap::getAttack( void )
{
	return (m_attack);
}

void	ClapTrap::attack( const std::string &target )
{
	if (m_hp < 1)
	{
		std::cout << GREEN << m_name << " is DEAD!"
		<< RESET << std::endl;
		return ;
	}
	if (m_energy < 1)
	{
		std::cout << GREEN << m_name << " does not have enough energy to perform an attack!"
		<< RESET << std::endl;
		return ;
	}
	m_energy--;
	std::cout << GREEN << "ClapTrap " << m_name << " attacks " << target << ", causing "
	<< m_attack << " amount of damage!" << RESET << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (m_hp < 1)
	{
		std::cout << GREEN << m_name << " is DEAD!"
		<< RESET << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << m_name << " took " << amount
	<< " amount of damage!" << RESET << std::endl;
	if (m_hp < amount)
	{
		m_hp = 0;
		std::cout << GREEN << "ClapTrap " << m_name << " DIED!" << RESET << std::endl;
		return ;
	}
	m_hp -= amount;
	std::cout << GREEN << "ClapTrap " << m_name << " has " << m_hp << " amount of HP left!"
	<< RESET << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (m_hp < 1)
	{
		std::cout << GREEN << m_name << " is DEAD!"
		<< RESET << std::endl;
		return ;
	}
	if (m_energy < 1)
	{
		std::cout << GREEN << m_name << " does not have enough energy to perform a repair!"
		<< RESET << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << m_name << " healed " << amount
	<< " amount of HP!" << RESET << std::endl;
	if (m_hp > UINT_MAX - amount)
		m_hp = UINT_MAX;
	else
		m_hp += amount;
	std::cout << GREEN << "ClapTrap " << m_name << " has " << m_hp << " amount of HP left!"
	<< RESET << std::endl;
	return ;
}
