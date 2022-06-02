/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:20:22 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 13:13:29 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon*      _bonk;
    public:
        void attack(void);
        void setWeapon(Weapon& armament);
        HumanB(std::string name);
        ~HumanB(void);
        HumanB(void);
};
#endif