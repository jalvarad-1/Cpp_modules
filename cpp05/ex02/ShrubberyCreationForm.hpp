/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:03:28 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/12 18:10:49 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    private:
        std::string const _target;

    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string const & target);
        ShrubberyCreationForm(ShrubberyCreationForm const & Form);
        ~ShrubberyCreationForm(void);
        void execute(Bureaucrat const & executer) const;
        void execAction(Bureaucrat const & executor);
};

#endif