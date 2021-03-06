#include <iostream>
#include <limits.h>

using namespace std;

/// <summary>
/// �������
/// </summary>
struct Queue
{
	struct Node
	{
		Node(int value)
		{
			this->value = value;
		}

		int value = 0;
		Node* next = nullptr;
		Node* prev = nullptr;
	};

	Node* first = nullptr;
	Node* next = nullptr;
	int minimum = -1;

	int count = 0;

	int size()
	{
		return count;
	}

	void push(int value)
	{
		if (count == 0)
		{
			first = new Node(value);
			next = first;
			minimum = value;
		}
		else
		{
			next->next = new Node(value);
			next->next->prev = next;
			next = next->next;

			if (value < minimum)
			{
				minimum = value;
			}
		}

		++count;
	}

	void pop()
	{
		if (count != 0)
		{
			int lastFirstValue = first->value;

			if (first->next != nullptr)
			{
				Node* temp = first;
				first = first->next;
				first->prev = nullptr;
				delete temp;
			}
			else
			{
				delete first;
				first = nullptr;
			}

			if (lastFirstValue == minimum)
			{
				minimum = minLinear();
			}

			--count;
		}
	}

	int min()
	{
		return minimum;
	}

	int minLinear()
	{
		if (count == 0)
		{
			cout << "The queue is empty!!!" << endl;
			return -1;
		}

		int minimum = INT_MAX;

		Node* temp = first;

		while (temp != nullptr)
		{
			if (temp->value < minimum)
			{
				minimum = temp->value;
			}

			temp = temp->next;
		}

		return minimum;
	}
};