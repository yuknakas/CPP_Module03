/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 03:09:22 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 16:27:32 by yuknakas         ###   ########.fr       */
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
	// destructor
	~ScavTrap();
	
	// member functions
	void	attack( const std::string &target );
	void	guardGate( void );
};
