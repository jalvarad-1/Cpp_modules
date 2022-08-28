/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:06:29 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/28 17:18:17 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
	private:
		T* _array;
		unsigned int _n;
	public:
		Array(void): _array(new T()), _n(0){}
		Array(unsigned int n): _array(new T[n]), _n(n){}
		Array(Array const & src){*this = src;}
		Array & operator=(Array const & src)
		{
			
		}
		unsigned int size(void)const{return this->_n};
		~Array(void){delete this->_array;}

};
#endif