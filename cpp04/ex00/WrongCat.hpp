/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:49:15 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/09 12:54:45 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat ( void );
        WrongCat ( WrongCat& src );
        WrongCat& operator = ( WrongCat& src );
        ~WrongCat ( void );
        void makeSound( void ) const;
};
#endif