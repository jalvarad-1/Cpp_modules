/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:45 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/07 11:54:07 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
    private:
        Brain* _mind;
    
    public:
        Cat ( void );
        Cat ( Cat& src );
        Cat& operator = ( Cat& src );
        ~Cat ( void );
        void makeSound( void ) const;
};
#endif