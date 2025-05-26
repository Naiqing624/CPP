#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
private:
    
public:
    Dummy();
    ~Dummy();
    const ATarget *clone() const;
};

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{
}

const ATarget *Dummy::clone() const
{
    return new Dummy(*this);
}

#endif