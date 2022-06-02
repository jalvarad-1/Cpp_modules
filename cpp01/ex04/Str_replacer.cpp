/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Str_replacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:55:14 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/19 16:31:01 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Str_replacer.hpp"

std::string Str_replacer::get_s1(void)
{
    return this->_s1;
}

std::string Str_replacer::get_s2(void)
{
    return this->_s2;
}

Str_replacer::Str_replacer(char *infile, char *s1, char * s2) : _s1(s1), _s2(s2)
{
    if (_s1.empty() || _s2.empty())
    {
        std::cout << "strings can't be empty" << std::endl;
        return ;
    }
    if (Str_replacer::files_opener(infile) == false)
        return ;
    while (getline(this->_ifs, _buf))
    {
        this->_ofs << Str_replacer::new_replace();
        if(!this->_ifs.eof())
            this->_ofs << std::endl;
    }
    this->_ifs.close();
    this->_ofs.close();
}

std::string Str_replacer::new_replace(void)
{
    std::string new_line;
    size_t found = this->_buf.find(this->_s1);
    unsigned int new_size = 0;
    if (found == std::string::npos)
        return this->_buf;
    while (found != std::string::npos)
    {
        new_line.append(this->_buf.substr(0, found) + this->_s2);
        found += this->_s1.length();
        new_size = this->_buf.length() - found + 1;
        this->_buf = this->_buf.substr(found, new_size);
        found = this->_buf.find(this->_s1);
    }
    new_line += this->_buf;
    return new_line ;
}

bool Str_replacer::files_opener(char *infile)
{
    this->_ifs.open(infile);
    if (this->_ifs.fail() == 1)
    {
        std::cout << "ERROR: something was wrong with the input file." << std::endl;
        return false;
    }
    this->_buf = infile;
    this->_buf += ".replace";
    this->_ofs.open(_buf);
    if (this->_ofs.fail() == 1)
    {
        std::cout << "ERROR: something was wrong with the output file." << std::endl;
        this->_ifs.close();
        return false;
    }
    return true;
}

Str_replacer::~Str_replacer(void)
{
}
