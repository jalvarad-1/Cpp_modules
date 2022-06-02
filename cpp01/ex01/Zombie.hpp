/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:15:44 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/05 14:17:19 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include<iostream>

class Zombie{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        std::string get_name(void);
        void set_name(std::string name);
        void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif