/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:08:09 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/28 16:05:20 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
/*class Awesome 
{
    public: 
        Awesome( void ) : _n( 42 ) { return; } 
        int get( void ) const { return this->_n; } 
    private: 
        int _n; 
}; 
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; } 
template< typename T > 
void print( T const & x ) { std::cout << x << std::endl; return; } 
int main() 
{ 
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more
    Awesome tab2[5]; 
    iter( tab, 5, print ); 
    iter( tab2, 5, print );
}*/
class Pepe
{
    private:
        int _n;
    public:
        Pepe (void):_n(0){}
        int operator+(int i)const{return this->_n + i;}
        int getN(void){return this->_n;};
};
std::ostream& operator<<(std::ostream& ofd, Pepe& src){ ofd << src.getN();return ofd;};
template<typename T>
void sum(T& x)
{
    std::cout << x + 1 << std::endl; 
}

int main(void)
{
    int array[] = {92, 23, 213};
    iter(array, 3 , sum);
    Pepe array2[5];
    iter(array2, 5, sum);
}