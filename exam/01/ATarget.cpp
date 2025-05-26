#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string &type) : _type(type)
{

}

ATarget::~ATarget()
{

}

const std::string &ATarget::getType() const
{
    return this->_type;
}

void    ATarget::getHitBySpell(const ASpell &aspell) const
{
    std::cout << this->getType() << " has been " << aspell.getEffects() << "!" << std::endl;
}