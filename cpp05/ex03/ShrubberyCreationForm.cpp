/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:09:43 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/17 18:11:37 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form("No Name", DEFAULT_GRADE, DEFAULT_GRADE), _target("NON TARGET") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):
	 Form("shrubberry creation", SCF_SIGN_GRADE, SCF_EXEC_GRADE), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & form):
	 Form(form.getName(), form.getSignGrade(), form.getExecGrade()), _target(form.getTarget())
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
	if (this == &src)
		;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

std::string const & ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executer) const
{
	this->checkRequisites(executer);
	std::cout << executer.getName() << " executes " << this->getName() << std::endl;
	this->execAction();
}

void ShrubberyCreationForm::execAction(void) const
{
	std::fstream file;
	std::string aux_target(this->getTarget());
	aux_target += "_shrubbery";
	file.open(aux_target,std::fstream::out);
	if (!file.is_open())
		throw ErrorFile();
	file << "\n\n" <<
			"           \\/ |    |/\n" <<
			"        \\/ / \\||/  /_/___/_\n" <<
        	"         \\/   |/ \\/\n" <<
    		"    _\\__\\_\\   |  /_____/_\n" <<
        	"           \\  | /          /\n" <<
  			"  __ _-----`  |{,-----------~\n" <<
            "            \\ }{\n" <<
            "             }{{\n" <<
            "             }}{\n" <<
            "             {{}\n" <<
    		"       , -=-~{ .-^- _\n";
	file.close();
}