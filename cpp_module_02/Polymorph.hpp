#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include <string>

# include "ASpell.hpp"

class ASpell;

class Polymorph: public ASpell
{
	public:
		Polymorph(void);
		~Polymorph(void);

		ASpell	*clone(void) const;
};

#endif
