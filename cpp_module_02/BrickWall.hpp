#ifndef BRICK_WALL_HPP
# define BRICK_WALL_HPP

# include <iostream>
# include <string>

# include "ATarget.hpp"

class ATarget;

class BrickWall: public ATarget
{
	public:
		BrickWall(void);
		~BrickWall(void);

		ATarget	*clone(void) const;
};

#endif
