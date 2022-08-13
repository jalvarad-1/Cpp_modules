/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:58 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 09:10:13 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):_name("Non name"), _isSigned(0), _signGrade(1), _execGrade(1){}

Form::Form(std::string name, int signGrade, int execGrade ): _name(name), 
		_isSigned(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form &src):_name(src.getName()), _isSigned(src.isSigned()), 
		_signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	if(this == &src)
		return ;
	*this = src;
}

Form & Form::operator=(Form &src)
{
	return *this;
}

Form::~Form(void){}

void Form::beSigned(Bureaucrat &bur)
{
	if (this->getSignGrade() < bur.getGrade())
		throw GradeTooLowException();
	this->_isSigned = 1;
}

std::string const & Form::getName() const
{
	return this->_name;
}

short int const & Form::getSignGrade() const
{
	return this->_signGrade;
}

short int const & Form::getExecGrade() const
{
	return this->_execGrade;
}

bool Form::isSigned() const
{
	return this->_isSigned;
}

std::ostream& operator<<(std::ostream& ofd, const Form& src)
{
	std::string tmp = " is signed ";
	if (src.isSigned() == 0)
		tmp = " is not signed ";
	ofd << src.getName() + tmp << " | sign grade: " << 
		src.getSignGrade() << " | execution grade: " << src.getExecGrade();
    return ofd;
}
