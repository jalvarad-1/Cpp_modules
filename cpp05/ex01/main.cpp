/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/15 17:35:37 by jalvarad         ###   ########.fr       */
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

        Bureaucrat c("apavel", 41);
        Form d("test form 2", 40, 40);
        std::cout << c << std::endl;
        c.signForm(d);

        Form e("test form 3", 0, 0);
    }
    catch( std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}