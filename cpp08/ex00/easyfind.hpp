/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:03:57 by jalvarad          #+#    #+#             */
/*   Updated: 2022/09/10 18:43:42 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <iostream>
#include <algorithm>

class NotFoundException: public std::exception
{
	public:
		virtual const char* what() const throw()
		{return "Int not found!!";}
};

template<typename T>
int easyfind(T const & array, int i)
{

	std::vector<const int>::iterator found = std::find(array.begin(), array.end(), i);
	int a = *found;
	if (found != array.end())
		return a;
	throw NotFoundException();
	return a;
}
#endif