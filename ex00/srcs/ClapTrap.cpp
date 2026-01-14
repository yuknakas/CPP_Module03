/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:04:22 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/14 16:54:14 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
:m_name(name),
m_hp(10),
m_energy(10),
m_attack(0)
{
	std::cout << "Default Constructor Called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called for " << this->m_name << std::endl;
}

std::string	ClapTrap::getName( void )
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
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing "
	<< m_attack << " amount of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (m_hp < 1)
	{
		std::cout << m_name << " is DEAD!"
		<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " took " << amount
	<< " amount of damage!" << std::endl;
	if (m_hp < amount)
	{
		m_hp = 0;
		std::cout << "ClapTrap " << m_name << " DIED!" << std::endl;
		return ;
	}
	m_hp -= amount;
	std::cout << "ClapTrap " << m_name << " has " << m_hp << " amount of HP left!"
	<< std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (m_hp < 1)
	{
		std::cout << m_name << " is DEAD!"
		<< std::endl;
		return ;
	}
	if (m_energy < 1)
	{
		std::cout << m_name << " does not have enough energy to perform a repair!"
		<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " healed " << amount
	<< " amount of HP!" << std::endl;
	if (m_hp > UINT_MAX - amount)
		m_hp = UINT_MAX;
	else
		m_hp += amount;
	std::cout << "ClapTrap " << m_name << " has " << m_hp << " amount of HP left!"
	<< std::endl;
	return ;
}

