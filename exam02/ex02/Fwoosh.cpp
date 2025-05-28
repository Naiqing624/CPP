#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwoosh")
{}

Fwoosh::~Fwoosh()
{}

ASpell*	Fwoosh::clone() const
{
	return new Fwoosh();
}