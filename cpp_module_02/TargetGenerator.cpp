#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

TargetGenerator::TargetGenerator(TargetGenerator const &obj)
{
	*this = obj;
}

TargetGenerator	&TargetGenerator::operator=(TargetGenerator const &rhs)
{
	this->_arr = rhs._arr;

	return (*this);
}

TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget *>::iterator	it = this->_arr.begin();
	if (it != this->_arr.end())
	{
		delete it->second;
		this->_arr.erase(it);

		it = this->_arr.begin();
	}
}

void	TargetGenerator::learnTargetType(ATarget *spell)
{
	if (spell)
	{
		std::map<std::string, ATarget *>::iterator	it = this->_arr.find(spell->getType());
		if (it == this->_arr.end())
		{
			this->_arr[spell->getType()] = spell->clone();
		}
	}
}

void	TargetGenerator::forgetTargetType(std::string const &targetType)
{
	std::map<std::string, ATarget *>::iterator	it = this->_arr.find(targetType);
	if (it != this->_arr.end())
	{
		delete it->second;
		this->_arr.erase(it);
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &targetType)
{
	std::map<std::string, ATarget *>::iterator	it = this->_arr.find(targetType);
	if (it != this->_arr.end())
	{
		return (it->second);
	}
	return (NULL);
}
