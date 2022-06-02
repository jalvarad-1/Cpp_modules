/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:17:42 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 13:08:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->set_name(name);
    this->announce();
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
    std::cout << this->get_name() << " Death again!" << std::endl;
}

std::string Zombie::get_name(void)
{
    return this->_name;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;   
}

void Zombie::announce(void)
{
    std::cout << this->get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
