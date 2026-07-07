/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:33:20 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:14:56 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <limits.h>

// ************************************************************************** //
//                             FragTrap Class                                 //
// ************************************************************************** //

class FragTrap : virtual public ClapTrap
{
public:
	// constructor
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &other );
	// destructor
	virtual ~FragTrap();

	// Copy Operator
	FragTrap	&operator=( const FragTrap &other );
	
	// member functions
	void	attack( const std::string &target );
	void	highFiveGuys( void );
};
