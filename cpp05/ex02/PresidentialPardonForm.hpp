/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:00:38 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 15:30:00 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDOMFORM_HPP
#define PRESIDENTIALPARDOMFORM_HPP

#include "Form.hpp"

class PresidentialPardomForm: public Form
{
	private:
		std::string const _target;
		PresidentialPardomForm & operator=(PresidentialPardomForm &src);
		PresidentialPardomForm(void);

	public:
		PresidentialPardomForm(std::string const & target);
		PresidentialPardomForm(PresidentialPardomForm const & form);
		~PresidentialPardomForm(void);
		std::string const & getTarget(void) const;
		void execute(Bureaucrat const & executer) const;
		void execAction(void) const;
};

#endif