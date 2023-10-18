#ifndef EFFECT_H
#define EFFECT_H

#include "Cell.h"

class Effect{
    protected:

    public:
    virtual void apply(Cell& cell)=0;
};

#endif