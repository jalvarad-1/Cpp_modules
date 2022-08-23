/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:04 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/22 16:49:48 by jalvarad         ###   ########.fr       */
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
		std::string errors[4];
		std::string _to_convert;
		char		_chr;
		int			_interger;
		float		_fl;
		double		_dbl;
		short int 	_precision;

	public:
		Convert(void){}
		Convert(char* str);
//		Convert & operator=(Convert &src);
		char to_char(std::string & str);
		
//		int to_int(std::string & str);
//		float to_float(std::string & str);
//		double to_double(std::string & str);
/// ******* utils **** ///
		bool is_pseudoliteral(std::string str);
		std::string remove_f(std::string src);
/////
		bool set_char(std::string str);
		bool set_double(std::string str);
		bool set_float(std::string str);
		bool set_int(std::string str);
/////
		void char_to_types(char to_convert);
		void int_to_types(int to_convert);
		void float_to_types(float to_convert);
///utils for float
		void float_to_char(float to_convert);
		void float_to_int(float to_convert);
		void float_to_double(float to_convert);

		void double_to_types(double to_convert);
//// utils for double
		void double_to_char(double to_convert);
		void double_to_int(double to_convert);
		void double_to_float(double to_convert);
		void setPrecision(void);
};
std::string trim(char * str);

char last_char(std::string src);
#endif