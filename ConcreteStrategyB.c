#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ConcreteStrategyB.h"

void __Algorithm_B(void * name)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char* result = malloc(sizeof(char[20]));
    strcpy(result,(char *)name);

    int l,i;
    char *Inicio, *Final, Letra;

    l= strlen(result);
    Inicio=result;
    Final=result;

    for (i = 0; i < l-1; i++)
    {
        Final++;
    }

    for (i = 0; i < l/2; i++)
    {
        Letra=*Final;
        *Final=*Inicio;
        *Inicio=Letra;

        Inicio++;
        Final--;
    }
    printf("%s", result);
    printf("\n");
    free(result);
}

ConcreteStrategyB *New_ConcreteStrategyB()
{
    ConcreteStrategyB *B = (ConcreteStrategyB*)malloc (sizeof(ConcreteStrategyB));
    B->StratB.Al = __Algorithm_B;
    return B;

}
