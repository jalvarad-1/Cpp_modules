/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:12:41 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/05 15:02:51 by jalvarad         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump( std::string name);
#endif