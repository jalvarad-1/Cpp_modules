/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/11 18:14:54 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main( void )
{
    try
    {
        Bureaucrat a("rob", 40);
        Form b("test form", 40, 40);
        std::cout << a << std::endl;
        a.signForm(b);
    }
    catch( std::exception & e)
    {
        std::cout <<"entrooooooo";
        std::cerr << e.what() << std::endl;
    }
}