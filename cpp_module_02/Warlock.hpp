#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>

# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const &obj);
		Warlock	&operator=(Warlock const &rhs);

		std::string	_name;
		std::string	_title;
		SpellBook	_spellBook;

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const	&getName(void) const;
		std::string const	&getTitle(void) const;

		void	setTitle(std::string const &str);

		void	introduce(void) const;

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, ATarget const &target);
};

#endif
