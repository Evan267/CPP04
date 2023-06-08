/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:23:17 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 18:12:02 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {

public:

	Animal(void);
	Animal(const Animal &obj);
	virtual ~Animal(void);
	Animal& 	operator=(const Animal &obj);
	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;


protected:

	std::string	type;

};

#endif
