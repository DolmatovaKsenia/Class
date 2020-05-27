// Files.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

// Записать несколько строк в файл.
// Вывести на консоль первое слово из файла.
// Вывести на консоль оставшуюся часть строки.

int main()
{
    setlocale(LC_ALL, "Russian");

    char* str = new char[15];
    cin >> str;
    cout << str << endl;
    delete[] str;
}