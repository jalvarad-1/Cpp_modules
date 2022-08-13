/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:39:06 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/13 15:35:19 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

#define DEFAULT_GRADE 150
#define SCF_SIGN_GRADE 145
#define SCF_EXEC_GRADE 137
#define RRF_SIGN_GRADE 72
#define RRF_EXEC_GRADE 45
#define PPF_SIGN_GRADE 25
#define PPF_EXEC_GRADE 5

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
        virtual ~Form(void);
        void beSigned(Bureaucrat &bur);
        std::string const & getName() const;
        short int const & getSignGrade() const;
        short int const & getExecGrade() const;
        bool isSigned() const;
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Form Grade too high!!\n";
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Form Grade too low!!\n";
                }
        };
        class NotSignedException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Not signed Form!!\n";
                }
        };
        virtual void execute(Bureaucrat const & executer) const = 0;
        void checkRequisites(Bureaucrat const & executer) const;
};

std::ostream& operator<<(std::ostream& ofd, const Form& src);
#endif