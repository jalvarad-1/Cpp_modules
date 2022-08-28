/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:27:10 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/28 15:05:43 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
template<typename T>
void swap(T & a, T & b)
{
    T aux = a ;
    a = b;
    b = aux;
}

template<typename T>
T min(T const a, T const b)
{
    return a <= b? a: b;
}

template<typename T>
T max(T const a, T const b)
{
    return a >= b? a: b;
}
#endif