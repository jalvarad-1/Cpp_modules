/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:47:19 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/17 10:21:42 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
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
};
#endif
