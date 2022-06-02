/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:50:07 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/05 14:42:55 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie stackZombie("stackZombie");
    Zombie *heapZombie = newZombie("heapZombie Paco");
    delete (heapZombie);
    randomChump("randomZombie");
    return 0;
}