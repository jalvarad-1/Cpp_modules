/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:53:16 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:37:59 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    protected:
        static const unsigned int _Init_HP = 100;
        static const unsigned int _Init_EP = 100;
        static const unsigned int _Init_AD = 30;
    public:
        FragTrap( std::string const & name );
        FragTrap( void );
        FragTrap (FragTrap& src);
        ~FragTrap( void );
        FragTrap& operator=(FragTrap& src );
        
        void attack( std::string const & target );
        
        void highFiveGuys( void );
};
#endif
