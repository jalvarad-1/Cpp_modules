/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:21:08 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/10 17:31:26 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen test;
    std::cout << "DEBUG: ";
    test.complain("DEBUG");
    std::cout << "WARNING: ";
    test.complain("WARNING");
    std::cout << "INFO:";
    test.complain("INFO");
    std::cout << "ERROR:";
    test.complain ("ERROR");
    std::cout << "Algo que no va:";
    test.complain ("kjbgfn,jkjvnafslk");

    return 0;
}