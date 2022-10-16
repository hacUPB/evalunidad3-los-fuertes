#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_

#include "IStrategy.h"

typedef struct 
{
    IStrategy StratA;

} ConcreteStrategyA;


ConcreteStrategyA* New_ConcreteStrategyA();

void Contructor_ConcreteStrategyA(ConcreteStrategyA *);

void Destructor_ConcreteStrategyA(ConcreteStrategyA*);


#endif