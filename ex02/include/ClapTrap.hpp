/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:01:11 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:15:25 by yuknakas         ###   ########.fr       */
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
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap &other );
	// destructor
	virtual ~ClapTrap();

	// copy assignment
	ClapTrap	&operator=( const ClapTrap &other );

	// getter
	std::string		getName( void ) const;
	unsigned int	getHP( void ) const;
	unsigned int	getEnergy( void ) const;
	unsigned int	getAttack( void ) const;

	// memeber functions
	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

protected:
	std::string		m_name;
	unsigned int	m_hp;
	unsigned int	m_energy;
	unsigned int	m_attack;
};

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
