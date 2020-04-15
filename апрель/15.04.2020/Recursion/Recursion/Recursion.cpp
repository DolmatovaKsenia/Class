#include "Tribonacci.h"
#include <iostream>
#include <cassert>

using namespace std;

void printNumbersToNReverse(int number)
{
	assert(number > 0);

	if (number == 1)
	{
		cout << number << " ";
		return;
	}

	printNumbersToNReverse(number - 1);
	cout << number << " ";
}

// Дано натуральное число n. Выведите все числа от n до 1.
void printNumbersToNDirect(int number)
{
	assert(number > 0);

	if (number == 1)
	{
		cout << number << " ";
		return;
	}

	cout << number << " ";
	printNumbersToNDirect(number - 1);
}

// Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или 
// слово NO в противном случае.
bool isPowerOfTwo(int number)
{
	assert(number > 0);

	if (number == 1)
	{
		return true;
	}

	if (number % 2 == 1)
	{
		return false;
	}

	return isPowerOfTwo(number / 2);
}

// Дано натуральное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами 
// или новыми строками.
void printDigitsReverse(int number)
{
	assert(number >= 0);

	if (number == 0)
	{
		return;
	}

	cout << number % 10 << " ";

	printDigitsReverse(number / 10);
}