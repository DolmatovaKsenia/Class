#include "Diof.h"

int nod(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    return a + b;
}

bool hasRootsInIntegers(int a, int b, int c)
{
    return c % nod(a, b) == 0;
}

void taskDiof()
{
    
}