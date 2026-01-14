/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:01:11 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/14 16:22:41 by yuknakas         ###   ########.fr       */
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
	// destructor
	~ClapTrap();

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
