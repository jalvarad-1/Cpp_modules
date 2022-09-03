/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:37 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/03 18:35:02 by jalvarad         ###   ########.fr       */
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
		Span(void){}
	
	public:
		Span(unsigned int size);
		Span(Span & src);
		Span & operator=(Span & src);
		~Span(void);
		void addNumber(int to_save);
		void betterAddNumber(std::vector<int> to_add);
		int shortestSpan(void);
		int longestSpan(void);
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
					{return "The array is emptyor only has one number stored";}
		};
};
#endif