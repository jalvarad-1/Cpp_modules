/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:06:04 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/05 16:19:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <deque>
#include <stack>
template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack(void): std::stack<T>(){}
		MutantStack(const MutantStack & src): std::stack<T>(src){return *this = this;}
		MutantStack & operator=(const MutantStack & src)
		{
			this->std::stack<T>::operator= (src);
			return *this;
		}
		~MutantStack(void){}
		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}
		reverse_iterator rbegin(){return this->c.rbegin();}
		reverse_iterator rend(){return this->c.rend();}
		const_iterator cbegin(){return this->c.cbegin();}
		const_iterator cend(){return this->c.crend();}
		const_reverse_iterator crbegin(){return this->c.crbegin();}
		const_reverse_iterator crend(){return this->c.crend();}
};
#endif