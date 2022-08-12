/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:05:51 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/12 17:58:16 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        short int _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat & src);
        Bureaucrat(std::string const & name, int grade);
        Bureaucrat & operator=(Bureaucrat & src);
        ~Bureaucrat(void);
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too high!!");
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too Low!!");
                }
        };
        std::string const & getName() const;
        short int const & getGrade() const;
        void incrementGrade( void );
        void decrementGrade( void );
        void evalGrade(void);
        void signForm(Form & src);
        void executeForm(Form const & form);//// falta hacer este método
};

std::ostream& operator<<(std::ostream& ofd, const Bureaucrat& src);
#endif
