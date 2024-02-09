#ifndef A_SPELL_HPP
# define A_SPELL_HPP

# include <iostream>
# include <string>

class ASpell
{
	private:
		std::string	_name;
		std::string	_effects;

	public:
		ASpell(void);
		ASpell(ASpell const &obj);
		ASpell	&operator=(ASpell const &rhs);

		ASpell(std::string const name, std::string const effects);

		virtual ~ASpell(void);

		std::string const	&getName(void) const;
		std::string const	&getEffects(void) const;

		virtual ASpell	*clone(void) const = 0;
};

#endif
