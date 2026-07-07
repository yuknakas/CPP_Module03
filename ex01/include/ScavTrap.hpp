/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 03:09:22 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:15:57 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./ClapTrap.hpp"
#include <string>
#include <iostream>
#include <limits.h>

// ************************************************************************** //
//                             ScavTrap Class                                 //
// ************************************************************************** //

class ScavTrap : public ClapTrap
{
public:
	// constructor
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &other );
	// destructor
	virtual ~ScavTrap();
	
	// operator = override
	ScavTrap &operator=( const ScavTrap &other );
	
	// member functions
	void	attack( const std::string &target );
	void	guardGate( void );
};
