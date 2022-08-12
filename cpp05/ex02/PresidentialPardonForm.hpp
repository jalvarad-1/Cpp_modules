/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:00:38 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/12 18:08:15 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDOMFORM_HPP
#define PRESIDENTIALPARDOMFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string const _target;
    
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(PresidentialPardonForm const & Form);
        ~PresidentialPardonForm(void);
        void execute(Bureaucrat const & executer) const;
        void execAction(Bureaucrat const & executor);
};

#endif