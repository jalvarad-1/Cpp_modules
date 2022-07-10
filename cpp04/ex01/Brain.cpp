/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:23:07 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/10 18:00:21 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain ( void )
{
    std::cout << "Brain class default constructor." << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "Idea " + std::to_string(i+1);
}

Brain::Brain ( Brain& src )
{
    std::cout << "Brain class copy constructor." << std::endl;
    *this = src;
}

Brain& Brain::operator = ( Brain& src )
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
    return *this;
}

Brain::~Brain ( void )
{
    std::cout << "Brain class destructor." << std::endl;
}