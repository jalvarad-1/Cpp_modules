/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:39:53 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/27 10:32:35 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define USAGE "usage: ./convert <argument_to_convert>"

typedef struct s_Data
{
	int		num;
}			Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw); 
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << USAGE << std::endl;
		return 0;
	}
	size_t pEnd;
	std::string to_convert = argv[1];
	try
	{
		int _interger =std::stoi(to_convert, &pEnd);
		if (to_convert[pEnd] != 0)
		{
			std::cout<< "Impossible" << std::endl;
			return 0;
		}
		Data data = {_interger};
		uintptr_t serial = serialize(&data);
		std::cout << serial << std::endl;
		Data *deserial = deserialize(serial);
		std::cout << deserial->num << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Impossible" << std::endl;
	}
	return 0;
}
