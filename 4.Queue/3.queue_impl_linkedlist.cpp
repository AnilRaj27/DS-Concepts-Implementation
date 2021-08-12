#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;
node *last = NULL;

node *createNode(int num)
{
    node *newnode = new node;
    newnode->data = num;
    newnode->next = NULL;

    return newnode;
}

void enqueue(int num)
{
    node *newnode = createNode(num);

    if (head == NULL)
    {
        head = newnode;
        last = newnode;
    }
    else
    {
        last->next = newnode;
        last = newnode;
    }
}

void dequeue()
{
    if (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    else
        cout << "Queue is empty" << endl;
}

void display()
{
    node *itr = head;

    while (itr != NULL)
    {
        cout << itr->data << " ";
        itr = itr->next;
    }
    cout << endl;
}

int main()
{

    cout << "Perform Operations in the Queue: " << endl;
    cout << "1.Enqueue\n2.Dequeue\n3.Print Queue\n"
         << endl;

    while (true)
    {
        cout << "Enter your choice: " << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            int num;
            cout << "Enter the number to Enqueue: "
                 << endl;
            cin >> num;
            enqueue(num);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            cout << "Your Queue is: " << endl;
            display();
            exit(1);
        }
    }

    return 0;
}
