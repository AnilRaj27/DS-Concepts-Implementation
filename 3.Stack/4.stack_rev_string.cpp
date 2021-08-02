#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{

    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    //reverse a string using stack
    vector<char> v = {'a', 'b', 'c'};

    stack<char> s;

    for (auto i : v)
    {
        s.push(i);
        v.pop_back();
    }

    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    for (auto i : v)
        cout << i << endl;

    //reverse a linkedlist using stack
    Node *head = NULL;
    push(&head, 10);
    push(&head, 12);

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    stack<Node *> s1;

    temp = head;
    while (temp)
    {
        s1.push(temp);
        temp = temp->next;
    }

    // while (!s1.empty())
    // {
    //     cout << s1.top()->data << " ";
    //     s1.pop();
    // }

    // head = s1.top();
    // temp = head;
    // while (!s1.empty())
    // {
    //     temp->next = s1.top();
    //     s1.pop();
    //     temp = temp->next;
    // }

    return 0;
}