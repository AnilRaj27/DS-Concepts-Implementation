#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *tail = NULL;

void push()
{
	int val;
	cout << "\nEnter Data : ";
	cin >> val;
	node *n = new node;
	n->data = val;
	n->next = NULL;
	if (tail == NULL)
	{
		tail = n;
		tail->next = tail;
	}

	else
	{
		n->next = tail->next;
		tail->next = n;
		tail = n;
	}
}

void pop()
{
	if (tail == NULL)
	{
		cout << "\nUnderflow";
	}
	else
	{
		node *temp = tail->next;
		tail->next = tail->next->next;
		cout << "\nPopped Element " << temp->data;
		delete (temp);
	}
}

inline void front()
{
	if (tail == NULL)
	{
		cout << "\n -1";
	}
	else
		cout << "\nFront is : " << tail->next->data;
}

int main()
{
	while (true)
	{
		cout << "\nEnter the choice \n";
		cout << "1.ENQUEUE \n";
		cout << "2.DEQUEUE \n";
		cout << "3.FRONT \n";
		cout << "4.EXIT \n";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			front();
			break;
		case 4:
			exit(0);
		}
	}
	return 0;
}
