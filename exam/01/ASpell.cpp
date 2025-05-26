
#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects)
{
}

ASpell::~ASpell()
{
}

const std::string &ASpell::getName() const
{
    return this->_name;
}

const std::string &ASpell::getEffects() const
{
    return this->_effects;
}

void    ASpell::launch(const ATarget &atarget) const
{
    atarget.getHitBySpell(*this);
}


