#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const &obj);
		Warlock	&operator=(Warlock const &rhs);

		std::string	_name;
		std::string	_title;

	public:
		Warlock(std::string const name, std::string const title);
		~Warlock(void);

		std::string const	&getName(void) const;
		std::string const	&getTitle(void) const;

		void	setTitle(std::string const str);

		void	introduce(void) const;
};

#endif
