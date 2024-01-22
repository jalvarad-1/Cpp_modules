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
	{
        if (day > 30) 
			return false;
	}
    if (month == 2)
    {
        bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (leap)
		{
            if (day > 29)
				return false;
		}
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
    std::tm date;
    std::istringstream ss(input);
    ss >> std::get_time(&date, "%Y-%m-%d");

	if (!isValidDate(date.tm_year + 1900, date.tm_mon + 1, date.tm_mday))
		throw BadInput();
    return date;
}

s_registry BitcoinExchange::parseRegistry(const std::string &line, const char separator)
{
	s_registry reg;
    std::string date_str;
    std::string value_str;
	std::string extra;
	std::istringstream ss(line);

	if (std::getline(ss, date_str, separator) && \
		std::getline(ss, value_str, separator) && \
		!std::getline(ss,extra))
	{
		trim(date_str);
		trim(value_str);
        reg.date = string_to_tm(date_str);
		reg.value = parseValue(value_str);
	}
	else
		throw BadInput();
	return reg;
}

void BitcoinExchange::trim(std::string& s)
{
    size_t start = s.find_first_not_of(" \t\r\n");
    size_t end = s.find_last_not_of(" \t\r\n");

    if (start == std::string::npos)
        s = "";
    else
        s = s.substr(start, end - start + 1);
}

void BitcoinExchange::parseIndex(const std::string &line, const char separator,
							const std::string index1, const std::string index2)
{
	std::string date;
	std::string value;
	std::string extra;
	std::istringstream ss(line);

	if (std::getline(ss, date, separator) && \
		std::getline(ss, value, separator) && \
		!std::getline(ss,extra))
	{
		trim(date);
		trim(value);
		if(date == index1 && value == index2)
			return;
	}
	throw BadIndex();
}

bool greaterThan( const std::tm& src1, const std::tm& src2)
{
    if (src1.tm_year != src2.tm_year)
		return src1.tm_year > src2.tm_year;
	if (src1.tm_mon != src2.tm_mon)
		return src1.tm_mon > src2.tm_mon;
	return src1.tm_mday > src2.tm_mday;
}

BitcoinExchange::BitcoinExchange(std::ifstream & btc_price_f, std::ifstream &amounts_f)
{
	std::string line;
	s_registry registry_buf;

	try
	{
		//read DB index
		std::getline(btc_price_f, line);
		parseIndex(line, ',', "date", "exchange_rate");

		// DB read
		while (std::getline(btc_price_f, line))
		{
			registry_buf = parseRegistry(line, ',');
        	_btc_price_db[registry_buf.date] = registry_buf.value;
    	}
		if (_btc_price_db.empty())
			throw EmptyDB();
		line.clear();
		//read amounts index 
		std::getline(amounts_f, line);
		parseIndex(line, '|', "date", "value");
	}
	catch( std::exception & e)
    {
        std::cerr << e.what() << std::endl;
		exit(1);
    }
	while(std::getline(amounts_f, line))
	{
		std::map<std::tm, double, s_registry>::iterator it;
		try
		{
			registry_buf = parseRegistry(line, '|');
			if (registry_buf.value > 1000)
				throw TooLargeANumber();
			it = _btc_price_db.lower_bound(registry_buf.date);
			if (_btc_price_db.begin() != it && greaterThan(it->first, registry_buf.date))
				it--;
			std::cout << std::put_time(&it->first, "%Y-%m-%d");
			std::cout << " => " << registry_buf.value << " = " << it->second * registry_buf.value << std::endl;
		}
		catch(BadInput &e)
		{
			std::cerr << e.what() << " => " << line << std::endl;
		}
		catch( std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
