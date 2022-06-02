/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:30:50 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 13:21:34 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Str_replacer.hpp"
int main(int argc, char **argv)//, char **argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR: incorrect arguments" << std::endl;
		return 1;
	}
	if (argv[2])
	Str_replacer change(argv[1], argv[2], argv[3]);

	return 0;
}