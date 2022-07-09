/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:49:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/09 13:06:36 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal ( void );
        WrongAnimal ( WrongAnimal& src );
        WrongAnimal (std::string str);
        WrongAnimal& operator = ( WrongAnimal& src );
        virtual ~WrongAnimal ( void );
        std::string getType( void ) const;
        void makeSound( void ) const;
};
#endif