/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:16:07 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/30 12:29:49 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Jose");
    DiamondTrap b("Edu");

    a.printStatus();
    b.printStatus();
    a.attack("edu");
    b.takeDamage(30);
    a.printStatus();
    b.printStatus();
    b.beRepaired(3);
    a.printStatus();
    b.printStatus();
    a.highFiveGuys();
    b.highFiveGuys();
    a.whoAmI();
    b.whoAmI();
    a = b;
    a.printStatus();
    return 0;
}
