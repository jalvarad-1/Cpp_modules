/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:48:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/01 16:50:55 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ):AMateria("Cure")
{
	std::cout << "Cure class default constructor" << std::endl;
}

Cure::Cure( Cure& src )
{
	std::cout << "Cure class copy constructor." << std::endl;
	*this = src;
}

Cure& Cure::operator = ( Cure& src )
{
	this->_type = src._type;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Cure class default destructor" << std::endl;
}