/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:46:50 by jalvarad          #+#    #+#             */
/*   Updated: 2023/07/25 20:17:17 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <map>
#include <iostream>
#include <ctime>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <limits>
#include <stdexcept>

struct s_registry{
	std::tm	date;
	double	value;
};

class BitcoinExchange
{
	private:
		std::map<std::tm, double> _btc_price_db;
		BitcoinExchange(void){}
	
	public:
		BitcoinExchange(std::ifstream & btc_price_f, std::ifstream & amounts_f);
		BitcoinExchange & operator=(const BitcoinExchange & src);
		BitcoinExchange(const BitcoinExchange & src);
		~BitcoinExchange(void);
		std::tm createDate(const std::string& fecha);
		double parseValue(std::string val);
		std::tm string_to_tm(const std::string &input);
		s_registry parseRegistry(const std::string &line);

		//EXCEPTIONS
		class NotAPositiveNumber: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: not a positive number.");
                }
        };
		class BadInput: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: bad input");
                }
        };
		class TooLargeANumber: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: too large a number.");
                }
        };
};
#endif