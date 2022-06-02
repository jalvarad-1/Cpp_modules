/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:20:34 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 10:53:11 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(0), _y(0)
{
}

Point::Point( const Point& src )
{
    *this = src;
}

Point::Point( const float x, const float y) : _x(x), _y(y)
{
}

Point& Point::operator=( const Point& src )
{
    const_cast<Fixed &>(this->_x) = src._x;
    const_cast<Fixed &>(this->_y) = src._y;
    return *this;
}

float Point::get_x( void )
{
    return this->_x.toFloat();
}

float Point::get_y( void )
{
    return this->_y.toFloat();
}

Point::~Point ( void )
{
}