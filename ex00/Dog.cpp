/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:58:12 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:11:49 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default dog constructor called" << std::endl;
	this->_setType("Dog");
	return ;
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Copy dog constructor called" << std::endl;
	*this = obj;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Default dog destructor called" << std::endl;
	return ;
}

Dog&	Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}

void	Dog::_setType(std::string value)
{
	this->type = value;
}
