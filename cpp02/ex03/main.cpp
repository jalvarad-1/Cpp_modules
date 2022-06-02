/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:18:52 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/23 15:31:12 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
int main()
{
    Point a (1,1);
    Point b(1,1);
    Point c(1,1);
    Point p(1, 1);

    if (bsp(a, b,c, p))
        std::cout << "IS INSIDE" << std::endl;
    else
        std::cout << "IS OUTSIDE" << std::endl;
    return 0;
}