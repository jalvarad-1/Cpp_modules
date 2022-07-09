/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:56 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/09 13:16:13 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete(meta);
    delete(j);
    delete(i);

    const WrongAnimal* met = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();
    std::cout << b->getType() << " " << std::endl;
    b->makeSound(); //will output the cat sound!
    met->makeSound();
    delete(met);
    delete(b);

}