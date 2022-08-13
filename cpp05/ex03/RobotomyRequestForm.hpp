/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:58:32 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 15:24:14 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class RobotomyRequestForm: public Form
{
	private:
		std::string const _target;
		RobotomyRequestForm & operator=(RobotomyRequestForm &src);
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & form);
		~RobotomyRequestForm(void);
		std::string const & getTarget(void) const;
		void execute(Bureaucrat const & executer) const;
		void execAction(void) const;
};

#endif