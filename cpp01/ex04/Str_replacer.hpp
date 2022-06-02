/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Str_replacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:30:27 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 14:24:15 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_REPLACER_HPP
#define STR_REPLACER_HPP
#include <iostream>
#include <fstream>

class Str_replacer
{
	private:
		std::ifstream _ifs;
		std::string _s1;
		std::string _s2;
		std::string _buf;
		std::ofstream _ofs;
	public:
		std::string get_s1(void);
		std::string get_s2(void);
		bool files_opener(char *infile);
		std::string new_replace(void);
		Str_replacer(char *infile, char *s1, char *s2);
		~Str_replacer(void);
};
#endif
