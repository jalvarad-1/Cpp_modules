/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:06:41 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:14:02 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap( std::string const & name );
        ScavTrap( void );
        ScavTrap ( ScavTrap& src);
        ~ScavTrap( void );
        ScavTrap& operator=(ScavTrap& src );

        void attack( std::string const & target);
        
        void guardGate( void );
};
#endif
