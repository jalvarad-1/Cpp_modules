/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:06:41 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:38:52 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    protected:
        static const unsigned int _Init_HP = 100;
        static const unsigned int _Init_EP = 50;
        static const unsigned int _Init_AD = 20;
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
