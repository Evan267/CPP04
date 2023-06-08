/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:20:40 by eberger           #+#    #+#             */
/*   Updated: 2023/06/08 18:03:08 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

public:

	Cat(void);
	Cat(const Cat &obj);
	~Cat(void);
	Cat&		operator=(const Cat &obj);
	virtual void	makeSound(void) const;

private:

	void	_setType(std::string value);
	Brain	*brain;

};

#endif
