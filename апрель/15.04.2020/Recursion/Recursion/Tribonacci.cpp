#include "Tribonacci.h"
#include <cassert>

int tribonacciRec(int number)
{
	assert(number >= 0);

	if (number == 0 || number == 1)
	{
		return 0;
	}

	if (number == 2)
	{
		return 1;
	}

	return tribonacciRec(number - 1) + tribonacciRec(number - 2) + tribonacciRec(number - 3);
}

int tribonacciIter(int number)
{
	assert(number >= 0);

	if (number == 0 || number == 1)
	{
		return 0;
	}

	if (number == 2)
	{
		return 1;
	}

	int prev = 1;
	int prevPrev = 0;
	int prevPrevPrev = 0;
	int currentNumber = prev + prevPrev + prevPrevPrev;

	for (int i = 0; i < number - 3; ++i)
	{
		prevPrevPrev = prevPrev;
		prevPrev = prev;
		prev = currentNumber;
		currentNumber = prev + prevPrev + prevPrevPrev;
	}

	return currentNumber;
}