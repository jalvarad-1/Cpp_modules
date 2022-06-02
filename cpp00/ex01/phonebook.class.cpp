/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:08:37 by jalvarad          #+#    #+#             */
/*   Updated: 2022/03/21 18:08:51 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

phonebook::phonebook(void)
{
	this->_n_contacts = 0;
    return;
}

phonebook::~phonebook(void)
{
    return;
}
std::string input_strings(int i)
{
	if (i == 0)
		return "First name: \n";
	else if (i == 1)
		return "Last name: \n";
	else if (i == 2)
		return "Nick name: \n";
	else if (i == 3)
		return "Phone number: \n";
	else if (i == 4)
		return "Darkest secret: \n";
	return NULL;
}

void phonebook::add_contact(void)
{
	std::string buffer;
	short int i = -1;
	while (++i < 5)
	{
		std::cout<<input_strings(i);
    	getline(std::cin, buffer);
		while (i == 3 && buffer.find_first_not_of("+- 0123456789") != std::string::npos)
		{
			std::cout<<buffer<<": is not a correct phone number\n";
			std::cout<<input_strings(i);
			getline(std::cin,buffer);
		}
		this->_list[this->_n_contacts % 8].add_anyting(i, buffer);
	}
	if (!this->_list[this->_n_contacts % 8].is_empty())
	{
		this->_n_contacts++;
		std::cout<<this->_n_contacts<<"\n";
	}
}

void phonebook::print_formated_contact(contact x, short int id)
{
	short int i = -1;
	std::string aux;
	std::cout <<"|"<<std::right<<std::setw(10)<< id <<"|";
	while (++i < 3)
	{
		aux = x.return_anything(i);
		if (aux.length() > 10)
			std::cout <<aux.substr(0, 9)<<".|" ;
		else
			std::cout <<std::right << std::setw(10)<<aux<<"|";
	}
	std::cout << "\n---------------------------------------------" << std::endl;
}
short int		phonebook::is_a_index(std::string index)
{
	std::string idx[8] = {"0", "1", "2", "3", "4", "5", "6", "7"};
	short int i;
	short int max_idx;
	max_idx = _n_contacts;
	std::cout<<"Soy n_contact: "<<_n_contacts<<"\n";
	if (_n_contacts >= 8)
		max_idx = 8; 
	for (i = 0; i < max_idx; i++)
		if (idx[i] == index)
			return i;
	return -1;
}
void	phonebook::search(void)
{
	std::string index;
	short int i = -1;
	contact aux;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last  name| Nick name|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (++i < this->_n_contacts && i < 8)
		print_formated_contact(get_one_contact(i), i);
	while (std::cout << "Please enter an Index: \n" && getline(std::cin, index))
	{
		i = is_a_index(index);
		if (i != -1)
			break;
		std::cout<<index<<":  is not a correct index"<<std::endl;
	}
	if (i == -1)
		return ;
	aux = get_one_contact(i);
	std::cout << "First name  :  "<<aux.return_anything(0)<<std::endl;
	std::cout << "Last name   :  "<<aux.return_anything(1)<<std::endl;
	std::cout << "Nick name   :  "<<aux.return_anything(2)<<std::endl;
	std::cout << "Phone number:  "<<aux.return_anything(3)<<std::endl;
}

contact phonebook::get_one_contact(short int i)
{
	return _list[i];
}