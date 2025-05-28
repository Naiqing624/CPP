#include "ASpell.hpp"
#include "ATarget.hpp"

std::string	ASpell::getName() const
{
	return this->_name;
}
std::string	ASpell::getEffects() const
{
	return this->_effects;
}

ASpell::ASpell(const std::string &name, const std::string &effects) : _name(name), _effects(effects)
{
}

ASpell::~ASpell()
{
}

void	ASpell::launch(const ATarget & atarget)
{
	atarget.getHitBySpell(*this);
}