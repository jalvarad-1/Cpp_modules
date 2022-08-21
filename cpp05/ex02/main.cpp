/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/21 09:18:31 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    srand(time(NULL));
    try
    {
        std::cout << "\n\n-------------------\n\n" << std::endl;
        Bureaucrat a("edu", 40);
        std::cout << a << std::endl;
        ShrubberyCreationForm A("hola");
        std::cout << A << std::endl;
        a.executeForm(A);
        a.signForm(A);
        a.executeForm(A);
        std::cout << "\n\n-------------------\n\n" << std::endl;
    }
    catch( std::exception & e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat b("Leo", 40);
        std::cout << b << std::endl;
        RobotomyRequestForm B("hola");
        std::cout << B << std::endl;
        b.executeForm(B);
        b.signForm(B);
        b.executeForm(B);
        b.executeForm(B);
        std::cout << "\n\n-------------------\n\n" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat c("Pepa", 140);
        std::cout << c << std::endl;
        PresidentialPardomForm C("kakaroto");
        std::cout << C << std::endl;
        c.executeForm(C);
        c.signForm(C);
        c.executeForm(C);
        std::cout << "\n\n-------------------\n\n" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }
}