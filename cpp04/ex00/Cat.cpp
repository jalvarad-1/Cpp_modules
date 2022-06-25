/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:41 by jalvarad          #+#    #+#             */
/*   Updated: 2022/06/25 18:01:30 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat ( void ):Animal("Cat")
{
    std::cout << "Cat class default constructor" << std::endl;
}

Cat::Cat ( Cat& src ):Animal("Cat")
{
    std::cout << "Cat class copy constructor" << std::endl;
    *this = src;
}

Cat& Cat::operator = ( Cat& src )
{
    this->type = src.type;
    return *this;
}

Cat::~Cat ( void )
{
    std::cout << "Cat class default destructor" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "Miau!!!!" << std::endl;
}
