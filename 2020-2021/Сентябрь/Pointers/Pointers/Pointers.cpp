#include <iostream>

using namespace std;

void basicPointers();

void swap(int* a, int* b);

int main()
{    

    return 0;
}

void workWithSwap()
{
    int a = 2;
    int b = 5;
    cout << "a = " << a << "; b = " << b << endl;

    swap(&a, &b);
    cout << "a = " << a << "; b = " << b << endl;
}

void swap(int* a, int* b)
{
    int temp = *a;

    // *а - меняем значение по адресу на который указывает указатель (a)
    // *b - получаем значение по адресу на который указывает указатель (b)
    *a = *b;
    *b = temp;
}

void basicPointers()
{
    int a = 3;
    cout << "a = " << a << endl;

    int* p; // указатель на тип int
    p = &a; // взятие адреса


    // * - разыменование укзателя (получение значения)
    *p = 5; // меняем значение по адресу на который указывает указатель

    cout << "a = " << a << endl;
}