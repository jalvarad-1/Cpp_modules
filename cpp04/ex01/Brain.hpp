/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:23:02 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/10 17:52:06 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#define MAX_IDEAS_SIZE 100

class Brain
{
    private:
        std::string _ideas[MAX_IDEAS_SIZE];
    
    public:
        Brain ( void );
        Brain ( Brain& src );
        Brain& operator = ( Brain& src );
        ~Brain ( void );
};
#endif