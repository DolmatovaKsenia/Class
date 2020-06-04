#include "Points.h"
#include <iostream>

// Задача про точки

int gcd(int a, int b)
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

int points(int a, int b, int c, int d)
{
    int x = abs(a - c);
    int y = abs(b - d);
    int nod = gcd(x, y);

    return (x / nod + y / nod - 1) * nod;
}