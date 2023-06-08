/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:43:43 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 17:54:58 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("unknown")
{
	std::cout << "Default animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Copy animal constructor called" << std::endl;
	*this = obj;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Default animal destructor called" << std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Not sound for Animal" << std::endl;
}
