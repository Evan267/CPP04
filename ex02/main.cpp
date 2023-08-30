/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:59:21 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 17:53:58 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int	main(void)
{
	const Dog*	j = new Dog();
	const Cat*	i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();

	i->getBrain()->setIdea("Je suis un chat", 0);
	std::cout << "idea " << i->getBrain()->getIdea(0) << std::endl;
	
	delete j;
	delete i;

	const WrongAnimal*	wrong_meta = new WrongAnimal();
	const WrongAnimal*	wrong_i = new WrongCat();

	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound();
	wrong_meta->makeSound();
	
	delete wrong_meta;
	delete wrong_i;

	return (0);
}
