#ifndef	MateriaSource
# define MateriaSource
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	_materias[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &obj);

		virtual void	learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif
