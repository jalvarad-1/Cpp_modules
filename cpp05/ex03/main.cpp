/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/16 16:55:00 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void )
{
    try
    {
        Bureaucrat a("edu", 40);
        std::cout << a << std::endl;
        PresidentialPardomForm A("pepe");
        a.executeForm(A);
        a.signForm(A);
        a.executeForm(A);
        std::cout << "----------------------\n" << std::endl;
    }
    catch( std::exception & e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat a("edu", 40);
        std::cout << a << std::endl;
        Intern d;
        Form *aux;
        aux = d.makeForm("shrubberry creation", "pepe");
        a.executeForm(*aux);
        a.signForm(*aux);
        a.executeForm(*aux);
        delete (aux);
        std::cout << "----------------------\n" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }
    //system("leaks Intern");
    return 0;
}