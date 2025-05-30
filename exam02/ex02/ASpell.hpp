#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
class ATarget;

class ASpell
{
	protected:
		std::string	_name;
		std::string	_effects;

	public:
		std::string	getName() const;
		std::string	getEffects() const;

		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();

		virtual ASpell *clone () const = 0;

		void	launch(const ATarget &);
};

#endif