#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
};

TreeNode *root = NULL;

TreeNode *createNode(int val)
{
    TreeNode *node = new TreeNode;
    node->data = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void insert(int num)
{
    if (root == NULL)
        root = createNode(num);
    else
    {
        TreeNode *temp = root;
        TreeNode *node = createNode(num);

        while (temp->left || temp->right)
        {
            if (node->data < temp->data && temp->left)
                temp = temp->left;
            else if (node->data > temp->data && temp->right)
                temp = temp->right;
            else
                break;
        }

        if (node->data < temp->data)
            temp->left = node;
        else
            temp->right = node;

        delete temp;
    }
}

int main()
{
    // root = createNode(6);

    cout << "Perform Operations in the Tree: " << endl;
    cout << "1.Insert\n2.Delete\n3.Print BST\n"
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
            insert(num);
            break;
        case 2:
            int num1;
            cin >> num1;
            // remove(num);
            break;
        case 3:
            // print_bst();
            break;
        default:
            cout << "Your Stack is: " << endl;
            // print_bst();
            exit(1);
        }
    }

    return 0;
}