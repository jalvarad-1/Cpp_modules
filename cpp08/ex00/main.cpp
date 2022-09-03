/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:03:53 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/03 12:31:40 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try{
		int array[]  = {1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8};
		std::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));
		int i = easyfind(v,11);
		std::cout << i << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try{
		int array[]  = {1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8};
		std::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));
		int i = easyfind(v,8);
		std::cout << i << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}