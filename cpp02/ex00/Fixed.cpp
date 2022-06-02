/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:37:11 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/12 13:34:26 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void)
{
    this->_n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& src)
{
    std::cout << "Copy costructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(src.getRawBits());
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}
