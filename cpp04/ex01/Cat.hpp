/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:45 by jalvarad          #+#    #+#             */
/*   Updated: 2022/06/25 18:01:56 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat ( void );
        Cat ( Cat& src );
        Cat& operator = ( Cat& src );
        ~Cat ( void );
        void makeSound( void ) const;
};
#endif