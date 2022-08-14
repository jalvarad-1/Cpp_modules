/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:04 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/14 11:46:34 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <limits.h>

class Convert
{
	public:
		Convert(void);
		Convert(Convert &src);
		Convert & operator=(Convert &src);
		char to_char(std::string & str);
		int to_int(std::string & str);
		float to_float(std::string & str);
		double to_double(std::string & str);
};
#endif