/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:26:41 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/28 15:04:20 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
/*class Awesome 
{
    public: 
        Awesome(void) : _n(0) {} 
        Awesome( int n ) : _n( n ) {} 
        Awesome & operator= (Awesome & a) { _n = a._n; return *this; } 
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); } 
        bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } 
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } 
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } 
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); } 
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); } 
        int get_n() const { return _n; } 
    private: 
        int _n; 
}; 
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; } 
int main(void) 
{
    Awesome a(2), b(4); 
    swap(a, b); 
    std::cout << a << " " << b << std::endl; 
    std::cout << max(a, b) << std::endl; 
    std::cout << min(a, b) << std::endl; 
    return 0;
}*/
int main( void )
{
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    int e =2;
    std::cout << "e = " << e << ", b = " << b << std::endl;
    ::swap( e, b );
    std::cout << "e = " << e << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( e, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( e, b ) << std::endl;
    return 0;
}