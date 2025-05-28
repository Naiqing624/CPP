#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget *>	_map;

	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget *);
		void	forgetTargetType(const std::string &);
		ATarget	*createTarget(const std::string	&);
};

#endif