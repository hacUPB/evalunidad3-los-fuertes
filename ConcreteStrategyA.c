#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ConcreteStrategyA.h"

void __Algorithm_A(void * name)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)");
    char *result = malloc(sizeof(char[20]));
    strcpy(result,(char*)name);
    printf("%s", result);
    free(result);
}

ConcreteStrategyA *New_ConcreteStrategyA()
{
    return (ConcreteStrategyA*)malloc (sizeof(ConcreteStrategyA));
}

void Contructor_ConcreteStrategyA(ConcreteStrategyA *this)
{
    Contructor_IStrategy((IStrategy*)this);
    this->StratA.Al = __Algorithm_A;
}

void Destructor_ConcreteStrategyA(ConcreteStrategyA*this)
{
    Destructor_IStrategy((IStrategy*)this);
}