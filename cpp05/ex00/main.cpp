/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/11 16:15:26 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main( void )
{
    try
    {
        Bureaucrat a("rob", 1);
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
    }
    catch( std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}