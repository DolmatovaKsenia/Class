#include "Recursion.h"
#include <cassert>
#include <iostream>

using namespace std;

// ���� ��� ����� ����� A � � (������ � ��������� ������). �������� ��� ����� �� A �� B
// ������������, � ������� �����������, ���� A < B, ��� � ������� �������� � ��������� 
// ������.
void printFromAToB(int a, int b)
{
	if (a == b) {
		cout << a;
	}
	else if (a > b) {
		cout << a << " ";
		printFromAToB(a - 1, b);
	}
	else {
		cout << a << " ";
		printFromAToB(a + 1, b);
	}
}

// ������� ���������
int ackermann(int m, int n)
{
	assert(m >= 0 && n >= 0);

	if (m == 0)
	{
		return n + 1;
	}
	else if (m > 0 && n == 0)
	{
		return ackermann(m - 1, 1);
	}
	else
	{
		return ackermann(m - 1, ackermann(m, n - 1));
	}
}

// ���� ����������� ����� N. ��������� ����� ��� ����.
int sumOfDigits(int number)
{
	assert(number > 0);

	if (number < 10)
	{
		return number;
	}

	return number % 10 + sumOfDigits(number / 10);
}

// ���� ����������� ����� n>1. �������� ��� ������� �������� ����� ����� � ������� 
// ���������� � ������ ���������.
void primeDivisors(int number, int divisor)
{
	if (number % divisor == 0)
	{
		cout << divisor << " ";
		primeDivisors(number / divisor, divisor);
	}
	else if (number == divisor && number != 1)
	{
		cout << number << " ";
	}
	else if (number % divisor != 0)
	{
		primeDivisors(number, divisor + 1);
	}
}