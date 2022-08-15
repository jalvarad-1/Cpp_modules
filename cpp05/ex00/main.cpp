/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/15 17:23:02 by jalvarad         ###   ########.fr       */
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

    try
    {
        Bureaucrat b("edu", 1);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch( std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
