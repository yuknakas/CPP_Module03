/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 16:28:57 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:17:19 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <string>
#include <iostream>
#include <limits.h>

// ************************************************************************** //
//                            DiamondTrap Class                               //
// ************************************************************************** //

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap
{
public:
	// constructor
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap &other );
	// destructor
	virtual ~DiamondTrap();

	// copy assignment operator
	DiamondTrap	&operator=( const DiamondTrap &other );

	// member function
	void	attack( const std::string &target);
	void	whoAmI( void );

private:
	std::string	m_name;
};
