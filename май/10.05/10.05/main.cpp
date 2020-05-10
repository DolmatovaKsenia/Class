#include <iostream>
#include "Functions.h"

using namespace std;

// Структура точка
struct Point
{
	// Переменные внутри структуры называются полями.
	int x;
	int y;

	// покоординатная сумма
	void sumOfTwoPoints(int x1, int y1)
	{
		cout << "(" << x + x1 << "; " << y + y1 << ")" << endl;
	}

	// Функция внутри структуры - метод.
	// Вычисляет сумму координат.
	int sumCoordinates()
	{
		return x + y;
	}

	void print()
	{
		cout << "(" << x << "; " << y << ")" << endl;
	}
};

int main()
{
	Point p;
	p.x = 5;
	p.y = 7;


	cout << p.x << " " << p.y << endl;
	cout << "Sum of coordinates: " << p.sumCoordinates() << endl;
	p.print();
	cout << "Sum of two points: ";
	p.sumOfTwoPoints(1, 1);
	
}