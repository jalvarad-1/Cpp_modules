/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:51:07 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/10 17:39:19 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
    std::cout << "pickle-special-ketchup burger. I just love it!." << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You";
    std::cout << " don’t put enough! If you did I would not have to ask for it!.\n";
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last ";
    std::cout << "month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain(std::string level)
{
	int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*function[4])(void) =
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
    while (i < 4 && levels[i] != level)
        i++;
    if (i < 4)
			(this->*function[i])();
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;        
}

Karen::Karen (void)
{
}

Karen::~Karen(void)
{
}