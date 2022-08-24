/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:35:21 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/24 17:46:56 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
    public:
        virtual ~Base(void){};
};

class A: public Base {};

class B: public Base{};

class C: public Base{};
#endif