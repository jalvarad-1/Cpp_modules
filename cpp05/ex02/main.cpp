/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 15:44:55 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    try
    {
        Bureaucrat a("edu", 40);
        std::cout << a << std::endl;
        ShrubberyCreationForm A("hola");
        a.executeForm(A);
        a.signForm(A);
        a.executeForm(A);
    }
    catch( std::exception & e)
    {
        std::cout << e.what();
    }

    try
    {
         
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }
}