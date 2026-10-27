#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		void learnMateria( AMateria* src ) override;
		AMateria* createMateria( std::string const & type ) override;

		MateriaSource &		operator=( MateriaSource const & rhs );

	private:

		AMateria* knownMaterias[4];

};

#endif /* *************************************************** MATERIASOURCE_H */