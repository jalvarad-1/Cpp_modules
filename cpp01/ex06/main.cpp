/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:33:55 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 16:47:50 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << " Incorrect number of arguments." << std::endl;
        return 0;
    }

    Karen level;
    level.complain(argv[1]);
    return 0;
}