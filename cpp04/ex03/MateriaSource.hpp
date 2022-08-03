/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:16:28 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/03 18:20:26 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* _toCreate[4];

	public:
		MateriaSource(void);
		MateriaSource( MateriaSource& src);
		MateriaSource& operator = ( MateriaSource& src);
		~MateriaSource(void);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
#endif
