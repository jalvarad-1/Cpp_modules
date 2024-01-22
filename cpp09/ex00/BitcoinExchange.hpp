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
    bool operator()(const std::tm& lhs, const std::tm& rhs) const {
        if (lhs.tm_year != rhs.tm_year)
            return lhs.tm_year < rhs.tm_year;
        if (lhs.tm_mon != rhs.tm_mon)
            return lhs.tm_mon < rhs.tm_mon;
        if (lhs.tm_mday != rhs.tm_mday)
            return lhs.tm_mday < rhs.tm_mday;
        if (lhs.tm_hour != rhs.tm_hour)
            return lhs.tm_hour < rhs.tm_hour;
        if (lhs.tm_min != rhs.tm_min)
            return lhs.tm_min < rhs.tm_min;
        return lhs.tm_sec < rhs.tm_sec;
    }
	std::tm	date;
	double	value;
};

class BitcoinExchange
{
	private:
		std::map<std::tm, double, s_registry> _btc_price_db;
		BitcoinExchange(void){}
	
	public:
		BitcoinExchange(std::ifstream & btc_price_f, std::ifstream & amounts_f);
		BitcoinExchange & operator=(const BitcoinExchange & src);
		BitcoinExchange(const BitcoinExchange & src);
		~BitcoinExchange(void){};
		std::tm createDate(const std::string& fecha);
		double parseValue(std::string val);
		std::tm string_to_tm(const std::string &input);
		s_registry parseRegistry(const std::string &line, const char separator);
        void parseIndex(const std::string &line, const char separator,
						const std::string index1, const std::string index2);
        void trim(std::string& s);
        
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
        class BadIndex: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: bad index on DB file or input file");
                }
        };

        class EmptyDB : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Empty DB");
                }
        };
};
bool greaterThan( const std::tm& src1, const std::tm& src2);

#endif
