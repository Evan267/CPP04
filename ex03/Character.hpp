#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;

	public:
		Character(void);
		Character(const Character &obj);
		~Character(void);
		Character &operator=(const Character &obj);

		virtual str::string const	& getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
}

#endif
