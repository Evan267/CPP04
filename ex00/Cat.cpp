/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:55:21 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:10:11 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default cat constructor called" << std::endl;
	this->_setType("Cat");
	return ;
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Copy cat constructor called" << std::endl;
	*this = obj;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Default cat destructor called" << std::endl;
	return ;
}

Cat&	Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

void	Cat::_setType(std::string value)
{
	this->type = value;
}
