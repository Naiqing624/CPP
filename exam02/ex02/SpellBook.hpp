#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
class ASpell;
#include <map>

class SpellBook
{
	private:
		std::map<std::string, ASpell *>	_map;

	public:
		void	learnSpell(ASpell *);
		void	forgetSpell(const std::string &name);
		ASpell *createSpell(const std::string &name);
		SpellBook();
		~SpellBook();
};


#endif