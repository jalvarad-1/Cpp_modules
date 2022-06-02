/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:19:02 by jalvarad          #+#    #+#             */
/*   Updated: 2022/06/02 11:26:38 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( std::string const & name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap String constructor called." << std::endl;
    this->setAllAttr(FragTrap::_Init_HP, ScavTrap::_Init_EP, FragTrap::_Init_AD);
    this->_Name = name;
}

DiamondTrap::DiamondTrap ( void ) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default constructor called." << std::endl;
    this->setAllAttr(FragTrap::_Init_HP, ScavTrap::_Init_EP, FragTrap::_Init_AD);
}

DiamondTrap::DiamondTrap ( DiamondTrap & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "DiamondTrap copy constructor called." << std::endl;
    this->_Name = src.getDiamondName();
}

DiamondTrap::~DiamondTrap ( void )
{
    std::cout << "DiamondTrap Destructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap& src )
{
    this->_Name = src._Name;
    this->setAllAttr( src._Hitpoints, src._EnergyPoints, src._AttackDamage);
    this->ScavTrap::_Name = src.ScavTrap::_Name;
    return *this;
}

void DiamondTrap::whoAmI( void )
{
    std::cout << "DiamondTrap_Name: "<< this->_Name << std::endl;
    std::cout << "ClapTrap_Name: " << this->FragTrap::_Name << std::endl;
}

void DiamondTrap::attack( std::string const & target )
{
    ScavTrap::attack(target);
}

std::string DiamondTrap::getDiamondName( void )
{
    return this->_Name;
}
