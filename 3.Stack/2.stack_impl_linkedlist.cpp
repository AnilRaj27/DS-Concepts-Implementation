#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

Node *head;

void push(int num)
{
    Node *newNode = new Node;
    newNode->data = num;
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        head = newNode;
        head->next = temp;
    }
}

void pop()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "Underflow Condition" << endl;
        return;
    }
    else
    {
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
}

void display()
{
    Node *it = head;
    while (it != NULL)
    {
        cout << it->data << " ";
        it = it->next;
    }
    cout << endl;
}

int main()
{

    head = NULL;

    cout << "Perform Operations in the stack: " << endl;
    cout << "1.Push\n2.Pop\n3.Print Stack\n"
         << endl;

    while (true)
    {
        cout << "Enter your choice: " << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number to push: "
                 << endl;
            int num;
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
            cout << "Your Stack is: " << endl;
            display();
            exit(1);
        }
    }

    return 0;
}