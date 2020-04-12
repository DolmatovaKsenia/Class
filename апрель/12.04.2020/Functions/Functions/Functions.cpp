#include <iostream>
#include <cassert>

using namespace std;

bool isEven(int number);

int lowerPrimes(int number);

bool isPrime(int number);

int power(int number, int pow);

int fibonacciRec(int index);

int fibonacciIter(int index);

int main()
{
    cout << fibonacciIter(50) << endl;

    return 0;
}

int fibonacciRec(int index)
{
    if (index == 1 || index == 2)
    {
        return 1;
    }

    return fibonacciRec(index - 2) + fibonacciRec(index - 1);
}

int fibonacciIter(int index)
{
    if (index == 1 || index == 2)
    {
        return 1;
    }

    int prevPrev = 1;
    int prev = 1;

    int currentNumber = prev + prevPrev;

    for (int i = 3; i < index + 1; ++i)
    {
        prevPrev = prev;
        prev = currentNumber;
        currentNumber = prevPrev + prev;            
    }

    return currentNumber;
}

int power(int number, int pow)
{
    assert(pow >= 0);

    if (pow == 0)
    {
        return 1;
    }

    int result = 1;

    for (int i = 0; i < pow; ++i)
    {
        result *= number;
    }

    return result;
}

bool isEven(int number)
{
    return number % 2 == 0;
}

int lowerPrimes(int number)
{
    int countPrimes = 0;

    for (int i = 2; i < number; ++i)
    {
        if (isPrime(i))
        {
            ++countPrimes;
        }
    }

    return countPrimes;
}

bool isPrime(int number)
{
    if (number == 2)
    {
        return true;
    }

    for (int i = 2; i < sqrt(number) + 1; ++i)
    {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
