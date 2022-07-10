/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:52 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/10 15:04:32 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain* _mind;
    public:
        Dog ( void );
        Dog ( Dog& src );
        Dog& operator = ( Dog& src );
        ~Dog ( void );
        void makeSound( void ) const;
};
#endif