/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:08:09 by jalvarad          #+#    #+#             */
/*   Updated: 2022/08/29 18:01:05 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

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