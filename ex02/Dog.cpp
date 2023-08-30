/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:58:12 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 17:47:16 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default dog constructor called" << std::endl;
	this->brain = new Brain();
	this->_setType("Dog");
	return ;
}

Dog::Dog(const Dog &obj):Animal(obj)
{
	std::cout << "Copy dog constructor called" << std::endl;
	this->_setType(obj.type);
	this->brain = obj.brain;
	return ;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Default dog destructor called" << std::endl;
	return ;
}

Dog&	Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->brain = obj.brain;
		this->type = obj.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::_setType(std::string value)
{
	this->type = value;
}
