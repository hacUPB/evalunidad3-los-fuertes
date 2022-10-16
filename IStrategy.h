#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

typedef void (*Algorithm)(void *);

typedef struct 
{
    Algorithm Al;
} IStrategy ;

IStrategy *New_IStrategy();

void Contructor_IStrategy(IStrategy*);

void Destructor_IStrategy( IStrategy *);

char* Funcion(IStrategy *);

#endif 