#include "Vasya.h"
#include <iostream>

using namespace std;

int findHowManyMetersIceCreamByHouse(int houseCoord, int d)
{
    int righterIceCream = houseCoord;
    while (righterIceCream % d != 0)
    {
        ++righterIceCream;
    }

    int lefterIceCream = houseCoord;
    while (lefterIceCream % d != 0)
    {
        --lefterIceCream;
    }

    int minDist = abs(houseCoord - righterIceCream);
    if (abs(houseCoord - lefterIceCream) < minDist)
    {
        minDist = abs(houseCoord - lefterIceCream);
    }
    return minDist;
}

void vasyaTask()
{
    int A = 0;
    int B = 0;
    int d = 0;
    cin >> A >> B >> d;

    int houseCoord = 0;
    int toIceCream = 0;
    int intCoord = 0;

    if (A % 2 == B % 2)
    {
        houseCoord = (A + B) / 2;
        toIceCream = findHowManyMetersIceCreamByHouse(houseCoord, d);
    }
    else
    {
        intCoord = (A + B) / 2;
        int toIceCreamLeft = findHowManyMetersIceCreamByHouse(intCoord, d);
        int toIceCreamRight = findHowManyMetersIceCreamByHouse(intCoord + 1, d);

        if (toIceCreamLeft < toIceCreamRight)
        {
            houseCoord = intCoord;
            toIceCream = toIceCreamLeft;
        }
        else
        {
            houseCoord = intCoord + 1;
            toIceCream = toIceCreamRight;
        }
    }

    cout << houseCoord << " " << toIceCream << endl;
}