#include <bits/stdc++.h>
#include <iostream>
#define MAX 5

using namespace std;

int top1 = -1;
int top2 = -1;
int arr[MAX];
int n = MAX;

void push1(int value)
{
    if (top1 < n / 2)
    {
        top1++;
        arr[top1] = value;
    }
}

void push2(int value)
{
    if (top2 == -1)
    {
        top2 = n / 2;
        if (n % 2 != 0)
            top2 = n / 2 + 1;
        arr[top2] = value;
    }
    else if (top2 < n - 1)
    {
        top2++;
        arr[top2] = value;
    }
}

int pop1()
{
    if (top1 != -1)
    {
        int val = arr[top1];
        top1--;
        return val;
    }
    return -1;
}

int pop2()
{
    if (n % 2 == 0)
    {
        if (top2 >= n / 2 && top2 < n)
        {
            int val = arr[top2];
            top2--;
            return val;
        }
    }
    else if (n % 2 != 0)
    {
        if (top2 > n / 2 && top2 < n)
        {
            int val = arr[top2];
            top2--;
            return val;
        }
    }
    else
    {
        cout << "Underflow" << endl;
    }
    return -1;
}

int main()
{

    push1(11);
    push1(131);
    push1(122);
    push1(128);
    push2(112);
    push2(1321);
    push2(1222);

    pop2();
    pop2();
    pop2();

    pop2();
    pop2();
    pop2();
    pop2();
    pop2();

    cout << arr[top2] << endl;
}
