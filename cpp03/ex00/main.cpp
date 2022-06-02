/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:52:44 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/26 15:17:48 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
    ClapTrap jose("jose");
    ClapTrap rob("rob");
    jose.attack("rob");
    rob.takeDamage(3);
    jose.printStatus();
    rob.printStatus();
    rob.beRepaired(3);
    jose.printStatus();
    rob.printStatus();
    return 0;
}