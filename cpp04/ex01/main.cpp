/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:48:56 by jalvarad          #+#    #+#             */
/*   Updated: 2022/07/23 17:32:47 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	//meta->makeSound();
	//delete(meta);
	delete(j);
	delete(i);
	std::cout << "\n\n=======  Deep copy  ================================\n\n";
	const Animal* a = new Dog();
	const Animal* b = new Cat();
	delete a;//should not create a leak
	delete b;
	Dog* c = new Dog();
	Dog* d = new Dog(*c);
	delete(c);
	delete(d);
	std::cout << "\n\n======  the main expected by the subject ===========\n\n";
	int SIZE = 10;
	int indx = 0;
	Animal* set_animal[SIZE];
	while (indx < SIZE/2)
		set_animal[indx++] = new Dog();
	while (indx < SIZE)
		set_animal[indx++] = new Cat();
	indx  =0;
	while (indx < SIZE)
		delete set_animal [indx++];	
	//system("leaks WorldOnFire");
}