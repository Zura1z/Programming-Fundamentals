#include <stdlib.h>
#include <time.h>

void initializeRandom() 
{
	srand( time(0) );
}

int getComputerChoice()
{		
    return rand() % 3 + 1;
}
