/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:00 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/24 16:23:17 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#define USAGE "usage: ./convert <argument_to_convert>"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << USAGE << std::endl;
        return 0;
    }

    Convert Con(argv[1]);
    return 0;
}
