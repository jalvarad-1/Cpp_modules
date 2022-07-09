/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:49:03 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/09 13:13:59 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal ( void ): type("Non type")
{
    std::cout << "WrongAnimal class default constructor." << std::endl;
}

WrongAnimal::WrongAnimal (std::string str): type(str)
{
    std::cout << "WrongAnimal class string constructor." << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal& src )
{
    std::cout << "WrongAnimal class copy constructor." << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator = ( WrongAnimal& src )
{
    this->type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal ( void )
{
    std::cout << "WrongAnimal class destructor." << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Non sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return this->type;
}