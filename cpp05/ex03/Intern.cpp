/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:35:48 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 18:57:43 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(Intern & src)
{
	if (this == &src)
		return;
	*this = src;
}

Intern::~Intern(void){}

Form* Intern::makeForm(std::string const & form_name, std::string const & target)
{
	try
	{
		return this->createForm(form_name, target); 
	}
	catch (Intern::NotFoundFormException & e)
	{
		std::cout << e.what();
	}
	return NULL;
}

Intern & Intern::operator=(Intern &src)
{
	if (this  == &src)
		;
	return *this;
}

short int Intern::indexForm(std::string form_name)
{
	std::string forms[3] = { "shrubberry creation", "robotomy request", 
			"presidential pardom"};
	short int i = 0;
	while (i < 3)
	{
		if (forms[i] == form_name)
			return i;
		i++;
	}
	return i;
}

Form* Intern::createForm(std::string const & form_name, std::string const & target)
{
	switch (this->indexForm(form_name))
	{
		case 0:
			std::cout << "Intern creates " << form_name << std::endl;
			return new ShrubberyCreationForm(target);
		case 1:
			std::cout << "Intern creates " << form_name << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << form_name << std::endl;
			return new PresidentialPardomForm(target);
		case 3:
			throw NotFoundFormException();
	}
	return NULL;
}