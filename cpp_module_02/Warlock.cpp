#include "Warlock.hpp"

Warlock::Warlock(void): _name(), _title()
{
}

Warlock::Warlock(Warlock const &obj)
{
	*this = obj;
}

Warlock	&Warlock::operator=(Warlock const &rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();

	return (*this);
}

Warlock::Warlock(std::string const name, std::string const title): _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;

	std::map<std::string, ASpell *>::iterator	it = this->_spellBook.begin();
	if (it != this->_spellBook.end())
	{
		delete it->second;
		this->_spellBook.erase(it);

		it = this->_spellBook.begin();
	}
}

std::string const	&Warlock::getName(void) const
{
	return (this->_name);
}

std::string const	&Warlock::getTitle(void) const
{
	return (this->_title);
}

void	Warlock::setTitle(std::string const str)
{
	this->_title = str;
}

void	Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>::iterator	it = this->_spellBook.find(spell->getName());
		if (it == this->_spellBook.end())
		{
			this->_spellBook[spell->getName()] = spell->clone();
		}
	}
}

void	Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell *>::iterator	it = this->_spellBook.find(spellName);
	if (it != this->_spellBook.end())
	{
		delete it->second;
		this->_spellBook.erase(it);
	}
}

void	Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	std::map<std::string, ASpell *>::iterator	it = this->_spellBook.find(spellName);
	if (it != this->_spellBook.end())
	{
		it->second->launch(target);
	}
}
