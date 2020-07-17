#include <iostream>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

void relation();

void bankRobbery();

void greatBattle();

void barChart();

int main()
{
	barChart();

	return 0;
}

void relation()
{
	int numberOfElements = 0;
	cin >> numberOfElements;

	int min = 5001;
	int max = 0;
	int minPos = 0;
	int maxPos = 0;

	int number = 0;
	int prev = 0;
	cin >> number;

	prev = number;

	float maxRelation = -1;

	for (int i = 2; i <= numberOfElements; ++i)
	{
		if (prev < min)
		{
			min = prev;
			minPos = i - 1;
		}

		cin >> number;

		if (float(number) / min > maxRelation)
		{
			maxRelation = float(number) / min;
			max = number;
			maxPos = i;
		}

		prev = number;
	}

	if (maxRelation > 1)
	{
		cout << minPos << " " << maxPos << endl;
	}
	else
	{
		cout << "0 0" << endl;
	}
}

void bankRobbery()
{
	int numberOfCells = 0;
	cin >> numberOfCells;
	int step = 0;
	cin >> step;
	int maxValue = 0;
	int leftCell = 0;
	int leftCellPos = 0;
	int rightCell = 0;
	int rightCellPos = 0;

	if (step > 1)
	{
		int* dist = new int[step];

		for (int i = 0; i < step; ++i) // 2 4 3 1 4 4
		{
			cin >> dist[i];
		}

		leftCell = dist[0];

		int max = INT_MIN;
		int maxPos = 0;

		for (int i = step; i < numberOfCells; ++i)
		{
			int current = 0;
			cin >> current; // 2 4 3 1 4 4

			if (dist[0] > max)
			{
				max = dist[0];
				maxPos = i - step;
			}

			if (max + current > maxValue)
			{
				maxValue = max + current;
				leftCell = max;
				leftCellPos = maxPos;
				rightCellPos = i;
				rightCell = current;
			}

			for (int j = 0; j < step - 1; ++j)
			{
				dist[j] = dist[j + 1];
			}

			dist[step - 1] = rightCell;

		}

		cout << leftCellPos + 1 << " " << rightCellPos + 1 << endl;
		cout << leftCell << " " << rightCell << endl;

		delete[] dist;
	} 
	else // Решить задачу без использования массива большой длины.
	{
		int max1 = -1;
		int max2 = -1;
		int arr[100000];
		int max1Pos = 0;
		int max2Pos = 0;
		for (int i = 1; i <= numberOfCells; ++i)
		{
			cin >> arr[i];
			if (arr[i] > max1)
			{
				max1 = arr[i];
				max1Pos = i;
			}
		}
		for (int i = 1; i <= numberOfCells; ++i)
		{
			if (arr[i] > max2 && arr[i] < max1)
			{
				max2 = arr[i];
				max2Pos = i;
			}
		}

		cout << max2Pos << " " << max1Pos << endl;
	}
}

void greatBattle()
{
	int INF = 2e9 + 1;
	int n; 
	cin >> n;
	vector<int> a(n + 2, -INF);
	vector<int> ans(n + 2);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	vector<int> st;
	st.push_back(0);
	for (int i = 1; i < n + 2; ++i)
	{
		while (a[st.back()] > a[i])
		{
			if (i == n + 1)
			{
				ans[st.back()] = -1;
			}
			else
			{
				ans[st.back()] = i - 1;
			}
			st.pop_back();
		}
		st.push_back(i);
	}
	for (int i = 1; i <= n; ++i)
		cout << ans[i] << " ";
	cout << endl;
}

void barChart()
{
	int INF = 2e9 + 1;
	int n; cin >> n;
	vector<int> h(n + 2, -INF);
	vector<int> right(n + 2);
	vector<int> left(n + 2);
	for (int i = 1; i <= n; ++i)
		cin >> h[i];
	vector<int> st;
	st.push_back(0);
	for (int i = 1; i < n + 2; ++i)
	{
		while (h[st.back()] > h[i])
		{
			right[st.back()] = i;
			st.pop_back();
		}
		st.push_back(i);
	}

	st.clear();
	st.push_back(n + 1);
	for (int i = n; i > -1; --i)
	{
		while (h[st.back()] > h[i])
		{
			left[st.back()] = i;
			st.pop_back();
		}
		st.push_back(i);
	}

	// Поиск прямоугольника максимальной площади.

	long long int maxS = -1;

	for (int i = 1; i < n + 1; ++i)
	{
		int currentS = h[i];
		int width = 1;

		width += i - left[i] - 1;

		if (right[i] != n + 1)
		{
			width += right[i] - i - 1;
		}
		else
		{
			width += n - i;
		}

		currentS *= width;

		if (currentS > maxS)
		{
			maxS = currentS;
		}
	}

	cout << maxS << endl;
}