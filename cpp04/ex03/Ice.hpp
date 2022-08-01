/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:25:01 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/01 16:32:20 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		Ice( Ice& src );
		Ice& operator = ( Ice& src );
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice( void );
};
#endif
