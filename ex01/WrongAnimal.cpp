/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:32:35 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:33:20 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("unknown")
{
	std::cout << "Default wrong animal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "Copy wrong animal constructor called" << std::endl;
	*this = obj;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default wrong animal destructor called" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Not sound for WrongAnimal" << std::endl;
}
