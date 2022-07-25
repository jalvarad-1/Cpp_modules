/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:25:01 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/25 13:01:12 by jalvarad         ###   ########.fr       */
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
		Ice(std::string const & type);
		Ice& operator = ( Ice& src );
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice( void );
};
#endif
