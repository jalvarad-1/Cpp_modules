/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:49:11 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/09 12:57:28 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
WrongCat::WrongCat ( void ):WrongAnimal("WrongCat")
{
    std::cout << "WrongCat class default constructor" << std::endl;
}

WrongCat::WrongCat ( WrongCat& src ):WrongAnimal("WrongCat")
{
    std::cout << "WrongCat class copy constructor" << std::endl;
    *this = src;
}

WrongCat& WrongCat::operator = ( WrongCat& src )
{
    this->type = src.type;
    return *this;
}

WrongCat::~WrongCat ( void )
{
    std::cout << "WrongCat class default destructor" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Miau!!!!" << std::endl;
}
