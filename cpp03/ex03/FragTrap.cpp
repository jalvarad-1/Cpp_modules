/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:53:03 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:37:53 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( std::string const & name ) : ClapTrap(name)
{
    std::cout << "FragTrap String constructor called." << std::endl;
    this->setAllAttr(100, 100, 30);
}

FragTrap::FragTrap ( void ) : ClapTrap()
{
    std::cout << "FragTrap Default constructor called." << std::endl;
    this->setAllAttr(100, 100, 30);
}

FragTrap::FragTrap ( FragTrap & src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap ( void )
{
    std::cout << "FragTrap Destructor called." << std::endl;
}

FragTrap& FragTrap::operator=( FragTrap& src )
{
    this->_Name = src._Name;
    this->setAllAttr(src._Hitpoints, src._EnergyPoints, src._AttackDamage);
    return *this;
}

void    FragTrap::highFiveGuys( void )
{
    std::cout << this->_Name << " say: Give me Five Bro!!!!!" << std::endl;
}

void FragTrap::attack( std::string const & target)
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
    std::cout << "FragTrap " << this->_Name << " attack " << target << ", causing ";
    std::cout << this->_AttackDamage << " points of damage!" << std::endl;
}
