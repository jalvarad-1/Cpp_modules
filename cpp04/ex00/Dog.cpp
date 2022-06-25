/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:48 by jalvarad          #+#    #+#             */
/*   Updated: 2022/06/25 18:18:54 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ):Animal("Dog")
{
    std::cout << "Dog class default constructor" << std::endl;
}

Dog::Dog ( Dog& src ):Animal("Dog")
{
    std::cout << "Dog class copy constructor" << std::endl;
    *this = src;
}

Dog& Dog::operator = ( Dog& src )
{
    this->type = src.type;
    return *this;
}

Dog::~Dog ( void )
{
    std::cout << "Dog class default destructor" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "Guaufff!!!!" << std::endl;
}
