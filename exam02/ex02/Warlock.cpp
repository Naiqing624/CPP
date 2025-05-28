#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

const std::string	Warlock::getName() const
{
	return this->_name;
}
const std::string	Warlock::getTitle() const
{
	return this->_title;
}

void	Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!" <<std::endl;
}

void	Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *aspell)
{
	spellBook.learnSpell(aspell);
}

void	Warlock::forgetSpell(std::string &name)
{
	spellBook.forgetSpell(name);
}

void	Warlock::launchSpell(const std::string &name, ATarget &atarget)
{
	ASpell *aspell = spellBook.createSpell(name);
	if (aspell != nullptr)
	{
		aspell->launch(atarget);
		delete aspell;
	}
}
