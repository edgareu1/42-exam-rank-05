#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

SpellBook::SpellBook(SpellBook const &obj)
{
	*this = obj;
}

SpellBook	&SpellBook::operator=(SpellBook const &rhs)
{
	this->_arr = rhs._arr;

	return (*this);
}

SpellBook::~SpellBook(void)
{
	std::map<std::string, ASpell *>::iterator	it = this->_arr.begin();
	while (it != this->_arr.end())
	{
		delete it->second;
		this->_arr.erase(it);

		it = this->_arr.begin();
	}
	this->_arr.clear();
}

void	SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>::iterator	it = this->_arr.find(spell->getName());
		if (it == this->_arr.end())
		{
			this->_arr[spell->getName()] = spell->clone();
		}
	}
}

void	SpellBook::forgetSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator	it = this->_arr.find(spellName);
	if (it != this->_arr.end())
	{
		delete it->second;
		this->_arr.erase(it);
	}
}

ASpell	*SpellBook::createSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator	it = this->_arr.find(spellName);
	if (it != this->_arr.end())
	{
		return (it->second);
	}
	return (NULL);
}
