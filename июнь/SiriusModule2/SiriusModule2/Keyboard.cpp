#include "Keyboard.h"
#include <iostream>

using namespace std;

void keyboardTask()
{
	int const size = 101;
	int buttonsMaxPresses[size] {0};
	int buttonsPressed[size] {0};

	int buttonsCount = 0;
	cin >> buttonsCount;

	for (int i = 1; i <= buttonsCount; ++i)
	{
		int maxPresses = 0;
		cin >> maxPresses;
		buttonsMaxPresses[i] = maxPresses;
	}

	int pressesCount = 0;
	cin >> pressesCount;

	for (int i = 1; i <= pressesCount; ++i)
	{
		int pressedButtonNum = 0;
		cin >> pressedButtonNum;
		++buttonsPressed[pressedButtonNum];
	}

	for(int i = 1; i < size; i++)
	{
		if (buttonsMaxPresses[i] != 0)
		{
			if (buttonsPressed[i] > buttonsMaxPresses[i])
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}

		}
	}
}