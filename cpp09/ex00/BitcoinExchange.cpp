/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:46:54 by jalvarad          #+#    #+#             */
/*   Updated: 2023/07/25 20:13:53 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidDate(short year, short month, short day)
{
    if (year < 1900 || year > 3000)
		return false;
    if (month < 1 || month > 12)
		return false;
    if (day < 1 || day > 31)
		return false;
    if (month == 4 || month == 6 || month == 9 || month == 11) 
        if (day > 30) 
			return false;
    if (month == 2)
    {
        bool bisiesto = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (bisiesto)
            if (day > 29)
				return false;
        else if (day > 28)
            return false;
    }
    return true;
}

double BitcoinExchange::parseValue(std::string val)
{
	size_t idx = 0;
	double value;
    try 
	{
        value = std::stod(val, &idx);
    }
	catch (const std::invalid_argument& e)
	{
        throw BadInput();
    }
	catch (const std::out_of_range& e)
	{
        throw TooLargeANumber();
    }
	if (idx != val.size())
		throw BadInput();
	else if (value < 0)
		throw NotAPositiveNumber();
	else if (value > INT_MAX)
		throw TooLargeANumber();
	return value;
}

std::tm BitcoinExchange::string_to_tm(const std::string &input)
{
    std::tm date = {0};
    std::istringstream ss(input);
    ss >> std::get_time(&date, "%Y-%m-%d");
	if (!isValidDate(date.tm_year, date.tm_mon, date.tm_mday))
		throw BadInput();
    return date;
}

s_registry BitcoinExchange::parseRegistry(const std::string &line)
{
	s_registry reg;
    std::string date_str;
    std::string value_str;
	std::string extra;
	std::istringstream ss(line);

	if (std::getline(ss, date_str, ',') && \
		std::getline(ss, value_str, ',') && \
		!std::getline(ss,extra))
	{
        reg.date = string_to_tm(date_str);
		reg.value = parseValue(value_str);
	}
	else
		throw BadInput();
	return reg;
}

BitcoinExchange::BitcoinExchange(std::ifstream & btc_price_f, std::ifstream &amounts_f)
{
	std::string line;
	double value;
	s_registry registry_buf;

	//lectura primera línea, que son los indices
	std::getline(btc_price_f, line);
	// Aquí cargamos la db
	while (std::getline(btc_price_f, line))
	{
		registry_buf = parseRegistry(line);
        _btc_price_db[registry_buf.date] = registry_buf.value;
    }
	//TODO: comprobar que la db tiene datos
	line.clear();
	//Aquí se procesará línea a línea
	//lectura primera línea, que son los indices
	std::getline(btc_price_f, line);
	while(std::getline(amounts_f, line))
	{
		registry_buf = parseRegistry(line);
		std::map<std::tm, double>::iterator it = _btc_price_db.lower_bound(registry_buf.date);
		//Falta hacer función de print tm en formato fecha
		//multiplicar it.value * registry_buf.value
		//imprimir lo anterior en formato correspondiente
		// try catch para imprimir valores y que el flujo siga
	}
}
