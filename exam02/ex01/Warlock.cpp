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
	// for (std::map<std::string, ASpell *>::iterator it = _map.begin(); it != _map.end(); ++it)
	// 	delete it->second;
	// _map.clear();
}

void	Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *aspell)
{
	std::map<std::string, ASpell *>::iterator	it = this->_map.find(aspell->getName());
	if (it == this->_map.end())
	{
		this->_map[aspell->getName()] = aspell->clone();
	}
}

void	Warlock::forgetSpell(const std::string &name)
{
	std::map<std::string, ASpell *>::iterator	it = this->_map.find(name);
	if (it != this->_map.end())
	{
		delete it->second;
		this->_map.erase(name);
	}
}

void	Warlock::launchSpell(const std::string &name, ATarget &atarget)
{
	std::map<std::string, ASpell *>::iterator	it = this->_map.find(name);
	if (it != this->_map.end())
	{
		it->second->launch(atarget);
	}
}
