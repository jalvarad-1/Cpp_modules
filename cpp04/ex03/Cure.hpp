/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:52:06 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/25 09:17:22 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		Cure( Cure& src );
		Cure(std::string const & type);
		Cure& operator = ( Cure& src );
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure( void );
};
#endif
