/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:01:11 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 16:44:20 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <limits.h>

// ************************************************************************** //
//                             ClapTrap Class                                 //
// ************************************************************************** //

class ClapTrap
{
public:
	// constructor
	ClapTrap( std::string name );
	// copy constructor
	ClapTrap( const ClapTrap &other );
	// destructor
	~ClapTrap();

	// copy assignment
	ClapTrap	&operator=( const ClapTrap &other );

	// getter
	std::string		getName( void );
	unsigned int	getHP( void );
	unsigned int	getEnergy( void );
	unsigned int	getAttack( void );

	// memeber functions
	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

private:
	std::string		m_name;
	unsigned int	m_hp;
	unsigned int	m_energy;
	unsigned int	m_attack;
};

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
