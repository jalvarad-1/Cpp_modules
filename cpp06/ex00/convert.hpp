/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:04 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/27 09:46:40 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>
#include <typeinfo>
#define WHITESPACE " \n\r\t\f\v"
#define SUFIX "Ff"

class Convert
{
	private:
		std::string _to_convert;
		size_t		_size_to_convert;
		char		_chr;
		int			_interger;
		float		_fl;
		double		_dbl;
		short int 	_precision;

	public:
		Convert(void){}
		Convert(char* str);
		bool is_pseudoliteral(std::string str);
		std::string remove_f(std::string src);
		bool set_char(std::string str);
		bool set_int(std::string str);
		bool set_double(std::string str);
		void char_to_types(char to_convert);
		void int_to_types(int to_convert);
		void double_to_types(double to_convert);
		void double_to_char(double to_convert);
		void double_to_int(double to_convert);
		void double_to_float(double to_convert);
		void setPrecision(void);
};

std::string trim(char * str);
char last_char(std::string src);
#endif
