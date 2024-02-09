#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP

# include <iostream>
# include <string>
# include <map>

# include "ASpell.hpp"

class ASpell;

class SpellBook
{
	private:
		SpellBook(SpellBook const &obj);
		SpellBook	&operator=(SpellBook const &rhs);

		std::map<std::string, ASpell *>	_arr;

	public:
		SpellBook(void);

		~SpellBook(void);

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const &spellName);
		ASpell	*createSpell(std::string const &spellName);
};

#endif
