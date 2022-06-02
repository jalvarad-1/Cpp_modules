/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:03:03 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/23 15:35:50 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool IsOnLine(Point endPoint1, Point endPoint2, Point checkPoint) 
{
    return (checkPoint.get_y() - endPoint1.get_y()) / (endPoint2.get_y() - endPoint1.get_y())
        == (checkPoint.get_x() - endPoint1.get_x()) / (endPoint2.get_x() - endPoint1.get_x());
}

float area( Point V_A, Point V_B, Point V_C)
{
    float a = (V_A.get_x()*(V_B.get_y() - V_C.get_y()) + 
            V_B.get_x()*(V_C.get_y() - V_A.get_y()) + 
            V_C.get_x()*(V_A.get_y() - V_B.get_y())) / 2.0;
    if ( a < 0.0)
        a *= -1;
    return a;
}

bool are_the_same_point(Point a, Point b, Point c, Point point)
{
    if( a.get_x() == b.get_x() && b.get_x() == c.get_x() && 
        c.get_x() != point.get_x() && a.get_y() == b.get_y() && 
        b.get_y() == c.get_y() && c.get_y() != point.get_y())
        return true ;
    if( (a.get_x() == point.get_x() && a.get_y() == point.get_y()) || 
        (b.get_x() == point.get_x() && b.get_y() == point.get_y()) ||
        (c.get_x() == point.get_x() && c.get_y() == point.get_y()))
        return true;
    if ( IsOnLine(a, b, point) || IsOnLine(a, c, point) || IsOnLine(b, c, point))
        return true;
    return false ;
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
    if (are_the_same_point(a, b, c, point))
        return false ;
    float A = area( a, b, c);
    float A1 = area( point, b, c);
    float A2 = area( a, point, c);
    float A3 = area( a, b, point);

    return ( A == A1 + A2 + A3 );
}