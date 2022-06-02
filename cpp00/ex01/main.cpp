/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:44:14 by jalvarad          #+#    #+#             */
/*   Updated: 2022/03/21 17:27:55 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>
#include "phonebook.class.hpp"

int main()
{
	std::string input_line;//line that receive comands;
	phonebook	myphonebook;

    while(getline(std::cin, input_line))
    {
		
		if(std::cin.fail())///// an error control because I don't wanna have a strange exit for EOF
			return 1;
		if (!input_line.compare("EXIT"))
			return 0;
		if (!input_line.compare("ADD"))
			myphonebook.add_contact();
		if (!input_line.compare("SEARCH"))
			myphonebook.search();
    }
    return 0;
}