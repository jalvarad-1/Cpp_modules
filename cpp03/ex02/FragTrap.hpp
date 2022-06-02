/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:53:16 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 16:34:47 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap( std::string const & name );
        FragTrap( void );
        FragTrap ( FragTrap& src);
        ~FragTrap( void );
        FragTrap& operator=(FragTrap& src );

        void attack( std::string const & target );
        
        void highFiveGuys( void );
};
#endif