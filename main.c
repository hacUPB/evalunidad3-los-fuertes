#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "IStrategy.h"

int main (void)
{
    IStrategy* Master = New_IStrategy();

    ConcreteStrategyA* stratA = New_ConcreteStrategyA();

    ConcreteStrategyB* stratB = New_ConcreteStrategyB();

    Context *Master_Context = New_Context();
    Contructor_Context(Master_Context,stratA);

    printf("Client: Strategy is set to normal sorting.\n");
    Dosomething(Master_Context);
    printf(" ");
    printf("Client: Strategy is set to reverse sorting.\n");
    SetStrat(Master_Context,stratB);
    Dosomething(Master_Context);

    Destructor_Context(Master_Context);
    free(Master_Context);
    free(stratA);
    free(stratB);
    free(Master);


    return 0;    
}