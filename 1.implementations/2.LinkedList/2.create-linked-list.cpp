#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int num;
    cout << "Enter number of elemetns you want to insert: ";
    cin >> num;

    node *last, *head;
    head = NULL;

    cout << "Enter data:" << endl;
    while (num != 0)
    {
        node *new_node = new node;
        int val;
        cin >> val;
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
            last = new_node;
        }
        else
        {
            last->next = new_node;
            last = new_node;
        }

        num--;
    }

    node *it = head;
    int count = 0;
    while (it != NULL)
    {
        count++;
        if (count == 3)
            cout << it->data << " ";
        it = it->next;
    }

    cout << "count: " << count << endl;
    cout << endl;

    return 0;
}