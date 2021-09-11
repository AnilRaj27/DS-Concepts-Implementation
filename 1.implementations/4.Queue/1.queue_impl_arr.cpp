#include <bits/stdc++.h>
using namespace std;
#define MAX 5

int q[MAX], front = -1, rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

void enqueue(int num)
{
    if (rear == MAX)
        cout << "Queue is Full" << endl;
    else if (isEmpty())
        front = rear = 0;
    else
        rear++;
    q[rear] = num;
}

void dequeue()
{
    if (isEmpty())
        cout << "Queue is Empty" << endl;
    else if (front == rear)
        front = rear = -1;
    else
    {
        cout << q[front] << endl;
        front++;
    }
}

void display()
{
    int temp = front;
    if (front == rear)
        cout << "the queue is empty";
    else
    {
        while (temp < rear)
        {
            cout << q[temp] << " ";
            temp++;
        }
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
