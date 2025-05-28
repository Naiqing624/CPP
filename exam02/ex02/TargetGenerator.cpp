#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
	_map.clear();
}

void	TargetGenerator::learnTargetType(ATarget *atarget)
{
	std::map<std::string, ATarget *>::iterator	it = this->_map.find(atarget->getType());
	if (it == this->_map.end())
		this->_map[atarget->getType()] = atarget->clone();
}
void	TargetGenerator::forgetTargetType(const std::string &type)
{
	std::map<std::string, ATarget *>::iterator	it = this->_map.find(type);
	if (it != this->_map.end())
	{
		delete it->second;
		this->_map.erase(type);
	}
}
ATarget	*TargetGenerator::createTarget(const std::string &type)
{
	std::map<std::string, ATarget *>::iterator	it = this->_map.find(type);
	if (it != this->_map.end())
	{
		return it->second->clone();
	}
	return nullptr;
}