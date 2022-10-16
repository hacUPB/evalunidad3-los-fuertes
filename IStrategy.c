#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IStrategy.h"

void __Algorithm_void(void *name)
{
    char * result = malloc(sizeof(char[20]));
    strcpy(result,"Sin Strat");
    printf("%s", result);
    free(result);
}

IStrategy *New_IStrategy()
{
    return (IStrategy*)malloc(sizeof(IStrategy));
}

void Contructor_IStrategy(IStrategy* this)
{
    this->Al = &__Algorithm_void;
}

void Destructor_IStrategy( IStrategy * this)
{
    
}

char * Funcion(IStrategy *this)
{
    this->Al(this);
}