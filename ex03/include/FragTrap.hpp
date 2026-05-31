/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:33:20 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 16:27:27 by yuknakas         ###   ########.fr       */
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
	FragTrap( std::string name );
	// destructor
	~FragTrap();
	
	// member functions
	void	attack( const std::string &target );
	void	highFiveGuys( void );
};