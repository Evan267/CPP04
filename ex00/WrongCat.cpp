/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:35:03 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:35:21 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default wrong cat constructor called" << std::endl;
	this->_setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj)
{
	std::cout << "Copy wrong cat constructor called" << std::endl;
	*this = obj;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default wrong cat destructor called" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meuuuww" << std::endl;
}

void	WrongCat::_setType(std::string value)
{
	this->type = value;
}
