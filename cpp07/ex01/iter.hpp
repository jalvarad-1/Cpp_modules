/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:07:50 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/28 15:40:23 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template<typename T>
void iter(T *array, size_t size, void (*function) (T const &))
{
    for (size_t i = 0; i < size; i++ )
        function(array[i]);
}
#endif