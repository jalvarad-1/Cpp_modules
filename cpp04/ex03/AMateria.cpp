/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:17:46 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/25 13:08:21 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ):_type("None type set")
{
	std::cout << "AMateria class default constructor" << std::endl;
}

AMateria::AMateria( AMateria& src )
{
	std::cout << "AMateria class copy constructor." << std::endl;
	*this = src;
}

AMateria::AMateria( std::string const & type ):_type(type)
{
	std::cout << "AMateria class string constructor" << std::endl;
}

AMateria& AMateria::operator = ( AMateria& src )
{
	this->_type = src._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* this method goes to " << target.getName() << "*"<< std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria class default destructor" << std::endl;
}