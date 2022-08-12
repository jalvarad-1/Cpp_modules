/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:09:43 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/12 18:23:43 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):_target("")
{
    ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):_target(target)
{
    ;
}
        ShrubberyCreationForm(ShrubberyCreationForm const & Form);
        ~ShrubberyCreationForm(void);
        void execute(Bureaucrat const & executer) const;
        void execAction(Bureaucrat const & executor);