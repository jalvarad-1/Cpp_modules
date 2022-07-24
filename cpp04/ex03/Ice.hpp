/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:25:01 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/24 15:42:38 by jalvarad         ###   ########.fr       */
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
		virtual void use(ICharacter& target);
		virtual ~Ice( void );
};
#endif
