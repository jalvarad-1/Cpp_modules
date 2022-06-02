/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:11:55 by jalvarad          #+#    #+#             */
/*   Updated: 2022/03/21 18:00:23 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include<iostream>
#include <iomanip>
class contact{
    public:
        contact(void);
        ~contact(void);
        std::string return_anything(short int id);
        void add_anyting(short int id, std::string value);
		bool is_empty(void);
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone;
        std::string darkest_secret;
};

#endif