#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include <string>

# include "ASpell.hpp"

class ASpell;

class Fwoosh
{
	public:
		Fwoosh(void);
		~Fwoosh(void);

		ASpell	*clone(void) const;
};

#endif