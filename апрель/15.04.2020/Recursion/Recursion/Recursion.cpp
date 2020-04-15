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

// ���� ����������� ����� n. �������� ��� ����� �� n �� 1.
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

// ���� ����������� ����� N. �������� ����� YES, ���� ����� N �������� ������ �������� ������, ��� 
// ����� NO � ��������� ������.
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

// ���� ����������� ����� N. �������� ��� ��� ����� �� �����, � �������� �������, �������� �� ��������� 
// ��� ������ ��������.
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