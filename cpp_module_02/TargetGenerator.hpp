#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

# include <iostream>
# include <string>
# include <map>

# include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const &obj);
		TargetGenerator	&operator=(TargetGenerator const &rhs);

		std::map<std::string, ATarget *>	_arr;

	public:
		TargetGenerator(void);

		~TargetGenerator(void);

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(std::string const &targetType);
		ATarget	*createTarget(std::string const &targetType);
};

#endif
