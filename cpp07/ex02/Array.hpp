/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:06:29 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/29 17:58:25 by jalvarad         ###   ########.fr       */
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
		Array(void): _array(NULL), _n(0){}
		Array(unsigned int n): _array(n < 1? NULL: new T[n]() ), _n( n < 1 ? 0:n){}
		Array(Array const & src){*this = src;}
		Array & operator=(Array const & src)
		{
			if (this == &src)
				return *this;
			if(_array)
				delete _array;		
			_array = src._n < 1 ? new T[src._n]: NULL;
			for(unsigned int i = 0; i < src._n; i++)
				_array[i] = src._array[i];
			_n = src._n;
			return *this;
		}
		class OutRange: public std::exception
		{
            public:
                virtual const char* what() const throw()
                {return ("you are trying to access an element out of range");}
        };
		T & operator[](unsigned int i)
		{
			if (i >= _n)
				throw OutRange();
			return _array[i];
		}
		unsigned int size(void)const{return _n;}
		~Array(void){if (_array) delete this->_array;}
};
#endif