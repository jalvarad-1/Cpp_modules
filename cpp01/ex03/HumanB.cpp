/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:58:55 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 16:17:10 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    if (!this->_bonk)
        std::cout << "no weapon" << std::endl;
    else    
        std::cout << this->_name << " attacks with his " << this->_bonk->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& armament)
{
    this->_bonk = &armament;
}

HumanB::HumanB(std::string name): _name(name)
{
}

HumanB::~HumanB(void)
{
}
