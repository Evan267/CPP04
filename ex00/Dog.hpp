/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:40:37 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:10:52 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal {

public:

	Dog(void);
	Dog(const Dog &obj);
	~Dog(void);
	Dog&		operator=(const Dog &obj);
	virtual void	makeSound(void) const;

private:

	void	_setType(std::string value);

};

#endif
