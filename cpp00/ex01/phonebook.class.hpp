/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:11:51 by jalvarad          #+#    #+#             */
/*   Updated: 2022/03/21 17:59:44 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include"contact.class.hpp"

class phonebook{
    public:
        phonebook(void);
        ~phonebook(void);
        void add_contact(void);////añade contactos /// 1 hay contacto --- 0 no hay contacto
        void search(void);///busca e imprime
        short int is_a_index(std::string index);
        contact get_one_contact(short int i);
        void print_formated_contact(contact x, short int id);
    private:
        contact _list[8];
        short int _n_contacts;
};

#endif