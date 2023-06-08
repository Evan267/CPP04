/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:04:46 by eberger           #+#    #+#             */
/*   Updated: 2023/06/07 19:09:00 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {

public:

	Brain(void);
	Brain(const Brain &obj);
	~Brain(void);
	Brain&	operator=(const Brain &obj);

private:

	std::string	ideas[100];

};

#endif
