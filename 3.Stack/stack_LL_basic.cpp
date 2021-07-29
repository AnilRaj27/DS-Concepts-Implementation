#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
};

node *f = NULL, *l = NULL;
void push(int num)
{
	node *n = new node;
	n->data = num;
	n->next = NULL;
	if (f == NULL)
	{
		f = n;
		l = n;
	}
	else
	{
		l->next = n;
		l = n;
	}
}

void pop()
{
	node *temp;
	if (l == NULL)
	{
		cout << "UNDERFLOW CONDITION:"
			 << "\n";
		return;
	}
	else
	{
		node *p = f;
		while (p != NULL)
		{
			if (p == l)
			{
				cout << p->data << "\n";
				temp->next = l->next;
				l = temp;
				break;
			}
			else
			{
				temp = p;
				p = p->next;
			}
		}
	}
}

int main()
{
	int num;
	while (1)
	{
		int choice;
		cout << "ENTER CHOICE"
			 << "\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter number to push:"
				 << "\n";
			cin >> num;
			push(num);
			break;
		case 2:
			cout << "POP"
				 << "\n";
			pop();
			break;
		case 3:
			cout << "The top element is:"
				 << "\n";
			cout << l->data << "\n";
			break;
		case 4:
			exit(0);
		}
	}
	return 0;
}
