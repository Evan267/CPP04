#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
		std::string	_name;


	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(const AMateria &obj);
		~AMateria(void);
		AMateria	&operator=(const AMateria &obj);

		std::string const	&getType() const; //Returns the materia type

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
