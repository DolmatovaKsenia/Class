#include "Functions.h"
#include <iostream>

using namespace std;

// Напишите функцию power, реализующую возведение целого числа в неотрицательную 
// целую степень. Функция power должна принимать на вход два целых числа и 
// возвращать целое число (смотрите шаблон кода).
int power(int x, unsigned p) 
{
    int answer = 1;
    if (p == 0) 
    {
        return answer;
    }
    for (int i = 0; i < p; i++)
    {
        answer *= x;
    }

    return answer;
}

// Напишите программу для решения квадратных уравнений вида a x^2 + b x + c = 0
void squaredEquations()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a >> b >> c;
    double D = (b * b) - (4 * a * c);
    double x1 = 0;
    double x2 = 0;

    if (D < 0)
    {
        cout << "No real roots" << endl;
        return;
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
    }
    else if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
    }
    cout << x1 << ' ' << x2 << endl;
}

// Наиб p: 2^p <= input
int findsPower(int number)
{
    int product = 1;
    int count = 0;

    while (product <= number)
    {
        product *= 2;
        ++count;
    }

    return count - 1;
}