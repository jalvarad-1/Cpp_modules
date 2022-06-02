/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:18:12 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/23 14:47:45 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void)
{
    this->_n = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed (const Fixed& src)
{
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
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
    this->_n = i  << this->_fract_bit;
}

Fixed::Fixed(const float f)
{
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
bool Fixed::operator >( const Fixed& src ) const
{
    return this->getRawBits() > src.getRawBits();
}

bool Fixed::operator <( const Fixed& src ) const
{
    return this->getRawBits() < src.getRawBits(); 
}

bool Fixed::operator >=( const Fixed& src ) const
{
    return !(this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator <=( const Fixed& src ) const
{
    return this->getRawBits() <= src.getRawBits();
}

bool Fixed::operator ==( const Fixed& src ) const
{
    return this->getRawBits() == src.getRawBits();
}

bool Fixed::operator !=( const Fixed& src) const
{
    return this->getRawBits() != src.getRawBits();
}

Fixed Fixed::operator +( const Fixed& src ) const
{
    return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator -( const Fixed& src ) const
{
    return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator *( const Fixed& src ) const
{
    return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator /( const Fixed& src ) const
{
    return Fixed( this->toFloat() / src.toFloat());
}

Fixed& Fixed::operator ++(void)
{
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator ++(int)
{
    Fixed aux(*this);
    ++(*this);
    return aux;
}

Fixed& Fixed::operator --(void)
{
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator --(int)
{
    Fixed aux(*this);
    --(*this);
    return aux;
}

Fixed& Fixed::min( Fixed& one, Fixed& two )
{
    if(one < two)
        return one;
    else if (two < one)
        return two;
    return one;
}

Fixed const& Fixed::min( Fixed const& one, Fixed const& two)
{
    if(one.toFloat() < two.toFloat())
        return one;
    else if (two.toFloat() < one.toFloat())
        return two;
    return one;
}

Fixed& Fixed::max( Fixed& one, Fixed& two )
{
    if(one > two)
        return one;
    else if ( two > one)
        return two;
    return two;
}

Fixed const& Fixed::max( Fixed const& one, Fixed const& two)
{
    if(one.toFloat() > two.toFloat())
        return one;
    else if (two.toFloat() > one.toFloat())
        return two;
    return one;
}

std::ostream& operator<<(std::ostream& ofd, const Fixed& my_fixed)
{
    ofd << my_fixed.toFloat();
    return ofd;
}
