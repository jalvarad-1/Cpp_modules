/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:24:45 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/01 16:47:53 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ):AMateria("ice")
{
	std::cout << "Ice class default constructor" << std::endl;
}

Ice::Ice( Ice& src )
{
	std::cout << "Ice class copy constructor." << std::endl;
	*this = src;
}

Ice& Ice::operator = ( Ice& src )
{
	this->_type = src._type;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Ice class default destructor" << std::endl;
}
