/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:07:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/03 18:20:01 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
Character::~Character( void )
{
	std::cout << "Character class default destructor" << std::endl;
	for ( short int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
	}
}

Character::Character( void )
{
	std::cout << "Character class default consructor" << std::endl;
	for ( short int i = 0; i < 4 ; i++)
		this->_inventory[i] = NULL;
	
}

Character::Character( Character& src)
{
	std::cout << "Character class copy  constructor" << std::endl;
	*this = src;
}

Character& Character::operator = (Character& src)
{
	this->_name = src.getName();
	for ( short int i = 0; i < 4; i++)
	{
		if ( this->_inventory[i] != NULL )
		{
			delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
		}
	}
	for ( short int i = 0; i < 4; i++)
	{
		if ( src._inventory[i] )
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return *this;
}

Character::Character( std::string const & type): _name(type)
{
	std::cout << "Character class string constructor" << std::endl;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (short int i = 0; i < 4; i++)
	{
		if ( this->_inventory[i] == NULL )
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ( idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
