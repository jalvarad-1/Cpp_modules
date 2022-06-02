/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:58:36 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:37:40 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _Name;
    public:
        DiamondTrap( std::string const & name );
        DiamondTrap( void );
        DiamondTrap ( DiamondTrap& src);
        ~DiamondTrap( void );
        DiamondTrap& operator=(DiamondTrap& src );
        
        void whoAmI( void );

        void attack( std::string const & target );
        
        std::string getDiamondName( void );
};
#endif
