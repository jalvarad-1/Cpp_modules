/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/16 18:25:29 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//hacer método que determine si entra dentro de nan y esas cosas
//método que cuente los puntos, signos y negativos
//método trim string  : ya está, parece que funcinona
std::string Convert::trim(char * str)
{
    std::string str_trim = str;
    size_t start = str_trim.find_first_not_of(WHITESPACE);
    size_t len = str_trim.find_last_not_of(WHITESPACE) - start;

    return (start == std::string::npos) ? "" : str_trim.substr(start, len + 1);
}


char Convert::to_char(std::string & str)
{
    int i = std::stoi(str, nullptr);
    std::cout <<i << std::endl;
    return 'h';
}