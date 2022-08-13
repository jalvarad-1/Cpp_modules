/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:53:20 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 18:09:41 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{   
	public:
		Intern(void);
		Intern(Intern & src);
		~Intern(void);
		Form* makeForm(std::string const & form_name, std::string const & target);
		Intern & operator=(Intern &src);
		short int indexForm(std::string form_name);
		Form* createForm(std::string const & form_name, std::string const & target);
		class NotFoundFormException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "This form was not found\n";
				}
		};
};
#endif