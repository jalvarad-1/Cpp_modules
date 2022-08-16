/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:54 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/16 16:21:18 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("Non name"), _grade(150){}

Bureaucrat::Bureaucrat(std::string const & name, int grade):_name(name), _grade(grade)
{
    this->evalGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat & src):_name(src.getName())
{
    if (this == &src)
        return ;
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & src)
{
    if (this == &src)
        return *this;
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
    if ((this->getGrade() + 1) > 150)
        throw( GradeTooLowException());
    this->_grade++;
}
void Bureaucrat::evalGrade( void )
{
    if( this->getGrade() < 1)
        throw( GradeTooHighException());
    else if ( this->getGrade() > 150)
        throw( GradeTooLowException());;
}

void Bureaucrat::signForm(Form & form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl; 
    }
    catch(Form::GradeTooLowException & e)
    {
        std::cerr << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
    }
    catch(Form::NotSignedException &e)
    {
        std::cerr <<  e.what();
    }
    catch(Form::GradeTooHighException & e)
    {
        std::string error= this->getName() + " cannot execute " + form.getName() + " because " + e.what();
        std::cerr << error << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what();
    }
}

std::ostream& operator<<(std::ostream& ofd, const Bureaucrat& src)
{
    ofd << src.getName() + ", bureaucrat grade " << src.getGrade();
    return ofd;
}
