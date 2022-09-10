/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:29 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/10 19:10:31 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
int main()
{
	Span sp = Span(4);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout <<e.what()<< std::endl;
	}

	Span spa(6);
	spa.addNumber(4);
	spa.addNumber(2);
	spa.betterAddNumber(sp.getArray().begin(), sp.getArray().end());
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
}