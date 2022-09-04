/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:06:04 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/04 18:04:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
template<typename T>
class MutantStack: public std::stack<T>
{
	typedef std::stack<T>::container_type::iterator iterator;
	typedef std::stack<T>::container_type::const_iterator const_iterator;
	typedef std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	public:
		MutantStack(void): std::stack<T>(){}
		MutantStack(const MutantStack & src): std::stack<T>(src){return *this = this;};
		MutantStack & operator=(const MutantStack & src) 
		{
			this->std::stack<T>operator= src;
			return *this;
		}
		~MutantStack(void){};
		iterator begin(){return c.begin();}
		iterator end(){return c.end();}
}
#endif