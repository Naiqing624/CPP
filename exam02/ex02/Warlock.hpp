#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
class ASpell;
class ATarget;
#include <map>
#include "SpellBook.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string	_title;
		std::map<std::string, ASpell *>	_map;
		SpellBook	spellBook;

	public:
		const std::string	getName() const;
		const std::string	getTitle() const;

		void	setTitle(const std::string &title);

		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		void	introduce() const;

		void	learnSpell(ASpell *);
		void	forgetSpell(std::string &name);
		void	launchSpell(const std::string &name, ATarget &atarget);

};

#endif