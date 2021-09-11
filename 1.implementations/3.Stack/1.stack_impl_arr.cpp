#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int s[MAX], top;

void initstack()
{
    top = -1;
}

bool isFull()
{
    if (top == MAX - 1)
        return true;
    return false;
}

bool isEmpty()
{
    if (top == -1)
        return true;
    return false;
}

void push(int num)
{
    if (!isFull())
    {
        top++;
        s[top] = num;
        cout << "Your num has been inserted" << endl;
    }
    else
        cout << "Stack Overflow" << endl;
}

void pop()
{
    if (!isEmpty())
        top = top - 1;
    else
        cout << "Stack is Empty!." << endl;
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
            cout << s[i] << " ";
        cout << endl;
    }
}

int main()
{

    initstack();

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