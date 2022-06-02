/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:06:28 by jalvarad          #+#    #+#             */
/*   Updated: 2022/03/21 18:05:57 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.class.hpp"

contact::contact(void)
{
    return;
}

contact::~contact(void)
{
    return;
}

std::string contact::return_anything(short int id)
{
    if (id == 0)
        return this->first_name;
    else if (id == 1)
        return this->last_name;
    else if (id == 2)
        return this->nick_name;
    else if (id == 3)
        return this->phone;
    return NULL;
}

void    contact::add_anyting(short int id, std::string value)
{
    if (id == 0)
        this->first_name = value;
    else if (id == 1)
        this->last_name = value;
    else if (id == 2)
        this->nick_name = value;
    else if (id == 3)
        this->phone = value;
    else if (id == 4)
        this->darkest_secret = value; 
}

bool    contact::is_empty(void)
{
    if(this->first_name.length() || this->nick_name.length()
        || this->last_name.length())
        return 0;
    return 1;
}