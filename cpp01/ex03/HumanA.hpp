/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:09:15 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/08 13:25:13 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA{
    private:
        std::string _name;
        Weapon&         _bonk;
    public:
        void attack(void);
        HumanA(std::string name, Weapon& machina);
        ~HumanA(void);
};
#endif