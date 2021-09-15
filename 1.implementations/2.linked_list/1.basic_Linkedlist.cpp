#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *f, *l, *p, *n;
	int num;
	f = NULL;
	cout << "Enter numbers ending with -1 \n";
	cin >> num;
	while (num != -1)
	{
		n = new node;
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
		cout << "Enter next number \n";
		cin >> num;
	}
	p = f;
	while (p != NULL)
	{
		cout << p->data << "\n";
		p = p->next;
	}

	//INSERT AT THE START
	int data;
	cin >> data;
	node *first = f;
	node *ins = new node;
	ins->data = data;
	ins->next = first;
	f = ins;
	p = f;
	while (p != NULL)
	{
		cout << p->data << "\n";
		p = p->next;
	}
}
