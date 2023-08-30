/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:31:16 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:32:18 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &obj);
	virtual ~WrongAnimal(void);
	WrongAnimal& 	operator=(const WrongAnimal &obj);
	std::string	getType(void) const;
	void	makeSound(void) const;


protected:

	std::string	type;

};

#endif
