/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:34 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/03 18:36:34 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size):  N(size)
{
	_array.reserve(N);
}
Span::Span(Span & src){*this = src;}

Span & Span::operator=(Span & src)
{
	if (this == &src)
		return *this;
	N = src.N;
	_array.clear();
	_array.reserve(N);
	for (size_t i = 0; i < src._array.size(); i++)
		_array.push_back(src._array[i]);
	return *this;
}

Span::~Span(void){}

void Span::addNumber(int to_save)
{
	if (_array.size() < N)
		_array.push_back(to_save);
	else
		throw FullVectorException();
}

/*void Span::betterAddNumber(std::vector<int> to_add)
{

	
}*/
 
int Span::shortestSpan(void)
{
	int shortSpan = INT_MAX;
	int aux;
	std::vector<int>::iterator it;
	std::vector<int>::iterator next_it;
	if(_array.size() < 2)
		throw EmptyVectorException();
	for(it = _array.begin(); it != _array.end(); it++)
	{
		for(next_it = it + 1; next_it != _array.end(); next_it++)
		{
			aux =std::abs(*it - *next_it);
			shortSpan = aux < shortSpan ? aux: shortSpan;
		}
	}
	return shortSpan;
}

/*int Span::longestSpan(void)
{
	
}*/