/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:17:46 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/07 12:46:51 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ):_type("None type set")
{
}

AMateria::AMateria( AMateria& src )
{
	*this = src;
}

AMateria::AMateria( std::string const & type ):_type(type)
{
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
}
