/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:54 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/07 19:24:13 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("Non name"), _grade(150){}

Bureaucrat::Bureaucrat(std::string const & name, int grade):_name(name), _grade(grade)
{
    if( grade < 1)
        throw( GradeTooHighException());
    else if ( grade > 150)
        throw( GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat & src):_name(src.getName())
{
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & src)
{
    this->_grade = src.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat( void ){}

std::string const & Bureaucrat::getName() const
{
    return this->_name;
}

short int const & Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade( void )
{
    if( (this->getGrade() - 1) < 1)
        throw( GradeTooHighException());
    this->_grade--;
}

void Bureaucrat::decrementGrade( void )
{
    if ((this->getGrade() + 1) > 1)
        throw( GradeTooLowException());
    this->_grade++;
}

std::ostream& operator<<(std::ostream& ofd, const Bureaucrat& src)
{
    ofd << src.getName() + ", bureaucrat grade " << src.getGrade();
    return ofd;
}