/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:59:21 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 18:13:53 by eberger          ###   ########.fr       */
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
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	
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
