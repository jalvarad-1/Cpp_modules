/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:24:52 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/28 14:25:37 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	short int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
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