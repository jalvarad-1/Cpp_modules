/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:39:12 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/03 18:11:15 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource class Default Constructor" << std::endl;
	for ( short int i = 0; i < 4; i++)
		this->_toCreate[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource& src)
{
	std::cout << "MateriaSource class copy constructor" << std::endl;
	*this = src;
}

MateriaSource& MateriaSource::operator = ( MateriaSource& src)
{
	for ( short int i = 0; i < 4; i++)
	{
		if ( this->_toCreate[i] != NULL )
		{
			delete(this->_toCreate[i]);
			this->_toCreate[i] = NULL;
		}
	}
	for ( short int i = 0; i < 4; i++)
	{
		if ( src._toCreate[i])
			this->_toCreate[i] = src._toCreate[i]->clone();
		else
			this->_toCreate[i] = NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource class default destructor" << std::endl;
	for ( short int i = 0; i < 0; i++ )
	{
		if (this->_toCreate[i] != NULL)
			delete(this->_toCreate[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (short int i = 0; i < 4; i++)
	{
		if (this->_toCreate[i] != NULL)
		{
			this->_toCreate[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (short int i = 0; i < 4; i++)
	{
		if (this->_toCreate[i])
		{
			if (type == this->_toCreate[i]->getType())
				return this->_toCreate[i]->clone();
		}
	}
	return NULL;
}