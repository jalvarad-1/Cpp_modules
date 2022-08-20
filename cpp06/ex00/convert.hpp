/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:04 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/20 17:13:50 by jalvarad         ###   ########.fr       */
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

class Convert
{
	private:
		std::string errors[4];
		std::string _to_convert;
		char	_chr;
		int		_interger;
		float	_fl;
		double	_dbl;

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
/////
		bool set_char(std::string str);
		bool set_double(std::string str);
		bool set_float(std::string str);
		bool set_int(std::string str);
/////
		void char_to_types(char to_convert);
		void int_to_types(int to_convert);
		void float_to_types(float to_convert);
		void doube_to_types(double to_convert);

};
std::string trim(char * str);
#endif