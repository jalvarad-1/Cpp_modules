/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:19:19 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/17 12:39:57 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int _n;
        static const int _fract_bit = 8;
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed& src);
        Fixed& operator=(const Fixed& src);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed(const int i);
        Fixed(const float f);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& ofd, const Fixed& my_number);
#endif
