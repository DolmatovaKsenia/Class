#include <iostream>

using namespace std;

struct ListQueue
{
	struct Node
	{
		int value = 0;
		Node* next = nullptr;

		Node(int value)
		{
			this->value = value;
		}
	};

	Node* head = nullptr;
	int count = 0;

	int size()
	{
		return count;
	}

	void insert(int value)
	{
		++count;

		if (head == nullptr)
		{
			head = new Node(value);
		}
		else
		{
			if (value < head->value)
			{
				auto* oldHead = head;
				head = new Node(value);
				head->next = oldHead;
			}
			else
			{
				auto* current = head;

				while (current != nullptr)
				{
					if (value >= current->value && current->next != nullptr && value <= current->next->value)
					{
						auto* lastNext = current->next;
						current->next = new Node(value);
						current->next->next = lastNext;
						break;
					}
					else if (current->next == nullptr)
					{
						current->next = new Node(value);
						break;
					}

					current = current->next;
				}
			}
		}
	}

	int peekFirst()
	{
		if (count > 0)
		{
			return head->value;
		}

		return -1;
	}

	int peekSecond()
	{
		if (count > 1)
		{
			return head->next->value;
		}

		return -1;
	}

	void popFirst()
	{
		if (count > 0)
		{
			auto* oldHead = head;
			head = head->next;
			delete oldHead;
			--count;
		}
	}
};

int main()
{

	ListQueue numberOfPeopleInEveryCountry;

	int countOfProvincies = 0;

	cin >> countOfProvincies;

	int numberOfPeople = 0;

	for (int i = 0; i < countOfProvincies; ++i)
	{
		cin >> numberOfPeople;
		numberOfPeopleInEveryCountry.insert(numberOfPeople);
	}

	int numberOfNewPassports = 0;

	while (numberOfPeopleInEveryCountry.size() != 1)
	{
		int countPeopleInNewCountry = numberOfPeopleInEveryCountry.peekFirst() + numberOfPeopleInEveryCountry.peekSecond();
		numberOfNewPassports += countPeopleInNewCountry;
		numberOfPeopleInEveryCountry.popFirst();
		numberOfPeopleInEveryCountry.popFirst();
		numberOfPeopleInEveryCountry.insert(countPeopleInNewCountry);
	}

	cout << numberOfNewPassports << endl;

	return 0;
}