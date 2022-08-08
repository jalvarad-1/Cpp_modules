/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:58 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/08 18:28:54 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):_name("Non name"), _isSigned(0), _signGrade(1), _execGrade(1){}

Form::Form(std::string name, int signGrade, int execGrade ): _name(name), 
        _isSigned(0), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(Form &src):_name(src.getName()), _isSigned(src.isSigned()), 
        _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
    ;
}
        Form & operator=(Form &src);
        ~Form(void);
        void beSigned(Bureaucrat &bur);
        std::string const & getName() const;
        short int const & getSignGrade() const;
        short int const & getExecGrade() const;
        bool isSigned() const;