/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:38:47 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/18 11:49:26 by jalvarad         ###   ########.fr       */
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
        bool operator >( const Fixed& src ) const;
        bool operator <( const Fixed& src ) const;
        bool operator >=( const Fixed& src ) const;
        bool operator <=( const Fixed& src ) const;
        bool operator ==( const Fixed& src ) const;
        bool operator !=( const Fixed& src ) const;
        Fixed operator +( const Fixed& src ) const;
        Fixed operator -( const Fixed& src ) const;
        Fixed operator *( const Fixed& src ) const;
        Fixed operator /( const Fixed& src ) const;
        Fixed& operator ++(void);
        Fixed operator ++(int);
        Fixed& operator --(void);
        Fixed operator --(int);
        static Fixed& min(Fixed& one, Fixed& two);
        static Fixed const& min(Fixed const& one, Fixed const& two);
        static Fixed& max(Fixed& one, Fixed& two);
        static Fixed const& max(Fixed const& one, Fixed const& two);
};
std::ostream& operator<<(std::ostream& ofd, const Fixed& my_number);
#endif
