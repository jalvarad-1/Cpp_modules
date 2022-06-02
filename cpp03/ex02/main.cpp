/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:16:07 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/24 15:04:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("Jose");
    FragTrap b("Edu");

    a.attack("edu");
    b.takeDamage(20);
    a.printStatus();
    b.printStatus();
    b.beRepaired(3);
    a.printStatus();
    b.printStatus();
    a.highFiveGuys();
    b.highFiveGuys();
    a = b;
    a.printStatus();
    return 0;
}