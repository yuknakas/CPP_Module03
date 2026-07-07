/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 03:09:22 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/06 18:07:07 by yuknakas         ###   ########.fr       */
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

class ScavTrap : virtual public ClapTrap
{
public:
	// constructor
	ScavTrap( std::string name );
	// copy constructor
	ScavTrap( const ScavTrap &other );
	// destructor
	~ScavTrap();
	
	// operator = override
	ScavTrap &operator=( const ScavTrap &other );
	
	// member functions
	void	attack( const std::string &target );
	void	guardGate( void );
};
