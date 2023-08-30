/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:33:40 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 18:48:16 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(const WrongCat &obj);
	~WrongCat(void);
	WrongCat&		operator=(const WrongCat &obj);
	void	makeSound(void) const;

private:

	void	_setType(std::string value);

};

#endif
