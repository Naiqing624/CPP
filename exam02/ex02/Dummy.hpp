#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	private:

	public:
		Dummy();
		~Dummy();

		ATarget *clone() const;
};

#endif