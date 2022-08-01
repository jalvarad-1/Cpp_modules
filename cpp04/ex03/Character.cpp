/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:07:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/01 17:34:59 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
Character::~Character()
{
	std::cout << "Character class default destructor" << std::endl;
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
	this->_name = src._name;
	for ( short int = 0; i < 4; i++)
	{
		if (src._inventory[i]->_type == "ice")
			this->_inventory[i] = new Ice(src._inventory[i][0]);
		else if (src._inventory[i]->_type == "cure")
			this->_inventory[i] = new Cure(src._inventory[i][0]);
	}
}
Character::Character( std::string const & type)
{
	
}
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);