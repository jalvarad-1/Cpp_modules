/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:01:34 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/01 17:20:37 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		~Character() {}
		Character( void );
		Character( Character& src);
		Character& operator = (Character& src);
		Character( std::string const & type);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif
