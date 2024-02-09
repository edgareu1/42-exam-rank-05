#ifndef A_TARGET_HPP
# define A_TARGET_HPP

# include <iostream>
# include <string>

# include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string	_type;

	public:
		ATarget(void);
		ATarget(ATarget const &obj);
		ATarget	&operator=(ATarget const &rhs);

		ATarget(std::string const &type);

		virtual ~ATarget(void);

		std::string const	&getType(void) const;

		virtual ATarget	*clone(void) const = 0;

		void	getHitBySpell(ASpell const &spell) const;
};

#endif
