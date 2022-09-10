/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:37 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/10 18:31:33 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
		unsigned int N;
		std::vector<int> _array;
	
	public:
		Span(void){}
		Span(unsigned int size);
		Span(const Span & src);
		Span & operator=(const Span & src);
		~Span(void);
		
		void addNumber(int to_save);
		void betterAddNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
		std::vector<int> & getArray(void){return _array;}
		class FullVectorException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return "The array is full";}
		};
		
		class EmptyVectorException: public std::exception
		{
			public:
				virtual const char* what() const throw()
					{return "The array is empty or only has one number stored";}
		};
};
#endif
