/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:37 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/09 13:11:40 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal ( void );
        Animal ( Animal& src );
        Animal (std::string str);
        Animal& operator = ( Animal& src );
        virtual ~Animal ( void );
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
};
#endif
