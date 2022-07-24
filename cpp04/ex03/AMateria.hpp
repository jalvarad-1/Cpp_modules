/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:46:20 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/24 15:24:19 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria( void );
		AMateria( AMateria& src );
		AMateria(std::string const & type);
		AMateria& operator = ( AMateria& src )
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria( void );
};
#endif
/// Falta completar fucionalidades que necesitaré más a adelante  