#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "IStrategy.h"

typedef struct 
{
    IStrategy* Strat;
    char* name;
}Context;

Context *New_Context();

void Contructor_Context(Context*,void *);

void Destructor_Context(Context*);

void SetStrat(Context*,void *);

void Dosomething(Context*);

#endif