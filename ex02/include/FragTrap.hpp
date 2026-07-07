/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:33:20 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/06 18:36:56 by yuknakas         ###   ########.fr       */
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

class FragTrap : public ClapTrap
{
public:
	// constructor
	FragTrap( std::string name );
	// copy constructor
	FragTrap( const FragTrap &other );
	// destructor
	~FragTrap();

	// Copy Operator
	FragTrap	&operator=( const FragTrap &other );
	
	// member functions
	void	attack( const std::string &target );
	void	highFiveGuys( void );
};