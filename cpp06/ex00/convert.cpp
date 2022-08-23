/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/23 16:42:38 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits.h>
#include <limits>
#include <float.h>

char last_char(std::string src)
{
	return src[src.size() - 1]; 
}

std::string Convert::remove_f(std::string src)
{
	if (src.size() == 1)
		return src;
	size_t last_c = src.size() - 1;
	std::string buffer = src;
	if (this->is_pseudoliteral(buffer))
		return buffer;
	if (last_char(src) == 'f' || last_char(src) == 'F')
		buffer = src.substr(0, last_c);
	return buffer ;
}

std::string trim(char * str)
{
	std::string str_trim = str;
	if (str_trim.size() == 1)
		return str_trim;
	size_t start = str_trim.find_first_not_of(WHITESPACE);
	size_t len = str_trim.find_last_not_of(WHITESPACE);

	return (start == std::string::npos) ? "" : str_trim.substr(start, len - start + 1);
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
		std::cout <<pEnd << std::endl;
		if (str[pEnd] != 0)
			return false;
		return true;
	}
	catch(...)
	{
		if(str[0] != 0 && str[0] != '.')
		{
			this->errors[0] = "Impossible";
			this->errors[1] = "Impossible";
		}
	}
	return false;
}

/*bool Convert::set_float(std::string str)
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
}*/
 
/// habrá que hacer primero la llamada al double por la perdida de precisión en floats 
bool Convert::set_double(std::string str)
{
	size_t pEnd;

	try
	{
		this->_dbl = std::stod(str, &pEnd);
		if (str[pEnd] != 0)
			return false;
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

	std::cout<< std::fixed << std::setprecision(1);
	this->_fl = static_cast<float>(to_convert);
	std::cout << "float: " << this->_fl <<"f" << std::endl;

	this->_dbl = static_cast<double>(to_convert);
	std::cout << "double: " << this->_dbl << std::endl;

}

/*void Convert::float_to_char(float to_convert)
{
	this->_chr = static_cast<char>(to_convert);
	if (to_convert > CHAR_MAX || to_convert < CHAR_MIN )
		std::cout << "char: " << "Impossible" << std::endl;
	else if (isprint(this->_chr))
		std::cout << "char: " << this->_chr << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

void Convert::float_to_int(float to_convert)
{
	this->_interger = static_cast<char>(to_convert);
	if (to_convert > INT_MAX || to_convert < INT_MIN )
		std::cout << "int: " << "Impossible" << std::endl;
	else
		std::cout << "int: " << this->_interger << std::endl;
}

void Convert::float_to_types(float to_convert)
{
	size_t precision = this->_precision;
	if (precision > 7)
		precision = 7;
	this->float_to_char(to_convert);
	this->float_to_int(to_convert);
	
	std::cout << std::fixed << std::setprecision(precision);
	std::cout << "float: " << to_convert << "f" << std::endl;

	this->_dbl = static_cast<double>(to_convert);
	std::cout << "double: " << this->_dbl << std::endl;
}*/
//################### *********** doubles types
void Convert::double_to_char(double to_convert)
{
	this->_chr = static_cast<char>(to_convert);
	if (to_convert > CHAR_MAX || to_convert < CHAR_MIN )
		std::cout << "char: " << "Impossible" << std::endl;
	else if (isprint(this->_chr))
		std::cout << "char: " << this->_chr << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

void Convert::double_to_int(double to_convert)
{
	this->_interger = static_cast<int>(to_convert);
	if (to_convert > INT_MAX || to_convert < INT_MIN )
		std::cout << "int: " << "Impossible" << std::endl;
	else
		std::cout << "int: " << this->_interger << std::endl;
}

void Convert::double_to_float(double to_convert)
{
	size_t precision = this->_precision;
	this->_fl = static_cast<float>(to_convert);
	if ((to_convert > FLT_MAX || to_convert < FLT_MIN) && !Convert::is_pseudoliteral(this->_to_convert))
	{
		std::cout << "float: " << "Impossible" << std::endl;
	}
	else
	{
		if (precision > 7)
			precision = 7;
		std::cout << std::fixed << std::setprecision(precision);
		std::cout << "float: " << this->_fl << "f" << std::endl;
	}
}

void Convert::double_to_types(double to_convert)
{
	size_t precision = this->_precision;
	if (precision > 15)
		precision = 15;
	this->double_to_char(to_convert);
	this->double_to_int(to_convert);
	this->double_to_float(to_convert);

	std::cout << std::fixed << std::setprecision(precision);
	std::cout << "double: " << this->_dbl << std::endl;;
}

Convert::Convert(char* str)
{
	this->_to_convert = remove_f(trim(str));
	this->setPrecision();
	std::cout << " entra esto-->  " << this->_to_convert << std::endl; 
	if(this->_to_convert.empty())
		std::cout << "imposible esta vacio" << std::endl;
	else if (this->set_char(this->_to_convert))
		this->char_to_types(this->_to_convert[0]);
	else if (this->set_int(this->_to_convert))
		this->int_to_types(this->_interger);
	else if (this->set_double(this->_to_convert))
		this->double_to_types(this->_dbl);
}

void Convert::setPrecision(void)
{
	size_t found = this->_to_convert.find('.');
	size_t end = this->_to_convert.find_first_of(SUFIX);
	if (end == std::string::npos)
		end = this->_to_convert.size() - 1;
	if ( found != std::string::npos && end > found)
	{
		this->_precision = end - found;
		return ;
	}
	this->_precision = 1;
}