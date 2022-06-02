/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:51:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 10:53:50 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const & name ) : _Name(name), _Hitpoints(10),
        _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap String constructor called." << std::endl;
}

ClapTrap::ClapTrap( void ): _Name("[Empty_Name]"), _Hitpoints(10),
        _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor called." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& src)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap Destructor called." << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
{
    this->_Name = src._Name ;
    this->setAllAttr( src._Hitpoints, src._EnergyPoints, src._AttackDamage);
    return *this;
}

void ClapTrap::attack( std::string const & target)
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
    std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing ";
    std::cout << this->_AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if ( !(this->_Hitpoints))
    {
        std::cout << "ClapTrap "<< this->_Name << " is dead  :(" << std::endl;
        return ;
    }
    if ( this->_Hitpoints <= amount)
    {
        std::cout << "ClapTrap " << this->_Name << " takes " << amount;
        std::cout << " points of damage!" << std::endl;
        this->_Hitpoints = 0;
        std::cout << "ClapTrap " << this->_Name << " has died. :(";
    }
    else
    {
        std::cout << "ClapTrap " << this->_Name << " takes " << amount;
        std::cout << " points of damage!" << std::endl;
        this->_Hitpoints -= amount;
    }
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if ( !(this->_Hitpoints))
    {
        std::cout << "ClapTrap "<< this->_Name << " is dead  :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_Name << " be repaired with " << amount;
    std::cout << " Hitpoints!" << std::endl;
    this->_Hitpoints += amount;
}

void ClapTrap::printStatus( void )
{
    std::cout << "ClapTrap " << this->_Name <<std::endl;
    std::cout << "- Hitpoints: " << this->_Hitpoints << std::endl;
    std::cout << "- EnergyPoints: " << this->_EnergyPoints << std::endl;
    std::cout << "- AttacKDamage: " << this->_AttackDamage << std::endl;
    if ( !(this->_Hitpoints))
        std::cout << " IS DEAD X(" << std::endl;
}

void ClapTrap::setAllAttr(unsigned int hp, unsigned int ep, unsigned int ad)
{
    this->_Hitpoints = hp;
    this->_EnergyPoints = ep;
    this->_AttackDamage = ad;
}
