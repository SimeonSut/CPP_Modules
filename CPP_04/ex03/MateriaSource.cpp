#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (short i = 0; i < 4; i++)
		knownMaterias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (short i = 0; i < 4; i++)
	{
		if (src.knownMaterias[i] != NULL)
			knownMaterias[i];
	}
}

MateriaSource::~MateriaSource()
{}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria( AMateria* src )
{
	for (short i = 0; i < 4; i++)
	{
		if (knownMaterias[i] == NULL)
			knownMaterias[i] = src;
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	for (short i = 0; i < 4; i++)
	{
		if (knownMaterias[i] == NULL)
			continue ;
		if (type.compare("ice") == 0 && knownMaterias[i]->getType().compare(type) == 0)
			return new Ice();
		else if (type.compare("cure") == 0 && knownMaterias[i]->getType().compare(type) == 0)
			return new Cure();
	}
}

/* ************************************************************************** */