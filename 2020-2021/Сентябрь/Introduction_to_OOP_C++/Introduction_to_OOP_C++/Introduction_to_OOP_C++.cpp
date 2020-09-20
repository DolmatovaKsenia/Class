

#include <iostream>
#include "Product.h"
#include <cassert>

// Параметры по умолчанию
/*
class Point
{
    int x = 5;
};
*/

using namespace std;

int main()
{
    // Контроль некорректного ввода.
    
    int positiveNumber = 0;
    cout << "Input positive number: ";
    cin >> positiveNumber;

    // Варианты развития событий:
    // - упасть 
    // assert(positiveNumber > 0);
    // - попросить ввести число еще раз (до тех пор, пока пользователь не введет положительное число)

    while (positiveNumber <= 0)
    {
        cout << "Incorrect input!!!" << endl;
        cout << "Input positive number: ";
        cin >> positiveNumber;
    }

    return 0;
}
