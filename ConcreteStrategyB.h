#ifndef CONCRETESTRATEGYB_H_
#define CONCRETESTRATEGYB_H_

#include "IStrategy.h"

typedef struct 
{
    IStrategy StratB;
} ConcreteStrategyB ;

ConcreteStrategyB * New_ConcreteStrategyB();


#endif