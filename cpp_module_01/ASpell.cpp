#include "ASpell.hpp"

ASpell::ASpell(void): _name(), _effects()
{
}

ASpell::ASpell(ASpell const &obj)
{
	*this = obj;
}

ASpell	&ASpell::operator=(ASpell const &rhs)
{
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();

	return (*this);
}

ASpell::ASpell(std::string const name, std::string const effects): _name(name), _effects(effects)
{
}

ASpell::~ASpell(void)
{
}

std::string const	&ASpell::getName(void) const
{
	return (this->_name);
}

std::string const	&ASpell::getEffects(void) const
{
	return (this->_effects);
}
