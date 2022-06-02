/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:06:13 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:38:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string const & name ) : ClapTrap(name)
{
    std::cout << "ScavTrap String constructor called." << std::endl;
    this->setAllAttr(100, 50, 20);
}

ScavTrap::ScavTrap ( void ) : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called." << std::endl;
    this->setAllAttr(100, 50, 20);
}

ScavTrap::ScavTrap ( ScavTrap & src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap ( void )
{
    std::cout << "SCavTrap Destructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=( ScavTrap& src )
{
    this->_Name = src._Name;
    this->setAllAttr(src._Hitpoints, src._EnergyPoints, src._AttackDamage);
    return *this;
}

void ScavTrap::guardGate( void )
{
    std::cout << this->_Name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack( std::string const & target)
{
    if ( !(this->_EnergyPoints))
    {
        std::cout << this->_Name << " doesn't have enough energy" << std::endl;
        return ;
    }
    if ( !(this->_Hitpoints))
    {
        std::cout << this->_Name << " is died  :(" << std::endl;
        return ;
    }
    this->_EnergyPoints--;
    std::cout << "ScavTrap " << this->_Name << " attack " << target << ", causing ";
    std::cout << this->_AttackDamage << " points of damage!" << std::endl;
}
