#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ConcreteStrategyA.h"

void __Algorithm_A(void * name)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char *result = malloc(sizeof(char[20]));
    strcpy(result,(char *)name);
    printf("%s", result);
    printf("\n");
    free(result);
}

ConcreteStrategyA *New_ConcreteStrategyA()
{
    ConcreteStrategyA *A = (ConcreteStrategyA*)malloc (sizeof(ConcreteStrategyA));
    A->StratA.Al = __Algorithm_A;
    return A;
}
