/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:52:50 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/26 15:41:48 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const & name ) : _Name(name), _Hitpoints(10),
        _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "String constructor called." << std::endl;
}

ClapTrap::ClapTrap( void ): _Name("[Empty_Name]"), _Hitpoints(10),
        _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& src)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called." << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
{
    this->setName( src.getName() );
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
    std::cout << DAMAGE + this->_AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if ( !(this->_Hitpoints))
    {
        std::cout << "ClapTrap "<< this->_Name << " is dead  :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_Name << " takes " << amount;
    std::cout << " points of damage!" << std::endl;
    if ( this->_Hitpoints <= amount)
    {
        this->_Hitpoints = 0;
        std::cout << "ClapTrap " << this->_Name << " has died. :(";
    }
    else
        this->_Hitpoints -= amount;
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

void ClapTrap::setName( std::string const & name)
{
    this->_Name = name;
}

std::string ClapTrap::getName( void ) const
{
    return this->_Name;
}

unsigned int ClapTrap::getHitpoints(void)
{
    return this->_Hitpoints;
}

unsigned int ClapTrap::getEnergyPoints( void )
{
    return this->_EnergyPoints;
}

unsigned int ClapTrap::getAttackDamage( void )
{
    return this->_AttackDamage;
}

void ClapTrap::setHitpoints( unsigned int hp )
{
    this->_Hitpoints = hp;
}

void ClapTrap::setEnergyPoints( unsigned int ep )
{
    this->_EnergyPoints = ep;
}

void ClapTrap::setAttackDamage( unsigned int ad )
{
    this->_AttackDamage = ad;
}

void ClapTrap::setAllAttr(unsigned int hp, unsigned int ep, unsigned int ad)
{
    this->setHitpoints(hp);
    this->setEnergyPoints(ep);
    this->setAttackDamage(ad);
}
