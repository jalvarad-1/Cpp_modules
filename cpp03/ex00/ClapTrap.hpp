/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:24:10 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/26 14:46:38 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

#define DAMAGE 3

class ClapTrap
{
    private:
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
        void setName(std::string const & name);
        std::string getName( void ) const;
        unsigned int getHitpoints(void);
        unsigned int getEnergyPoints( void );
        unsigned int getAttackDamage( void );
        void setHitpoints( unsigned int hp );
        void setEnergyPoints( unsigned int ep );
        void setAttackDamage( unsigned int ad );
        void setAllAttr(unsigned int hp, unsigned int ep, unsigned int ad);
};
#endif
