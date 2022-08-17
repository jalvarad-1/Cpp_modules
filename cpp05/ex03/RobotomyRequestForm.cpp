/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:27:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/17 18:11:31 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): 
	Form("No Name", DEFAULT_GRADE, DEFAULT_GRADE), _target("NON TARGET") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target):
	 Form("robotomy request", RRF_SIGN_GRADE, RRF_EXEC_GRADE), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & form):
	Form(form.getName(), form.getSignGrade(), form.getExecGrade()), _target(form.getTarget())
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &src)
{
	if (this == &src)
		;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}

std::string const & RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executer) const
{
	this->checkRequisites(executer);
	std::cout << executer.getName() << " executes " << this->getName() << std::endl;
	this->execAction();
}

void RobotomyRequestForm::execAction(void) const
{
	if (rand() % 2)
		std::cout << "ZZZZZBRRRRRR!!!! " << this->getTarget() << 
				" has been robotomized succesfully." << std::endl;
	else
		std::cout << "The Robotomized proccess has failed" << std::endl;
}
