/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/20 18:24:54 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits.h>
#include <float.h>
//hacer método que determine si entra dentro de nan y esas cosas
//método que cuente los puntos, signos y negativos
//método trim string  : ya está, parece que funcinona
std::string trim(char * str)
{
	std::string str_trim = str;
	if (str_trim.size() == 1)
		return str_trim;
	size_t start = str_trim.find_first_not_of(WHITESPACE);
	size_t len = str_trim.find_last_not_of(WHITESPACE) - start;

	return (start == std::string::npos) ? "" : str_trim.substr(start, len + 1);
}

bool Convert::is_pseudoliteral(std::string str)
{
	std::string pseuliters [3]= { "nan", "inf", "-inf"};
	for (int i = 0; i < 3; i++)
	{
		if(pseuliters[i] == str)
			return true;
	}
	return false;
}

bool Convert::set_char(std::string str)
{
	if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
	{
		this->_chr = str[0];
		return true;
	}
	return false;
}

bool Convert::set_int(std::string str)
{
	size_t pEnd;
	try
	{
		this->_interger = std::stoi(str, &pEnd);
		/// comprobar formato
		return true;
	}
	catch(...)
	{
		this->errors[0] = "Impossible";
		this->errors[1] = "Impossible";
	}
	return false;
}

bool Convert::set_float(std::string str)
{
	size_t pEnd;
	try
	{
		this->_fl = std::stof(str, &pEnd);
		/// comprobar formato
		return true;
	}
	catch(...)
	{
		this->errors[2] = "Impossible";
	}
	return false;
}
 
/// habrá que hacer primero la llamada al double por la perdida de precisión en floats 
bool Convert::set_double(std::string str)
{
	size_t pEnd;

	try
	{
		this->_dbl = std::stod(str, &pEnd);
		/// comprobar formato
		return true;
	}
	catch(...)
	{
		this->errors[3] = "Impossible";
	}
	return false;
}
/////////////###############  

void Convert::char_to_types(char a)
{
	std::cout << "char: \'" <<  a << "\'" << std::endl;

	this->_interger = static_cast<int>(a);
	std::cout << "int: " << this->_interger <<std::endl;

	std::cout<< std::fixed << std::setprecision(1);
	this->_fl = static_cast<float>(a);
	std::cout << "float: " << this->_fl <<"f" << std::endl;

	this->_dbl = static_cast<double>(a);
	std::cout << "double: " << this->_dbl << std::endl;
}

void Convert::int_to_types(int to_convert)
{
	this->_chr = static_cast<char>(to_convert);
	if (to_convert > CHAR_MAX || to_convert < CHAR_MIN)
		std::cout << "char: " << "Impossible" << std::endl;
	else if (isprint(this->_chr))
		std::cout << "char: " << this->_chr << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	
	std::cout << "int: " << this->_interger << std::endl;
}

/*void Convert::float_to_types(float to_convert)
{
	;
}

void doube_to_types(double to_convert)
{
	;
}*/

Convert::Convert(char* str)
{
	this->_to_convert = trim(str);
	if (this->set_char(this->_to_convert))
		this->char_to_types(this->_to_convert[0]);
	else if (this->set_int(this->_to_convert))
		this->int_to_types(this->_interger);
}