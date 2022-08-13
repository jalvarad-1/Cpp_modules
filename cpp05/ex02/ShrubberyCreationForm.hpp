/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:03:28 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 15:34:17 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"
class ShrubberyCreationForm: public Form
{
	private:
		std::string const _target;
		ShrubberyCreationForm & operator=(ShrubberyCreationForm &src);
		ShrubberyCreationForm(void);

	public:
		
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & form);
		~ShrubberyCreationForm(void);
		std::string const & getTarget(void) const;
		void execute(Bureaucrat const & executer) const;
		void execAction(void) const;

		class ErrorFile: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "The file could not be opened or written.\n";
                }
        };
};

#endif