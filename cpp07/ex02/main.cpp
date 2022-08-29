/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:06:33 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/29 17:57:06 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
    try{
        Array <int>test1;
        std::cout << test1.size() << std::endl;
        std::cout << test1[0] << std::endl;
    }
    catch(std::exception & e){std::cout << e.what() << std::endl; }

    try{
        Array <int>test2(4);
        std::cout << test2[3] << std::endl;
        std::cout << test2[0] << std::endl;
        for( unsigned int i = 0; i < 4; i++)
            test2[i] = i * i;
        std::cout << "------------------------ " << std::endl;
        for( unsigned int i = 0; i < 4; i++)
            std::cout << test2[i] << std::endl;
    }
    catch(std::exception & e){std::cout << e.what() << std::endl; }
    //system("leaks array");
}