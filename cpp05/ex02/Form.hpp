/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:39:06 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/12 17:34:55 by jalvarad         ###   ########.fr       */
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
    public:
        Form(void);
        Form(std::string name, int signGrade, int execGrade );
        Form(Form &src);
        Form & operator=(Form &src);
        virtual ~Form(void);
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
        virtual void execute(Bureaucrat const & executer) const = 0;
        void checkRequisites(Bureaucrat const & executor) const; //// falta por hacer este metodo
        virtual void execAction(Bureaucrat const & executor) = 0;
};

std::ostream& operator<<(std::ostream& ofd, const Form& src);
#endif