#include <bits/stdc++.h>
using namespace std;
#define MAX 5

int s[MAX], top;
void initstack()
{
	top = -1;
}

int isFULL()
{
	if (top == MAX - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int num)
{
	if (isFULL())
	{
		cout << "Stack is FULL"
			 << "\n";
		return;
	}
	else
	{
		top = top + 1;
		s[top] = num;
		cout << num << " "
			 << "has been inserted"
			 << "\n";
	}
}

int isEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty"
			 << "\n";
		return;
	}
	else
	{
		cout << "The element popped is :" << s[top] << "\n";
		top = top - 1;
	}
}

void display()
{
	if (isEmpty())
	{
		cout << "Stack is empty"
			 << "\n";
		return;
	}
	else
	{
		for (int i = top; i >= 0; i--)
		{
			cout << s[i] << " ";
		}
		cout << "\n";
	}
}
int main()
{
	int num;
	initstack();
	char ch;
	do
	{
		int choice;
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the number to push:"
				 << "\n";
			cin >> num;
			push(num);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			cout << "Invalid";
		}
		cout << "Do you want to continue?(Y/y)";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	return 0;
}
