#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    private:
        /* data */
    public:
        Fwoosh();
        ~Fwoosh();
        const ASpell* clone() const;
};

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooched")
{
}

Fwoosh::~Fwoosh()
{
}

const ASpell* Fwoosh::clone() const
{
    return  new Fwoosh();
}


#endif