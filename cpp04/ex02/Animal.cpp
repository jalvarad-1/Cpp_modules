/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:23 by jalvarad          #+#    #+#             */
/*   Updated: 2022/06/25 18:00:35 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal ( void ): type("Non type")
{
    std::cout << "Animal class default constructor." << std::endl;
}

Animal::Animal (std::string str): type(str)
{
    std::cout << "Animal class string constructor." << std::endl;
}

Animal::Animal ( Animal& src )
{
    std::cout << "Animal class copy constructor." << std::endl;
    *this = src;
}

Animal& Animal::operator = ( Animal& src )
{
    this->type = src.type;
    return *this;
}

Animal::~Animal ( void )
{
    std::cout << "Animal class destructor." << std::endl;
}

void Animal::makeSound( void ) const
{
    std::cout << "Non sound" << std::endl;
}

std::string Animal::getType( void ) const
{
    return this->type;
}