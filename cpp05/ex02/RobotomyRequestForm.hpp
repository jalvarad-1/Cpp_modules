/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:58:32 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/12 18:08:09 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
        std::string const _target;
    
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string const & target);
        RobotomyRequestForm(RobotomyRequestForm const & Form);
        ~RobotomyRequestForm(void);
        void execute(Bureaucrat const & executer) const;
        void execAction(Bureaucrat const & executor);
};

#endif