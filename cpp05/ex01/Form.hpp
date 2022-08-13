/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:39:06 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 09:09:02 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool _isSigned;
        short int const _signGrade;
        short int const _execGrade;
        Form(void);
        Form & operator=(Form &src);
    
    public:
        Form(std::string name, int signGrade, int execGrade );
        Form(Form &src);
        ~Form(void);
        void beSigned(Bureaucrat &bur);
        std::string const & getName() const;
        short int const & getSignGrade() const;
        short int const & getExecGrade() const;
        bool isSigned() const;
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Form Grade too low!!";
                }
        };
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Form Grade too high!!";
                }
        };
};

std::ostream& operator<<(std::ostream& ofd, const Form& src);
#endif