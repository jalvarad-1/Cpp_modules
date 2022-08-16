/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:00 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/16 18:15:52 by jalvarad         ###   ########.fr       */
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
    
    Convert Con;
    std::string str_conv = Con.trim(argv[1]);
    std::cout << "|" << str_conv << "|"<< std::endl;
    Con.to_char(str_conv);
    return 0;
}