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
	int	i;

	i = 0;
	std::cout << "Copy brain constructor called" << std::endl;
	while (i < 100)
	{
		this->_ideas[i] = obj._ideas[i];
		i++;
	}
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain& Brain::operator=(const Brain &obj)
{
	int	i;

	i = 0;
	if (this != &obj)
	{
		while (i < 100)
		{
			this->_ideas[i] = obj._ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::setIdea(std::string str, int id)
{
	if (id >= 0 && id < 100)
		this->_ideas[id] = str;
	else
		std::cout << "id invalid" << std::endl;
}

std::string	Brain::getIdea(int id) const
{
	if (id < 0 || id >= 100)
	{
		std::cout << "id transmis a getIdea est incorrect" << std::endl;
		return (NULL);
	}
	return (this->_ideas[id]);
}
