/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:44:35 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 16:45:47 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
void    Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
    std::cout << "pickle-special-ketchup burger. I just love it!." << std::endl;
    std::cout << std::endl;
}

void    Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You";
    std::cout << " don’t put enough! If you did I would not have to ask for it!.\n";
    std::cout << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last ";
    std::cout << "month." << std::endl;
    std::cout << std::endl;
}

void    Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now.\n";
    std::cout << std::endl ;
}

void	Karen::complain(std::string level)
{
	int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4 && levels[i] != level)
        i++;
    switch (i) {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }        
}
Karen::Karen (void)
{
}

Karen::~Karen(void)
{
}