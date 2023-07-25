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

class BitcoinExchange
{
	private:
		std::map<std::tm, double> _btc_price_db;
		std::map<std::tm, double *> _amounts_db;
		BitcoinExchange(void){}
	
	public:
		BitcoinExchange(std::string, std::string);
		BitcoinExchange & operator=(const BitcoinExchange & src);
		BitcoinExchange(const BitcoinExchange & src);
		~BitcoinExchange(void);
		std::tm createDate(const std::string& fecha);
};
#endif