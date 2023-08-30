/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:40:37 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 17:54:33 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

public:

	Dog(void);
	Dog(const Dog &obj);
	~Dog(void);
	Dog&			operator=(const Dog &obj);
	virtual void	makeSound(void) const;
	Brain			*getBrain(void) const;

private:

	void	_setType(std::string value);
	Brain	*brain;

};

#endif
