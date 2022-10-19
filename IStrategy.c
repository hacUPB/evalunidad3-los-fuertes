#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IStrategy.h"

void __Algorithm_void(void *name)
{
    char * result = malloc(sizeof(char[20]));
    strcpy(result,"Sin Strat/n");
    printf("%s", result);
    free(result);
}

IStrategy *New_IStrategy()
{
    IStrategy *I =(IStrategy*)malloc(sizeof(IStrategy));
    I->Al = &__Algorithm_void;
    return I;

}

char *Funcion(IStrategy *this)
{
    this->Al(this);
}