/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:24:52 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/24 18:45:47 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	short int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "soy a "<< std::endl;
		return new A;
	}
	else if (i == 1)
	{
		std::cout << "soy B "<< std::endl;
		return new B;
	}
	else if (i == 2)
		{
		std::cout << "soy C "<< std::endl;
		return new C;
	}
	return new A;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A aux = dynamic_cast<A&>(p);		
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception & e){}
	try
	{
		B aux = dynamic_cast<B&>(p);		
		std::cout << "B" << std::endl;
		return ;
	}
	catch(std::exception & e){}
	try
	{
		C aux = dynamic_cast<C&>(p);		
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	
}

int main (void)
{
	srand(time(NULL));
	Base * random = generate();
	identify(random);
	identify(*random);
	delete (random);
	return 0;
}