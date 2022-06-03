/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:37 by jalvarad          #+#    #+#             */
/*   Updated: 2022/06/03 16:27:53 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
    protected:
        std::string _type;

    public:
        Animal ( void );
        Animal ( Animal& src );
        Animal& operator = ( Animal& src );
        ~Animal ( void );
        virtual void makeSound( void ) const;
};
#endif