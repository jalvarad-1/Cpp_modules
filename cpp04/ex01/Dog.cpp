/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:48 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/07 12:01:39 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ):Animal("Dog")
{
    std::cout << "Dog class default constructor" << std::endl;
    this->_mind = new Brain();
}

Dog::Dog ( Dog& src ):Animal("Dog")
{
    std::cout << "Dog class copy constructor" << std::endl;
    this->_mind = NULL;
    *this = src;
}

Dog& Dog::operator = ( Dog& src )
{
    this->type = src.type;
    if (this->_mind)
        delete (this->_mind);
    this->_mind = new Brain(src._mind[0]);
    return *this;
}

Dog::~Dog ( void )
{
    std::cout << "Dog class default destructor" << std::endl;
    delete (this->_mind);
}

void Dog::makeSound( void ) const
{
    std::cout << "Guaufff!!!!" << std::endl;
}
