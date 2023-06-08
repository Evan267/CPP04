/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:47:37 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 18:00:05 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy brain constructor called" << std::endl;
	std::copy(std::begin(obj.ideas), std::end(obj.ideas), std::begin(this->ideas));
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain& Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		std::copy(std::begin(obj.ideas), std::end(obj.ideas), std::begin(this->ideas));
	}
	return (*this);
}
