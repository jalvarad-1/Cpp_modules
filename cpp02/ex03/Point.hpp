/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:15:03 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 11:34:21 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point(void);
        ~Point(void);
        Point(const Point& src);
        Point(const float x, const float y);
        Point& operator=(const Point& src);
        float get_x( void );
        float get_y( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point );
#endif