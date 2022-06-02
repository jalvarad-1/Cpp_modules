/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:37:09 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/05 16:06:19 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
class Weapon{
    private:
        std::string _type;
    public:
        const std::string& getType(void);
        void setType(std::string type);
        Weapon(std::string type);
        ~Weapon(void);
        Weapon(void);
};
#endif