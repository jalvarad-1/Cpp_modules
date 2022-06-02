/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:47:12 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 13:04:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
    Zombie* zombies = zombieHorde(10, "Huesitos");
    delete [] zombies;
    return 0;
}