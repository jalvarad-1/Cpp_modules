/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:16:28 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/25 09:44:50 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource
{
	private:
		AMateria* _toCreate[4];

	public:
		~MateriaSource() {}
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
#endif
