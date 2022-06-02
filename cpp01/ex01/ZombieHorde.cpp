/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:17:58 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/05 14:55:55 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombieHorde;
    std::string aux;
    if (N <= 0)
        return(NULL);
    zombieHorde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        aux = name + std::to_string(i);
        zombieHorde[i].set_name(aux);
        zombieHorde[i].announce();
    }
    return(zombieHorde);
}