#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
	_map.clear();
}

void	SpellBook::learnSpell(ASpell *aspell)
{
	std::map<std::string, ASpell *>::iterator	it = this->_map.find(aspell->getName());
	if (it == this->_map.end())
	{
		this->_map[aspell->getName()] = aspell->clone();
	}
}

void	SpellBook::forgetSpell(const std::string &name)
{
	std::map<std::string, ASpell *>::iterator	it = this->_map.find(name);
	if (it != this->_map.end())
	{
		delete it->second;
		this->_map.erase(name);
	}
}

ASpell *SpellBook::createSpell(const std::string &name)
{
	std::map<std::string, ASpell *>::iterator	it = this->_map.find(name);
	if (it != this->_map.end())
		return it->second->clone();
	return nullptr;
}