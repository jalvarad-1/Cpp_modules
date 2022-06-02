/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:16:07 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/26 15:42:27 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Jose");
    ScavTrap b("rob");
    ScavTrap c(a);

    c.printStatus();
    a.attack("rob");
    b.takeDamage(20);
    a.printStatus();
    b.printStatus();
    b.beRepaired(3);
    a.printStatus();
    b.printStatus();
    a.guardGate();
    b.guardGate();
    a = b;
    a.printStatus();
    return 0;
}