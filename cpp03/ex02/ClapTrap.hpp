/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:51:37 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 10:38:30 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
        std::string     _Name;
        unsigned int    _Hitpoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;
    
    public:
        ClapTrap( std::string const & name );
        ClapTrap( void );
        ClapTrap (const ClapTrap& src);
        ~ClapTrap( void );
        ClapTrap& operator=( const ClapTrap& src );
        void attack( std::string const & target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
        void printStatus( void);
        void setAllAttr(unsigned int hp, unsigned int ep, unsigned int ad);
};
#endif
