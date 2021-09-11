// C++ program for linked list implementation of stack
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void push(Node **x, int data)
{
    Node *newNode = createNode(data);

    // x->data = 2;
    (*x)->data = 2;

    cout << newNode->data << endl;
}

int main()
{
    //difference between passing pointer as a normal vs address of a pointer -> Ex: push(head, 10) vs push(&head, 10)

    Node *head = new Node();
    head->data = 1;
    cout << "Before pushed: " << head->data << endl;
    push(&head, 10);
    cout << "After pushed: " << head->data << endl;

    return 0;
}