#include <iostream>

using namespace std;

// здесь условие
void task1()
{
	// здесь делаешь задачу

	/*
	hahaha	
	*/

	cout << "hahaha" << endl;
}

void task2()
{

}

int main()
{
	task2();

	// int
	// float, double (более точный)
	// bool

	// ctrl+F5 - запуск
	// F10, F11 отладка

	setlocale(LC_ALL, "Russian");

	cout << "Hello, world!\n" << endl; // о переходах на новую строку
	cout << "Hello" << "world" << "!" << endl;

	int number1 = 1;
	int number2 = 2;
	int sum = number1 + number2;

	cout << "Sum is " << number1 + number2 << endl;
	cout << "Sum is " << sum << endl;

	cout << "Input number (positive)" << endl;
	int number = 0;
	cin >> number;
	cout << "Number is " << number << endl << endl;

	// mod - %
	// div - /

	if (number % 2 == 0)
	{
		cout << number << " чётное" << endl;
	}
	else
	{
		cout << number << " нечётное" << endl;
	}

	// while (условие)
	// {
	//
	// }


	// +=, -=, *=, /=, %=
	// i += 1  <=> ++i, i++ (--i, i--)

	// <>  <=> !=

	for (int i = 0; i < number; ++i)
	{
		cout << "User is loser" << endl;
	}

	int const size = 9;
	int arr[size]{ 0 }; // только для нуля работает

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;

	int matrix[3][5]{ 0 }; // матрица нулями заполнена

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}