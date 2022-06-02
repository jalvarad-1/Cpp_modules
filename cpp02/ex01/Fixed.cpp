/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:19:41 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/17 15:38:20 by jalvarad         ###   ########.fr       */
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
    return this->_n;
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}

Fixed::Fixed(const int i )
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = i  << this->_fract_bit;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(f * (1 << this->_fract_bit));
}

float Fixed::toFloat(void) const
{
    return (float) this->_n / (float) (1 << this->_fract_bit);
}

int Fixed::toInt ( void ) const
{
    int convert = roundf(this->_n >> this->_fract_bit);
    return convert;
}

std::ostream& operator<<(std::ostream& ofd, const Fixed& my_fixed)
{
    ofd << my_fixed.toFloat();
    return ofd;
}
