/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:08:38 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 15:29:32 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardomForm::PresidentialPardomForm(void):
	Form("No Name", DEFAULT_GRADE, DEFAULT_GRADE), _target("NON TARGET") {}

PresidentialPardomForm::PresidentialPardomForm(std::string const & target):
	Form("PresidentialPardomForm", RRF_SIGN_GRADE, RRF_EXEC_GRADE), _target(target)
{
}

PresidentialPardomForm::PresidentialPardomForm(PresidentialPardomForm const & form):
	Form(form.getName(), form.getSignGrade(), form.getExecGrade()), _target(form.getTarget())
{
}

PresidentialPardomForm & PresidentialPardomForm::operator=(PresidentialPardomForm &src)
{
	if (this == &src)
		;
	return *this;
}

PresidentialPardomForm::~PresidentialPardomForm(void){}

std::string const & PresidentialPardomForm::getTarget(void) const
{
	return this->_target;
}

void PresidentialPardomForm::execute(Bureaucrat const & executer) const
{
	this->checkRequisites(executer);
	this->execAction();
}

void PresidentialPardomForm::execAction(void) const
{
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
