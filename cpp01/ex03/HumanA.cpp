/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:26:54 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/08 13:14:31 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_bonk.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon&  machina): _name(name), _bonk(machina)
{
}

HumanA::~HumanA(void)
{
}
