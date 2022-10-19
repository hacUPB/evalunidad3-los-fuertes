#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"

Context *New_Context()
{
    return(Context*)malloc(sizeof(Context));
}

void Contructor_Context(Context* this,void * strat)
{
    this->Strat = (IStrategy*)strat;
    this->name = malloc(sizeof(char[20]));
    strcpy(this->name,"ABCDEF");
}

void Destructor_Context(Context*this)
{
    free(this->name);
}

void SetStrat(Context*this,void *strat)
{
    this->Strat = (IStrategy*)strat;
}

void Dosomething(Context*this)
{
    this->Strat->Al(this->name); 
}